#include <starpu_mpi.h>
#include <starpu_profiling.h>
#include "data.h"

/* Take 24 bits for the tile id, and 7 bits for descriptor id.
   These values can be changed through the call MORSE_user_tag_size(int tag_width, int tag_sep) */
#define TAG_WIDTH_MIN 20
static int tag_width = 31;
static int tag_sep   = 24;
static int _tag_mpi_initialized_ = 0;

#define BLKLDD(A, k) A->get_blkldd( A,k )

inline static int elem_size(int type)
{
    if(type == 1) {
        return sizeof(float);
    }
    return sizeof(float);
}

inline static void* getaddr_ccrb(const starpu_ddesc_t *A, int m, int n)
{
  size_t mm = m + A->i / A->mb;
  size_t nn = n + A->j / A->nb;
  size_t eltsize = elem_size(A->dtyp);
  size_t offset = 0;

  assert( A->myrank == A->get_rankof( A, mm, nn) );
  mm = mm / A->p;
  nn = nn / A->q;

  if (mm < (size_t)(A->llm1)) {
    if (nn < (size_t)(A->lln1))
      offset = (size_t)(A->bsiz) * (mm + (size_t)(A->llm1) * nn);
    else
      offset = A->A12 + ((size_t)(A->mb * (A->lln%A->nb)) * mm);
  }
  else {
    if (nn < (size_t)(A->lln1))
      offset = A->A21 + ((size_t)((A->llm%A->mb) * A->nb) * nn);
    else
      offset = A->A22;
  }

  return (void*)((intptr_t)A->mat + (offset*eltsize) );
}

inline static int getblkldd_ccrb(const starpu_ddesc_t *A, int m)
{
  int mm = m + A->i / A->mb;
  return ( ((mm+1) == A->lmt) && ((A->lm % A->mb) != 0)) ? A->lm % A->mb : A->mb;
}

inline static int getrankof_2d(const starpu_ddesc_t *desc, int m, int n)
{
  return (m % desc->p) * desc->q + (n % desc->q);
}

static void desc_init( starpu_ddesc_t *ddesc, int dtyp, int mb, int nb, int bsiz,
                int lm, int ln, int i, int j,
                int m,  int n,  int p, int q, int my_rank, int desc_id)
{
  ddesc->get_blkaddr = getaddr_ccrb;
  ddesc->get_blkldd  = getblkldd_ccrb;
  ddesc->get_rankof  = getrankof_2d;
  // Matrix properties
  ddesc->dtyp = dtyp;
  // seems useless
  ddesc->styp = 103;

  ddesc->mb = mb;
  ddesc->nb = nb;
  ddesc->bsiz = bsiz;
  // Large matrix parameters
  ddesc->lm = lm;
  ddesc->ln = ln;
  // Large matrix derived parameters
  ddesc->lmt = (lm%mb==0) ? (lm/mb) : (lm/mb+1);
  ddesc->lnt = (ln%nb==0) ? (ln/nb) : (ln/nb+1);
  // Submatrix parameters
  ddesc->i = i;
  ddesc->j = j;
  ddesc->m = m;
  ddesc->n = n;
  // Submatrix derived parameters
  ddesc->mt = (m == 0) ? 0 : (i+m-1)/mb - i/mb + 1;
  ddesc->nt = (n == 0) ? 0 : (j+n-1)/nb - j/nb + 1;

  ddesc->id = desc_id;
  ddesc->occurences = 0;
  ddesc->use_mat = 1;
  ddesc->alloc_mat = 1;
  ddesc->register_mat = 1;

  ddesc->myrank = my_rank;

  // Grid size
  ddesc->p = p;
  ddesc->q = q;

  // Local dimensions in tiles
  if ( ddesc->myrank < (p*q) ) {
    ddesc->llmt = (ddesc->lmt + p - 1) / p;
    ddesc->llnt = (ddesc->lnt + q - 1) / q;

    // Local dimensions
    if ( ((ddesc->lmt-1) % p) == (ddesc->myrank / q) ) {
      ddesc->llm  = ( ddesc->llmt - 1 ) * mb + ((lm%mb==0) ? mb : (lm%mb));
    } else {
      ddesc->llm  =  ddesc->llmt * mb;
    }

    if ( ((ddesc->lnt-1) % q) == (ddesc->myrank % q) ) {
      ddesc->lln  = ( ddesc->llnt - 1 ) * nb + ((ln%nb==0) ? nb : (ln%nb));
    } else {
      ddesc->lln  =  ddesc->llnt * nb;
    }

    ddesc->llm1 = (ddesc->llm/mb);
    ddesc->lln1 = (ddesc->lln/nb);
  } else {
    ddesc->llmt = 0;
    ddesc->llnt = 0;
    ddesc->llm  = 0;
    ddesc->lln  = 0;
    ddesc->llm1 = 0;
    ddesc->lln1 = 0;
  }

  ddesc->mat = NULL;
  ddesc->A21 = (size_t)(ddesc->llm - ddesc->llm%mb)*(size_t)(ddesc->lln - ddesc->lln%nb);
  ddesc->A12 = (size_t)(           ddesc->llm%mb)*(size_t)(ddesc->lln - ddesc->lln%nb) + ddesc->A21;
  ddesc->A22 = (size_t)(ddesc->llm - ddesc->llm%mb)*(size_t)(           ddesc->lln%nb) + ddesc->A12;
}

