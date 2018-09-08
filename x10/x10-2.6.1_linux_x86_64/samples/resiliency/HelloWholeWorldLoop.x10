/*
 *  This file is part of the X10 project (http://x10-lang.org).
 *
 *  This file is licensed to You under the Eclipse Public License (EPL);
 *  You may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *      http://www.opensource.org/licenses/eclipse-1.0.php
 *
 *  (C) Copyright IBM Corporation 2014.
 */

import x10.io.Console;

/**
 * A small program for observing how Resilient/Elastic X10
 * responds to the addition and removal of places
 * via external killing and creation of processes.
 */
class HelloWholeWorldLoop {
  public static def main(args:Rail[String]):void {
     if (args.size < 2) {
         Console.OUT.println("Usage: HelloWholeWorld message loopcount");
         return;
     }
     
     System.registerPlaceAddedHandler((p:Place)=>{Console.OUT.println("I see that "+p+" was added");});
     System.registerPlaceRemovedHandler((p:Place)=>{Console.OUT.println("I see that "+p+" was removed");});
     
     for (i:Long in 0..(Long.parse(args(1)))){
         try {
             val world = Place.places();
             Console.OUT.println(here+" sees "+world.numPlaces()+" places");
             finish for (p in world) {
                 at (p) async Console.OUT.println(here+" says hello and "+args(0)+" "+i);
             }
         }
         catch (me:MultipleExceptions) {
             for (e in me.getExceptionsOfType[DeadPlaceException](true))
                 Console.OUT.println("Got DeadPlaceException from "+e.place+" in round "+i);
         }
         
         System.sleep(10000);
     }
     
     Console.OUT.println("Goodbye");
  }
}


