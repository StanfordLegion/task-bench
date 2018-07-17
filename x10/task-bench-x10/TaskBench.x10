import x10.io.Console;
import x10.array.*;

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

		protected def this(neighborsSend:Rail[Long], neighborsRecv:Rail[Long]) {

			this.neighborsSend = neighborsSend;
			this.neighborsRecv = neighborsRecv;

			// for now only holds space for Rails of size 1
			this.send = new Rail[Rail[Double]](neighborsSend.size, (i:Long) => new Rail[Double](1));
			this.recv = new Rail[Rail[Double]](neighborsRecv.size, (i:Long) => new Rail[Double](1));

			val plchldr = new GlobalRail[Double](new Rail[Double](0));
			this.remoteSend = new Rail[GlobalRail[Double]](neighborsRecv.size, plchldr);
			//this.remoteRecv = new Rail[GlobalRail[Double]](neighborsSend.size, plchldr);
		}

	}

	public val plh:PlaceLocalHandle[PlaceInstance];

	public def this(neighborSendMap:Rail[Rail[Long]], neighborRecvMap:Rail[Rail[Long]]) {

		// create a PlaceInstance instance at each place
		val pplh = PlaceLocalHandle.make[PlaceInstance](Place.places(), () => {
			new PlaceInstance(neighborSendMap(here.id), neighborRecvMap(here.id))
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

	private static def makeMap():Rail[Rail[Long]] {
		val map = new Rail[Rail[Long]]();
		return map;
	}

	// private static def printString(byteArr:Array_1[Byte], size:Int) {
	// 	//@Native("c++", "char *ch = (char *)&byteArr[0]; std::cout << *ch << std::endl;") {}

	// 	//@Native("c++", "for (int i = 0; i < size; i++) { char ch = (*byteArr)(i); std::cout << ch << std::endl; }") {}

	// 	for (i in 0..(byteArr.size-1)) {
	// 		b = byteArr(i);
	// 		@Native("c++", "char *c = (char *)&b;") {}
	// 	}
	// }

	private static def printString(str:String, size:Int):void {
		@Native("c++", "
			char result[size]; 
			for (int i = 0; i < size; i++) { 
				x10_char c = (*str).charAt(i); 
				char *ch = (char *)&c; 
				result[i] = *ch; 
			} 
			printf(\"%s\\n\", result);
		") {}
	}

	

	private static def callCore(argc:Int, argv:Rail[String]):void {
		for (i in 0..(argv.size-1)) {
			// val strBytes = argv(i).bytes();
			// val byteArr = new Array_1[Byte](strBytes.size, (i:Long) => strBytes(i));
			// printString(byteArr, byteArr.size as Int);
			printString(argv(i), argv(i).length() as Int);
		}
	}

	public static def main(args:Rail[String]):void {
		val argc = args.size as Int;
		callCore(argc, args);
	}

}