static void * starpu_mat_alloc(size_t size)
{
  void *mat;

  if (starpu_malloc_flags(&mat, size, STARPU_MALLOC_PINNED|STARPU_MALLOC_COUNT) != 0)
    return NULL;
  return mat;
}

static void starpu_mat_free( void *mat, size_t size)
{
  starpu_free_flags(mat, size, STARPU_MALLOC_PINNED|STARPU_MALLOC_COUNT);
}

static void starpu_ddesc_create( starpu_ddesc_t *ddesc )
{
  int lmt = ddesc->lmt;
  int lnt = ddesc->lnt;

  starpu_data_handle_t *data_handle;
  /*
   * Allocate starpu_handle_t array (handlers are initialized on the fly when
   * discovered by any algorithm to save space)
   */
  ddesc->starpu_handle = (starpu_data_handle_t*)calloc(lnt*lmt,sizeof(starpu_data_handle_t));

  /*
   * Check that we are not going over MPI tag limitations
   */
  {
    if (!_tag_mpi_initialized_) {
      int *tag_ub = NULL;
      int ok = 0;

      MPI_Comm_get_attr(MPI_COMM_WORLD, MPI_TAG_UB, &tag_ub, &ok);

      if ( !ok ) {
        printf("error with ok check data.c line 191\n");
      }

      while ( ((uintptr_t)((1UL<<tag_width) - 1) > (uintptr_t)(*tag_ub) )
              && (tag_width >= TAG_WIDTH_MIN) ) {
        tag_width--;
        tag_sep--;
      }

      if ( tag_width < TAG_WIDTH_MIN ) {
        printf("error, check data.c line 201\n");
        return;
      }

      _tag_mpi_initialized_ = 1;
    }

    /* Check that we won't create overflow in tags used */
    if ( ((uintptr_t)(lnt*lmt)) > ((uintptr_t)(1UL<<tag_sep)) ) {
      printf("error, check data.c line 210\n");
      return;
    }
    //printf("lnt*lmt %lld, 1<<tag %lld\n", lnt*lmt, 1<<tag_sep);
    assert(lnt*lmt<=(1<<tag_sep));
  }
}

