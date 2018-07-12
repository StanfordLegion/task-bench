import x10.io.Console;


class PixelBlurSeq {

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
		for (i in 0..(pixels.size-1)) {
			if (i == 0) {
				blurredPixels(i) = (pixels(i) + pixels(i+1))/2;
			} else if (i == pixels.size-1) {
				blurredPixels(i) = (pixels(i-1) + pixels(i))/2;
			} else {
				blurredPixels(i) = (pixels(i-1) + pixels(i) + pixels(i+1))/3;
			}
		}
		return blurredPixels;
	}
}
