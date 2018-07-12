import x10.io.Console;

class Places {
  public static def main(Rail[String]) {
	val count = 0;
	for (place in Place.places()) {
		Console.OUT.println("Place " + count);
    }
  }
}
