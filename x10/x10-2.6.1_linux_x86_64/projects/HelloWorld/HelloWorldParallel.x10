import x10.io.Console;

/**
 * Hello World program that uses asynchronization to say "Hello World!" multiple times.
*/

class HelloWorldParallel {
  public static def main(args:Rail[String]):void {
    finish for (i in 0..2) {
      async Console.OUT.println("Hello World!");	
    }
    Console.OUT.println("Goodby World!");
  }
}
