import x10.io.Console;

public class TrivialMultinode {

	static class PlaceInstance {

		public val neighbor:Long;

		public val sendRail:Rail[Rail[Double]];

		public val recvRail:Rail[Rail[Double]];

		public val remoteSend:Rail[GlobalRail[Double]];

		protected def this() {

			if (here.id == 0) {
				this.neighbor = 1;
			} else {
				this.neighbor = 0;
			}
			this.sendRail = new Rail[Rail[Double]](1, (i:Long) => new Rail[Double](1));
			this.recvRail = new Rail[Rail[Double]](1, (i:Long) => new Rail[Double](1));

			val plchldr = new GlobalRail[Double](new Rail[Double](0));
			val rs = new Rail[GlobalRail[Double]](1, plchldr);
			this.remoteSend = rs;

		}

	}

	public val plh:PlaceLocalHandle[PlaceInstance];

	public def this() {

		val plh1 = PlaceLocalHandle.make[PlaceInstance](Place.places(), () => {
			new PlaceInstance()
		});
		this.plh = plh1;

		finish for (p in Place.places()) {
			at (p) async {
				val pi = plh1();
				val rs = GlobalRail[GlobalRail[Double]](pi.remoteSend);

				at (Place(pi.neighbor)) async {
					val pi2 = plh1();
					val rsr = GlobalRail[Double](pi2.sendRail(0));
					at (rs.home) async {
						rs()(0) = rsr;
					}
				}
			}
		}
	}

	public def broadcast() {
		finish for (p in Place.places()) {
			at (p) async {
				val pi = plh();
				finish pi.sendRail(0)(0) = here.id;
			}
		}

		for (p in Place.places()) {
			at (p) async {
				val pi = plh();
				finish Rail.asyncCopy(pi.remoteSend(0), 0, pi.recvRail(0), 0, pi.recvRail(0).size);
				Console.OUT.println(p + " " + pi.recvRail(0).toString());
			}
		}
	}

	public static def main(args:Rail[String]) {
		val trivialMultinode = new TrivialMultinode();
		trivialMultinode.broadcast();
	}

}