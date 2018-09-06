# /* Copyright 2018 Stanford University
#  *
#  * Licensed under the Apache License, Version 2.0 (the "License");
#  * you may not use this file except in compliance with the License.
#  * You may obtain a copy of the License at
#  *
#  *     http://www.apache.org/licenses/LICENSE-2.0
#  *
#  * Unless required by applicable law or agreed to in writing, software
#  * distributed under the License is distributed on an "AS IS" BASIS,
#  * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
#  * See the License for the specific language governing permissions and
#  * limitations under the License.
#  */

#!/bin/bash
#SBATCH --account=m2872
#SBATCH -L SCRATCH
#SBATCH -q debug
#SBATCH -c 32
#SBATCH --exclusive
#SBATCH -t 00:30:00
#SBATCH --mail-type=ALL
#SBATCH -C haswell

function launch {
    # srun -n $1 -N $1 --cpu_bind none ../../parsec/main "${@:2}" -width $(( 20 * $1 )) -c 20 -p 1
    LD_LIBRARY_PATH=$LD_LIBRARY_PATH:. ./task_benchmark -nl $1 "${@:2}" -width $(( 20 * $1 ))
}

function sweep {
    for s in 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18; do
        for rep in 0; do
            if [[ $rep -le $s ]]; then
                $1 $2 -timesteps 1000 -iter $(( 1 << (24-s) )) -type $3  -kernel busy_wait
            fi
        done
    done
}

for n in $SLURM_JOB_NUM_NODES; do
    for t in stencil_1d; do
        sweep launch $n $t > chapel_type_${t}_nodes_${n}.log
    done
done
