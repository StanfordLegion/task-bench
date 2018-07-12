import x10.io.Console;

class PixelBlurPar_v1 {

	public static def main(args:Rail[String]) {
		val pixels:Rail[Double] = new Rail[Double](args.size);
		for (i in 0..(args.size-1)) {
			pixels(i) = Double.parse(args(i));
		}
		val blurredPixels:Rail[Double] = pixelBlur(pixels);
		Console.OUT.println(blurredPixels.toString());
	}

	private static def pixelBlur(pixels:Rail[Double]):Rail[Double] {
		var blurredPixels:Rail[Double] = new Rail[Double](pixels.size);
		val blurredPixelsRef:GlobalRef[Rail[Double]] = GlobalRef(blurredPixels);
		var pixelRails:Rail[Rail[Double]] = new Rail[Rail[Double]](pixels.size);
		val pixelRailsRef:GlobalRef[Rail[Rail[Double]]] = GlobalRef(pixelRails);

		finish for (p in Place.places()) async {
			at (p) {
				val pixelRail = new Rail[Double](3);
				pixelRail(1) = pixels(p.id);
				at (pixelRailsRef.home) pixelRailsRef()(p.id) = pixelRail;
			}
			Console.OUT.println("INIT Pixel Rail at " + p + ": " + pixelRails(p.id));
		}

		finish for (p in Place.places()) {

			at (p) async {

				finish {

					if (p.id < (pixels.size-1)) {
						at (Place(p.id+1)) async {
							Console.OUT.println(p + " PULLING FROM RIGHT");
							val pixel = at (pixelRailsRef.home) pixelRailsRef()(p.id+1)(1);
							at (pixelRailsRef.home) {
								pixelRailsRef()(p.id)(2) = pixel;
								Console.OUT.println("PULLED FROM RIGHT " + p + ": " + pixelRailsRef()(p.id));
							}
						}
					}
					if (p.id > 0) {
						at (Place(p.id-1)) async {
							Console.OUT.println(p + " PULLING FROM LEFT");
							val pixel = at (pixelRailsRef.home) pixelRailsRef()(p.id-1)(1);
							at (pixelRailsRef.home) {
								pixelRailsRef()(p.id)(0) = pixel;
								Console.OUT.println("PULLED FROM LEFT " + p + ": " + pixelRailsRef()(p.id));
							}
						}
					}

				}

				at (pixelRailsRef.home) Console.OUT.println("READY TO COMPUTE " + p + ": " + pixelRailsRef()(p.id));
				
				if (p.id == pixels.size-1) at (blurredPixelsRef.home) blurredPixelsRef()(p.id) = 
					at (pixelRailsRef.home) (pixelRailsRef()(p.id)(0) + pixelRailsRef()(p.id)(1))/2;
				else if (p.id == 0) at (blurredPixelsRef.home) blurredPixelsRef()(p.id) = 
					at (pixelRailsRef.home) (pixelRailsRef()(p.id)(1) + pixelRailsRef()(p.id)(2))/2;		
				else at (blurredPixelsRef.home) blurredPixelsRef()(p.id) = 
					at (pixelRailsRef.home) (pixelRailsRef()(p.id)(0) + pixelRailsRef()(p.id)(1) + pixelRailsRef()(p.id)(2))/3;

			}

		}


		at (pixelRailsRef.home) Console.OUT.println(pixelRailsRef().toString());

		return blurredPixels;
	}

}
