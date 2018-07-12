import x10.io.Console;
import x10.io.File;
import x10.io.FileReader;

public class PixelBlurPar_v2 {

	static class Pixel {

		public val myPixel:Double;

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

		protected def this(myPixel:Double, neighborsSend:Rail[Long], neighborsRecv:Rail[Long]) {

			this.myPixel = myPixel;
			this.neighborsSend = neighborsSend;
			this.neighborsRecv = neighborsRecv;

			// for now only holds space for Rails of size 1 i.e. containing 1 pixel value
			this.send = new Rail[Rail[Double]](neighborsSend.size, (i:Long) => new Rail[Double](1));
			this.recv = new Rail[Rail[Double]](neighborsRecv.size, (i:Long) => new Rail[Double](1));

			val plchldr = new GlobalRail[Double](new Rail[Double](0));
			this.remoteSend = new Rail[GlobalRail[Double]](neighborsRecv.size, plchldr);
			//this.remoteRecv = new Rail[GlobalRail[Double]](neighborsSend.size, plchldr);
		}

	}

	public val pixelplh:PlaceLocalHandle[Pixel];

	public def this(pixels:Rail[Double], neighborSendMap:Rail[Rail[Long]], neighborRecvMap:Rail[Rail[Long]]) {

		// create a Pixel instance at each place
		val pplh = PlaceLocalHandle.make[Pixel](Place.places(), () => {
			new Pixel(pixels(here.id), neighborSendMap(here.id), neighborRecvMap(here.id))
		});
		this.pixelplh = pplh;

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
						val rsr = GlobalRail[Double](pplh2.send(sendIndex)); // create GlobalRail pointing to send rail designated for this pixel
						at (rs.home) async {
							rs()(i) = rsr;
						}
					}
				}
			}
		}
	}

	/** Send values between pixels to calculate average 
		Steps:
		1. Each pixel puts data into send rail
		2. Pixels then get data from other pixels via remoteSend
		3. Calculate average
	*/
	public def blur() {

		// 1: put data into send rail
		finish for (p in Place.places()) {
			at (p) async {
				val pixel = pixelplh();

				for (i in 0..(pixel.neighborsSend.size-1)) {
					pixel.send(i)(0) = pixel.myPixel;
				}
			}
		}

		// finish for (p in Place.places()) {
		// 	at (p) async {
		// 		val pixel = pixelplh();

		// 		for (i in 0..(pixel.remoteSend.size-1)) {
		// 			at (pixel.remoteSend(i).home) {
		// 				Console.OUT.println(p + "REMOTE SEND AT " + i + ": " + pixel.remoteSend(i)());
		// 			}
		// 		}
		// 	}
		// }

		// 2: pull data from all pixels in neighborsRecv
		for (p in Place.places()) {
			at (p) async {
				val pixel = pixelplh();

				finish for (i in pixel.neighborsRecv.range) {
					Rail.asyncCopy(pixel.remoteSend(i), 0, pixel.recv(i), 0, pixel.recv(i).size);
				}

				Console.OUT.println(p + " " + pixel.recv.toString());			

			}
		}

	}

	
	// MAIN

	private static def makeMap(file:File):Rail[Rail[Long]] {
		val reader = file.openRead();
		val numPixels = Int.parse(reader.lines().next());
		var map:Rail[Rail[Long]] = new Rail[Rail[Long]](numPixels);
		while (reader.lines().hasNext()) {
			val line = reader.lines().next();
			val lineArr = line.split(" ");
			val place = Int.parse(lineArr(0));
			val size = Int.parse(lineArr(1));
			val neighborRail = new Rail[Long](size);
			for (i in 0..(size-1)) {
				neighborRail(i) = Int.parse(lineArr(i+2));
			}
			map(place) = neighborRail;
		}
		return map;
	}

	public static def main(args:Rail[String]) {
		val pixels:Rail[Double] = new Rail[Double](args.size);
		for (i in 0..(args.size-1)) {
			pixels(i) = Double.parse(args(i));
		}

		val sendMapFile = new File("SendMap.txt");
		val recvMapFile = new File("RecvMap.txt");

		val sendMap = makeMap(sendMapFile);
		val recvMap = makeMap(recvMapFile);

		val pixelBlur = new PixelBlurPar_v2(pixels, sendMap, recvMap);
		pixelBlur.blur();

	}

}