import x10.util.Random;
import x10.io.Console;

public class ParPi {
	public static def main(args:Rail[String]) {
		val N = Int.parse(args(0)); // number of trials
		val P = Int.parse(args(1)); // number of parallel processes
		var C:Double = 0;
		finish for (1..P) async {
			val rand = new Random();
			var c:Double = 0;
			for (1..(N/P)) {
				val x = rand.nextDouble();
				val y = rand.nextDouble();
				if (x*x + y*y <= 1) c++;
			}
			atomic C += c;
		}
		val pi = 4 * C/N;
		Console.OUT.println("PI = " + pi);
	}
}
