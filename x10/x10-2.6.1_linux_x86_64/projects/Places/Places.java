
@x10.runtime.impl.java.X10Generated
public class Places extends x10.core.Ref implements x10.serialization.X10JavaSerializable
{
    public static final x10.rtt.RuntimeType<Places> $RTT = 
        x10.rtt.NamedType.<Places> make("Places",
                                        Places.class);
    
    public x10.rtt.RuntimeType<?> $getRTT() { return $RTT; }
    
    public x10.rtt.Type<?> $getParam(int i) { return null; }
    
    private Object writeReplace() throws java.io.ObjectStreamException {
        return new x10.serialization.SerializationProxy(this);
    }
    
    public static x10.serialization.X10JavaSerializable $_deserialize_body(Places $_obj, x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
        if (x10.runtime.impl.java.Runtime.TRACE_SER) { x10.runtime.impl.java.Runtime.printTraceMessage("X10JavaSerializable: $_deserialize_body() of " + Places.class + " calling"); } 
        return $_obj;
    }
    
    public static x10.serialization.X10JavaSerializable $_deserializer(x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
        Places $_obj = new Places((java.lang.System[]) null);
        $deserializer.record_reference($_obj);
        return $_deserialize_body($_obj, $deserializer);
    }
    
    public void $_serialize(x10.serialization.X10JavaSerializer $serializer) throws java.io.IOException {
        
    }
    
    // constructor just for allocation
    public Places(final java.lang.System[] $dummy) {
        
    }
    
    

    
    
    //#line 4 "Places.x10"
    public static class $Main extends x10.runtime.impl.java.Runtime
    {
        // java main method
        public static void main(java.lang.String[] args) {
            // start native runtime
            new $Main().start(args);
        }
        
        // called by native runtime inside main x10 thread
        public void runtimeCallback(final x10.core.Rail<java.lang.String> args) {
            // call the original app-main method
            Places.main(args);
        }
    }
    
    // the original app-main method
    public static void main(final x10.core.Rail<java.lang.String> id$0) {
        
        //#line 5 "Places.x10"
        final long count = 0L;
        
        //#line 6 "Places.x10"
        final x10.lang.PlaceGroup t$75 = ((x10.lang.PlaceGroup)(x10.lang.Place.places()));
        
        //#line 6 "Places.x10"
        final x10.lang.Iterator place$76 = ((x10.lang.Iterable<x10.lang.Place>)t$75).iterator();
        
        //#line 6 "Places.x10"
        for (;
             true;
             ) {
            
            //#line 6 "Places.x10"
            final boolean t$77 = ((x10.lang.Iterator<x10.lang.Place>)place$76).hasNext$O();
            
            //#line 6 "Places.x10"
            if (!(t$77)) {
                
                //#line 6 "Places.x10"
                break;
            }
            
            //#line 6 "Places.x10"
            final x10.lang.Place place$72 = ((x10.lang.Place)(((x10.lang.Iterator<x10.lang.Place>)place$76).next$G()));
            
            //#line 7 "Places.x10"
            final x10.io.Printer t$73 = ((x10.io.Printer)(x10.io.Console.get$OUT()));
            
            //#line 7 "Places.x10"
            final java.lang.String t$74 = "Place 0";
            
            //#line 7 "Places.x10"
            t$73.println(((java.lang.Object)(t$74)));
        }
    }
    
    
    //#line 3 "Places.x10"
    final public Places Places$$this$Places() {
        
        //#line 3 "Places.x10"
        return Places.this;
    }
    
    
    //#line 3 "Places.x10"
    // creation method for java code (1-phase java constructor)
    public Places() {
        this((java.lang.System[]) null);
        Places$$init$S();
    }
    
    // constructor for non-virtual call
    final public Places Places$$init$S() {
         {
            
            //#line 3 "Places.x10"
            
            
            //#line 3 "Places.x10"
            this.__fieldInitializers_Places();
        }
        return this;
    }
    
    
    
    //#line 3 "Places.x10"
    final public void __fieldInitializers_Places() {
        
    }
}

