import x10.io.Console;
import x10.array.*;
import x10.util.*;

import x10.compiler.Native;
import x10.compiler.NativeCPPInclude;
import x10.compiler.NativeCPPCompilationUnit;

@NativeCPPInclude("/home/users/nicolaig/task-bench/x10/task-bench-x10/core/core.h")
@NativeCPPCompilationUnit("/home/users/nicolaig/task-bench/x10/task-bench-x10/core/core.cc")

public class TaskBench {

	static class PlaceInstance {

		// Holds the values to be sent to all neighbors in neighborsSend at each timestep
		public val sendRails:Rail[Rail[Rail[Double]]];

		// Holds values received from neighbors in neighborsReceive at
		public val recv:Rail[Rail[Double]];

		// Global Rails pointing to send rails of all neighbors in neighborsReceive at each timestep
		public val remoteSendRails:Rail[Rail[GlobalRail[Double]]];

		// All neighbors to send values to at each timestep
		public val neighborsSendRails:Rail[Rail[Long]];

		// All neighbors to receive values from at each timestep
		public val neighborsRecvRails:Rail[Rail[Long]];

		// current timestep this place is on
		public val timestep:Long;

		// count of number of neighbors from which data has been reveived
		private val neighborsReceived:Long;

		/** used for pushing to neighbors */
		// public val remoteRecv:Rail[GlobalRail[Double]];

		private def allNeighborsReceived():Boolean {
			return (this.neighborsReceived == neighborsRecvRails(this.timestep).size);
		}

		public def getSenderIndex(recvId:Long, timestep:Long):Long {
			val neighborsSend = neighborsSendRails(timestep);
			for (i in 0..(neighborsSend.size-1)) {
				if (neighborsSend(i) == recvId) {
					return (i as Long);
				}
			}
			Console.OUT.println("UNABLE TO FIND SENDER: " + recvId + " FOR " + here.id + " AT TIMESTEP " + timestep);
			return -1;
		}

		protected def this(dependenceSets:Rail[Rail[Pair[Rail[Long], Rail[Long]]]], dsetForTimestep:Rail[Long], maxWidth:Long) {

			val timesteps = dsetForTimestep.size;
			this.timestep = 0;
			this.neighborsReceived = 0;
			this.neighborsRecvRails = new Rail[Rail[Long]](timesteps);
			this.neighborsSendRails = new Rail[Rail[Long]](timesteps);
			this.sendRails = new Rail[Rail[Rail[Double]]](timesteps);
			this.remoteSendRails = new Rail[Rail[GlobalRail[Double]]](timesteps);

			this.recv = new Rail[Rail[Double]](maxWidth);


			for (ts in 0..(timesteps-1)) {
				val dset = dsetForTimestep(ts);
				val dependencePair = dependenceSets(dset)(here.id);
				val neighborsSend = dependencePair.first;
				val neighborsRecv = dependencePair.second;
				val send = new Rail[Rail[Double]](neighborsSend.size, (i:Long) => new Rail[Double](1, -1.0));
				val plchldr = new GlobalRail[Double](new Rail[Double](0));
				val remoteSend = new Rail[GlobalRail[Double]](neighborsRecv.size, plchldr);
				this.neighborsSendRails(ts) = neighborsSend;
				this.neighborsRecvRails(ts) = neighborsRecv;
				this.sendRails(ts) = send;
				this.remoteSendRails(ts) = remoteSend;
			}

		}

	}

	public val dependenceSets:Rail[Rail[Pair[Rail[Long], Rail[Long]]]];

	public val dsetForTimestep:Rail[Long];

	public val maxWidth:Long;

	public val plh:PlaceLocalHandle[PlaceInstance];

	public def this(dsets:Rail[Rail[Pair[Rail[Long], Rail[Long]]]], dsetForTimestep:Rail[Long]) {

		this.dependenceSets = dsets;
		this.dsetForTimestep = dsetForTimestep;

		this.maxWidth = this.dependenceSets(0).size; // set maxWidth to the number of places/points in the task graph

		// create a PlaceInstance instance at each place
		val pplh = PlaceLocalHandle.make[PlaceInstance](Place.places(), () => {
			new PlaceInstance(dsets, dsetForTimestep, dsets(0).size)
		});
		this.plh = pplh;

		finish for (p in Place.places()) {
			at (p) async {
				val pplh1 = pplh();

				for (ts in 0..(dsetForTimestep.size-1)) {
					val rs = GlobalRail[GlobalRail[Double]](pplh1.remoteSendRails(ts));
				
					val recvId = here.id;
					val neighborsRecv = pplh1.neighborsRecvRails(ts);

					for (i in 0..(neighborsRecv.size-1)) {
						at (Place(neighborsRecv(i))) async {
							// set up global rails to point to send rails in all neighbors in neighborsReceive
							val pplh2 = pplh();
							val sendIndex = pplh2.getSenderIndex(recvId, ts);
							val rsr = GlobalRail[Double](pplh2.sendRails(ts)(sendIndex)); // create GlobalRail pointing to send rail designated for this place
							at (rs.home) async {
								rs()(i) = rsr;
							}
						}
					}
				}

			}
		}
	}

