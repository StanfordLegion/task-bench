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

		// Holds the values to be sent to all neighbors in neighborsSend
		public val send:Rail[Rail[Double]];

		// Holds values received from neighbors in neighborsReceive
		public val recv:Rail[Rail[Double]];

		// Global Rails pointing to send rails of all neighbors in neighborsReceive
		public val remoteSend:Rail[GlobalRail[Double]];

		// All neighbors to send values to
		public val neighborsSend:Rail[Long];

		// All neighbors to receive values from
		public val neighborsRecv:Rail[Long];

		/** used for pushing to neighbors */
		// public val remoteRecv:Rail[GlobalRail[Double]];

		/** return index for sender neighbor in this send rail */
		public def getSenderIndex(recvId:Long):Long {
			for (i in 0..(neighborsSend.size-1)) {
				if (recvId == neighborsSend(i)) {
					return i;
				}
			}
			Console.OUT.println("Could not find sender " + recvId + " in neighborsSend of " + here.id);
			return -1;
		}

		protected def this(neighborsRecv:Rail[Long], neighborsSend:Rail[Long]) {

			this.neighborsRecv = neighborsRecv;
			this.neighborsSend = neighborsSend;

			// for now only holds space for Rails of size 1
			this.recv = new Rail[Rail[Double]](neighborsRecv.size, (i:Long) => new Rail[Double](1));
			this.send = new Rail[Rail[Double]](neighborsSend.size, (i:Long) => new Rail[Double](1));

			val plchldr = new GlobalRail[Double](new Rail[Double](0));
			this.remoteSend = new Rail[GlobalRail[Double]](neighborsRecv.size, plchldr);
			//this.remoteRecv = new Rail[GlobalRail[Double]](neighborsSend.size, plchldr);
		}

	}

	private static val data = new Rail[Double](1, 1.0);

	public val plh:PlaceLocalHandle[PlaceInstance];

	public def this(dependenceSet:Rail[Pair[Rail[Long], Rail[Long]]]) {

		// create a PlaceInstance instance at each place
		val pplh = PlaceLocalHandle.make[PlaceInstance](Place.places(), () => {
			new PlaceInstance(dependenceSet(here.id).first, dependenceSet(here.id).second)
		});
		this.plh = pplh;

		finish for (p in Place.places()) {
			at (p) async {
				val pplh1 = pplh();
				val rs = GlobalRail[GlobalRail[Double]](pplh1.remoteSend);
				
				val recvId = here.id;

				for (i in 0..(pplh1.neighborsRecv.size-1)) {
					at (Place(pplh1.neighborsRecv(i))) async {
						// set up global rails to point to send rails in all neighbors in neighborsReceive
						val pplh2 = pplh();
						val sendIndex = pplh2.getSenderIndex(recvId);
						val rsr = GlobalRail[Double](pplh2.send(sendIndex)); // create GlobalRail pointing to send rail designated for this place
						at (rs.home) async {
							rs()(i) = rsr;
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
	public def sendAndRecv() {

		// 1: put data into send rail
		finish for (p in Place.places()) {
			at (p) async {
				val pi = plh();

				for (i in 0..(pi.neighborsSend.size-1)) {
					// send data
					pi.send(i) = data;
				}
			}
		}

		// 2: pull data from all neighbors in neighborsRecv
		for (p in Place.places()) {
			at (p) async {
				val pi = plh();

				finish for (i in pi.neighborsRecv.range) {
					Rail.asyncCopy(pi.remoteSend(i), 0, pi.recv(i), 0, pi.recv(i).size);
				}

				Console.OUT.println(p + " " + pi.recv.toString());	

			}
		}

	}

	private static def dependenceSetsFromCore(argc:Int, argRail:Rail[String]):Rail[Rail[Pair[Rail[Long],Rail[Long]]]] {
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
			app.display();
			// cleanup allocated arrays
			for (int i = 0; i < argc; i++) {
				delete [] argv[i];
			}
			delete [] argv;
			
			std::vector<TaskGraph> graphs = app.graphs;
			TaskGraph tg = graphs.at(0);
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
			return dependenceSets;
		") { return new Rail[Rail[Pair[Rail[Long],Rail[Long]]]](); }
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
		val dependenceSets = dependenceSetsFromCore(argc, argv);
		val dependenceSet = dependenceSets(0);
		val task_bench = new TaskBench(dependenceSet);
	}

}