static void starpu_handle_destroy( starpu_ddesc_t *ddesc)
{
  /*
   * If this is the last descriptor using the matrix, we release the handle
   * and unregister the GPU data
   */
  starpu_data_handle_t *handle = (starpu_data_handle_t *)(ddesc->starpu_handle);
  starpu_data_handle_t *handle_head = handle;
  int lmt = ddesc->lmt;
  int lnt = ddesc->lnt;
  int m, n;

  for (n = 0; n < lnt; n++)
    for (m = 0; m < lmt; m++)
    {
      if (*handle == NULL)
      {
          handle++;
          continue;
      }
      starpu_data_unregister(*handle);
      handle++;
    }

  free(handle_head);
}

/* 
extern functions
*/

starpu_data_handle_t starpu_desc_getaddr( starpu_ddesc_t *desc, int m, int n )
{
  int64_t im = m + (desc->i / desc->mb);
  int64_t jn = n + (desc->j / desc->nb);

  starpu_data_handle_t *ptrtile = (starpu_data_handle_t*)(desc->starpu_handle);
  ptrtile += ((int64_t)(desc->lmt) * (int64_t)jn + (int64_t)im);

  if (*ptrtile == NULL) {
    int64_t eltsze = elem_size(desc->dtyp);
    int myrank = desc->myrank;
    int owner  = desc->get_rankof( desc, m, n );
    int tempmm = (im == desc->lmt-1) ? (desc->lm - im * desc->mb) : desc->mb;
    int tempnn = (jn == desc->lnt-1) ? (desc->ln - jn * desc->nb) : desc->nb;

    if ( myrank == owner ) {
      if ( desc->get_blkaddr(desc, m, n) == (void*)NULL ) {
          starpu_matrix_data_register(ptrtile, -1,
                                      (uintptr_t) NULL,
                                      BLKLDD(desc, im), tempmm, tempnn, eltsze);
      }
      else {
          starpu_matrix_data_register(ptrtile, STARPU_MAIN_RAM,
                                      (uintptr_t)desc->get_blkaddr(desc, m, n),
                                      BLKLDD(desc, im), tempmm, tempnn, eltsze);
      }
    }
    else {
      starpu_matrix_data_register(ptrtile, -1,
                                  (uintptr_t) NULL,
                                  BLKLDD(desc, im), tempmm, tempnn, eltsze);
    }

    {
      int64_t block_ind = desc->lmt * jn + im;
      starpu_mpi_data_register(*ptrtile, (desc->id << tag_sep) | (block_ind), owner);
    }
  } else {
  }

  return (*ptrtile);
}

starpu_ddesc_t* create_and_distribute_data(int rank, int world, int mb, int nb, int mt, int nt, int p, int q, int desc_id)
{
  starpu_ddesc_t *ddesc = (starpu_ddesc_t *)malloc(sizeof(starpu_ddesc_t));

  int m = mb * mt;
  int n = nb * nt;
  desc_init(ddesc, 1, mb, nb, mb*nb, m, n, 0, 0, m, n, p, q, rank, desc_id);
 // desc_init(ddesc, 1, mb, 1, mb, mt*mb, 1, 0, 0, mt*mb, 1, world, 1, rank);

  size_t size = (size_t)(ddesc->llm) * (size_t)(ddesc->lln)
              * (size_t)elem_size(ddesc->dtyp);

  ddesc->mat = starpu_mat_alloc(size);
  if(ddesc->mat == NULL) printf("Error check %s %d\n", __FILE__, __LINE__);
  ddesc->alloc_mat = 1;

  /* Create scheduler structure like registering data */
  starpu_ddesc_create( ddesc );

  return ddesc;
}

void destroy_data(starpu_ddesc_t *ddesc)
{
  size_t size = (size_t)(ddesc->llm) * (size_t)(ddesc->lln)
          * (size_t)elem_size(ddesc->dtyp);

  starpu_handle_destroy(ddesc);
  starpu_mat_free( ddesc->mat, size );
  free(ddesc);
  ddesc = NULL;
}

int desc_islocal(const starpu_ddesc_t *A, int m, int n)
{
  return (A->myrank == A->get_rankof(A, m, n));
}