	/** Send values between places
		Steps:
		1. Each place puts data into send rail
		2. Places get data from other places via remoteSend
		3. Perform local operation on data
	*/
	public def checkTaskGraph() {

		finish for (p in Place.places()) {
			at (p) async {
				val pi = plh();
				for (ts in 0..(dsetForTimestep.size-1)) {
					Console.OUT.println(p + " NEIGHBORS SEND AT TIMESTEP " + ts + ": " + pi.neighborsSendRails(ts).toString());
					Console.OUT.println(p + " NEIGHBORS RECV AT TIMESTEP " + ts + ": " + pi.neighborsRecvRails(ts).toString());
					Console.OUT.println(p + " SEND RAIL AT TIMESTEP " + ts + ": " + pi.sendRails(ts).toString());
					val remoteSend = pi.remoteSendRails(ts);
					at (remoteSend(0).home) Console.OUT.println(p + " REMOTE SEND AT TIMESTEP " + ts + ": " + remoteSend(0)(0).toString());
				}
			}
		}

		// 1: put data into send rail
		// finish for (p in Place.places()) {
		// 	at (p) async {
		// 		val pi = plh();

		// 		for (i in 0..(pi.neighborsSend.size-1)) {
		// 			// send data
		// 			pi.send(i)(0) = 1.0;
		// 		}
		// 	}
		// }

		// // 2: pull data from all neighbors in neighborsRecv
		// for (p in Place.places()) {
		// 	at (p) async {
		// 		val pi = plh();

		// 		finish for (i in pi.neighborsRecv.range) {
		// 			Rail.asyncCopy(pi.remoteSend(i), 0, pi.recv(i), 0, pi.recv(i).size);
		// 		}

		// 		Console.OUT.println(p + " " + pi.recv.toString());	

		// 	}
		// }

	}

	private static def executeTaskBench(taskGraphDependenceSets:Rail[Rail[Rail[Pair[Rail[Long], Rail[Long]]]]], 
			dependenceSetsForTimesteps:Rail[Rail[Long]]) {

		for (tg in 0..(taskGraphDependenceSets.size-1)) {
			val dsets = taskGraphDependenceSets(tg);
			val dsetForTimestep = dependenceSetsForTimesteps(tg);
			val taskBench = new TaskBench(dsets, dsetForTimestep);
			taskBench.checkTaskGraph();
		}

	}

