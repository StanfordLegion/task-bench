import x10.io.Console;

class PixelBlurPar {

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
		var clocks:Rail[Rail[Clock]] = new Rail[Rail[Clock]](pixels.size);
		val clocksRef:GlobalRef[Rail[Rail[Clock]]] = GlobalRef(clocks);

		finish for (p in Place.places()) {
			pixelRails(p.id) = at (p) new Rail[Double](3);
			val clockRail = at (p) new Rail[Clock](3);
			for (i in 0..(clockRail.size-1)) {
				clockRail(i) = at (p) Clock.make();
			}
			clocks(p.id) = clockRail;
		}

		finish for (p in Place.places()) {

			val selfClock = at (clocksRef.home) clocksRef()(p.id)(1);
			val sendRightClock = (p.id < (pixels.size-1)) ? at (clocksRef.home) clocksRef()(p.id+1)(0) : null;
			val sendLeftClock = (p.id > 0) ? at (clocksRef.home) clocksRef()(p.id-1)(2) : null;
			val receiveLeftClock = (p.id > 0) ? at (clocksRef.home) clocksRef()(p.id)(0) : null;	
			val receiveRightClock = (p.id < pixels.size-1) ? at (clocksRef.home) clocksRef()(p.id)(2) : null;
			val myPixel = pixels(p.id);
			
			if (p.id == pixels.size-1) at (p) async clocked(selfClock, receiveLeftClock, sendLeftClock) {

				sendAndReceiveValues(p, myPixel, blurredPixelsRef, pixelRailsRef, 
					selfClock, receiveLeftClock, receiveRightClock, sendLeftClock, sendRightClock);
				
				at (blurredPixelsRef.home) blurredPixelsRef()(p.id) = 
					at (pixelRailsRef.home) (pixelRailsRef()(p.id)(0) + pixelRailsRef()(p.id)(1))/2;

			}

			else if (p.id == 0) at (p) async clocked(selfClock, receiveRightClock, sendRightClock) {

				sendAndReceiveValues(p, myPixel, blurredPixelsRef, pixelRailsRef, 
					selfClock, receiveLeftClock, receiveRightClock, sendLeftClock, sendRightClock);
				
				at (blurredPixelsRef.home) blurredPixelsRef()(p.id) = 
					at (pixelRailsRef.home) (pixelRailsRef()(p.id)(1) + pixelRailsRef()(p.id)(2))/2;

			}

			else at (p) async clocked(selfClock, receiveLeftClock, receiveRightClock, sendLeftClock, sendRightClock) {

				sendAndReceiveValues(p, myPixel, blurredPixelsRef, pixelRailsRef, 
					selfClock, receiveLeftClock, receiveRightClock, sendLeftClock, sendRightClock);
				
				at (blurredPixelsRef.home) blurredPixelsRef()(p.id) = 
					at (pixelRailsRef.home) (pixelRailsRef()(p.id)(0) + pixelRailsRef()(p.id)(1) + pixelRailsRef()(p.id)(2))/3;

			}
		}


		at (pixelRailsRef.home) Console.OUT.println(pixelRailsRef().toString());

		return blurredPixels;
	}

	private static def sendAndReceiveValues(p:Place, myPixel:Double, blurredPixelsRef:GlobalRef[Rail[Double]], pixelRailsRef:GlobalRef[Rail[Rail[Double]]], 
		selfClock:Clock, receiveLeftClock:Clock, receiveRightClock:Clock, sendLeftClock:Clock, sendRightClock:Clock) {

		async clocked(selfClock) {
			Console.OUT.println(p + " SENDING TO SELF");
			at (pixelRailsRef.home) pixelRailsRef()(p.id)(1) = myPixel;
			selfClock.advance();
		}
		if (sendRightClock != null) {
			at (Place(p.id+1)) async clocked(sendRightClock) {
				Console.OUT.println(p + " SENDING TO RIGHT");
				at (pixelRailsRef.home) pixelRailsRef()(p.id+1)(0) = myPixel;
				sendRightClock.advance();
			}
		}
		if (sendLeftClock != null) {
			at (Place(p.id-1)) async clocked(sendLeftClock) {
				Console.OUT.println(p + " SENDING TO LEFT");
				at (pixelRailsRef.home) pixelRailsRef()(p.id-1)(2) = myPixel;
				sendLeftClock.advance();
			}
		}

		finish {
			Console.OUT.println(p + " RECEVED FROM LEFT");		
			if (receiveRightClock != null) receiveRightClock.advance();
			Console.OUT.println(p + " RECEIVED FROM RIGHT");
			selfClock.advance();
			Console.OUT.println(p + " RECEIVED FROM SELF");
			if (receiveLeftClock != null) receiveLeftClock.advance();
			Console.OUT.println(p + " RECEVED FROM LEFT");		
		}


	}
}
