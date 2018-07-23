#ifndef __SUBCHARE_H__
#define __SUBCHARE_H__

#include "../core/core.h"
//#include "main.h"
#include <vector>
#include <set>

class Subchare : public CBase_Subchare {

 private:

	/// Member Variables (Object State) ///
	int currentTimestep;
	int graphIndex;
	std::vector<std::set<long> > notReceived;
	std::vector<std::set<long> > whereToSend;
	std::map<std::pair<long, long>, long> receivingMap;
	std::vector<std::vector<std::pair<long, long>*> > inputs;
	std::vector<std::vector<size_t> > input_bytes;
	std::pair<long, long> output;
	size_t output_bytes;
	bool sent;
	App app;
	TaskGraph graph;

	void checkAndRun(bool receiving);

 public:

	/// Constructors ///
	Subchare(VectorWrapper wrapper);
	Subchare(CkMigrateMessage *msg);

	/// Entry Methods ///
	void initGraph(int graphIndex);
	void runTimestep();
	void receive(std::pair<long, long> input);
	void reset();

};


#endif
