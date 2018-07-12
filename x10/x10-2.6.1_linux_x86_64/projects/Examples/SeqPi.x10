import x10.util.Random;
import x10.io.Console;

class SeqPi {
	public static def main(args:Rail[String]) {
		val N = Int.parse(args(0));
		var C:Double = 0;
		val rand = new Random();
		for (1..N) {
			val x = rand.nextDouble();
			val y = rand.nextDouble();
			if (x*x + y*y <= 1) C++;
		}
		val pi = 4 * C/N;
		Console.OUT.println("PI = " + pi);
	}
}