	private static def dependenceSetsFromCore(argc:Int, argRail:Rail[String]):Rail[Rail[Rail[Pair[Rail[Long],Rail[Long]]]]] {
		@Native("c++", "
			char **argv = new char *[argc];
			for (int i = 0; i < argc; i++) {
				x10::lang::String str = *((*argRail)[i]);
				x10_int strSize = str.length();
				char *result = new char[strSize];
				for (int j = 0; j < strSize; j++) { 
					x10_char c = (str).charAt(j);
					char *ch = (char *)&c;
					result[j] = *ch;
				}
				argv[i] = result;
			}
			App app(argc, argv);
			// app.display();
			// cleanup allocated arrays
			for (int i = 0; i < argc; i++) {
				delete [] argv[i];
			}
			delete [] argv;
			
			std::vector<TaskGraph> graphs = app.graphs;
			// var taskGraphDependenceSets = new Rail[Rail[Rail[Pair[Rail[Long], Rail[Long]]]]];
			::x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >* >* >* 
			taskGraphDependenceSets = ::x10::lang::Rail< 
				::x10::lang::Rail< 
					::x10::lang::Rail< 
						::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> 
					>*
				>* 
			>::_make((x10_long)graphs.size());
			for (int tgi = 0; tgi < graphs.size(); ++tgi) {
				TaskGraph tg = graphs.at(tgi);
				// val dependenceSets = new Rail[Rail[Pair[Rail[Long], Rail[Long]]]](tg.timestep_period());
				::x10::lang::Rail< ::x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >* >* dependenceSets =
					::x10::lang::Rail< ::x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, 
					::x10::lang::Rail< x10_long >*> >* >::_make((x10_long)tg.timestep_period());
				for (long ts = 0; ts < tg.timestep_period(); ts++) {
					long dset = tg.dependence_set_at_timestep(ts);
					// val dependenceSet = new Rail[Pair[Rail[Long], Rail[Long]]](tg.max_width);
					::x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >* dependenceSet =
						::x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >::_make(((x10_long)tg.max_width));
					for (long point = tg.offset_at_timestep(ts); point < tg.offset_at_timestep(ts) + tg.width_at_timestep(ts); point++) {
						auto dependencies = tg.dependencies(dset, point);
						auto reverseDependencies = tg.reverse_dependencies(dset, point);
						int depsSize = 0;
						for (auto p : dependencies) {
							for (long dp = p.first; dp <= p.second; ++dp) {
								++depsSize;
							}
						}
						int revDepsSize = 0;
						for (auto rp : reverseDependencies) {
							for (long rdp = rp.first; rdp <= rp.second; ++rdp) {
								++revDepsSize;
							}
						}
						// var deps:Rail[Long] = new Rail[Long](depsSize);
						x10::lang::Rail< x10_long >* deps = ::x10::lang::Rail< x10_long >::_make((x10_long)depsSize);
						// var revDeps:Rail[Long] = new Rail[Long](depsSize);
						x10::lang::Rail< x10_long >* revDeps = ::x10::lang::Rail< x10_long >::_make((x10_long)revDepsSize);
						int i = 0;
						for (auto p : dependencies) {
							for (long dp = p.first; dp <= p.second; ++dp) {
								// deps(i) = dp;
								::x10aux::nullCheck(deps)->x10::lang::Rail< x10_long >::__set(((x10_long)i), ((x10_long)dp));
								++i;
							}
						}
						i = 0;
						for (auto rp : reverseDependencies) {
							for (long rdp = rp.first; rdp <= rp.second; rdp++) {
								// revDeps(i) = rdp
								::x10aux::nullCheck(revDeps)->x10::lang::Rail< x10_long >::__set(((x10_long)i), ((x10_long)rdp));
								++i;
							}
						}
						// val dependencePair = new Pair(deps, revDeps);
						::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> dependencePair =
							::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*>::_make(deps, revDeps);
						// dependenceSet(point) = dependencePair;
						::x10aux::nullCheck(dependenceSet)->x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >::
							__set(point, dependencePair);

					}
					// dependenceSets(ts) = dependenceSet;
					::x10aux::nullCheck(dependenceSets)->
					x10::lang::Rail< ::x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >* >::
							__set(ts, dependenceSet);
				}
				// taskGraphDependenceSets(tgi) = dependenceSets;
				::x10aux::nullCheck(taskGraphDependenceSets)->
				x10::lang::Rail< x10::lang::Rail< ::x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >* >* >::
						__set(tgi, dependenceSets);
			}
			return taskGraphDependenceSets;
		") { return new Rail[Rail[Rail[Pair[Rail[Long],Rail[Long]]]]](); }
	}

	private static def timestepsFromCore(argc:Int, argRail:Rail[String]):Rail[Rail[Long]] {
		@Native("c++", "
			char **argv = new char *[argc];
			for (int i = 0; i < argc; i++) {
				x10::lang::String str = *((*argRail)[i]);
				x10_int strSize = str.length();
				char *result = new char[strSize];
				for (int j = 0; j < strSize; j++) { 
					x10_char c = (str).charAt(j);
					char *ch = (char *)&c;
					result[j] = *ch;
				}
				argv[i] = result;
			}
			App app(argc, argv);
			// app.display();
			for (int i = 0; i < argc; i++) { // cleanup allocated arrays
				delete [] argv[i];
			}
			delete [] argv;
			
			std::vector<TaskGraph> graphs = app.graphs;
			// val timeStepMaps = new Rail[Rail[Long]](graphs.size());
			::x10::lang::Rail< ::x10::lang::Rail< x10_long >* >* timeStepMaps =
      			::x10::lang::Rail< ::x10::lang::Rail< x10_long >* >::_make(graphs.size());
			for (int tgi = 0; tgi < graphs.size(); ++tgi) { // dependence set for each timestep in this graph
				TaskGraph graph = graphs.at(tgi);
				// val dependenceSetsForTimesteps = new Rail[Long](graph.timesteps);
				::x10::lang::Rail< x10_long >* dependenceSetsForTimesteps = 
					::x10::lang::Rail< x10_long >::_make(graph.timesteps);
				for (int ts = 0; ts < graph.timesteps; ++ts) {
					// dependenceSetsForTimesteps(ts) = graph.dependence_set_at_timestep(ts);
					::x10aux::nullCheck(dependenceSetsForTimesteps)->
						x10::lang::Rail< x10_long >::__set(((x10_long)ts), ((x10_long)graph.dependence_set_at_timestep(ts)));
				}
				// timeStepMaps(tgi) = dependenceSetsForTimesteps;
				::x10aux::nullCheck(timeStepMaps)->
						x10::lang::Rail< x10::lang::Rail< x10_long >* >::__set(((x10_long)tgi), dependenceSetsForTimesteps);
			}
			return timeStepMaps;
			") { return new Rail[Rail[Long]](); }
	}

	private static def constructCPPArgs(args:Rail[String]):Rail[String] {
		val argv = new Rail[String](args.size+1);
		argv(0) = "";
		for (i in 1..(args.size)) {
			argv(i) = args(i-1);
		}
		return argv;
	}

	public static def main(args:Rail[String]):void {
		val argc = (args.size+1) as Int;
		val argv = constructCPPArgs(args);
		val taskGraphDependenceSets = dependenceSetsFromCore(argc, argv);
		val dependenceSetsForTimesteps = timestepsFromCore(argc, argv);
		executeTaskBench(taskGraphDependenceSets, dependenceSetsForTimesteps);
	}

}