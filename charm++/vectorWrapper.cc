#include "vectorWrapper.h"

VectorWrapper::VectorWrapper(std::vector<std::string> vec) : vec(vec), live(false) { }
VectorWrapper::VectorWrapper() : live(false) { }

char** VectorWrapper::toArgv() {
	argv = new char *[vec.size()];
	for (size_t i = 0; i < vec.size(); i++)
		argv[i] = &vec[i][0];
	live = true;
	return argv;
}

void VectorWrapper::pup(PUP::er &p) { p|vec; }

VectorWrapper::~VectorWrapper() {
	if (live) delete[] argv;
}