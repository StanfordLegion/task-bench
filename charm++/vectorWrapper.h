#include <vector>
#include <string>
#include "pup_stl.h"

class VectorWrapper {

 private:
  char **argv;
  bool live;

 public:
  std::vector<std::string> vec;

  VectorWrapper();
  VectorWrapper(std::vector<std::string> vec);
  ~VectorWrapper();

  char** toArgv();
  void pup(PUP::er &p);

};