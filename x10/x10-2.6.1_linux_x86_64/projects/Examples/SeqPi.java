
@x10.runtime.impl.java.X10Generated
public class SeqPi extends x10.core.Ref implements x10.serialization.X10JavaSerializable
{
    public static final x10.rtt.RuntimeType<SeqPi> $RTT = 
        x10.rtt.NamedType.<SeqPi> make("SeqPi",
                                       SeqPi.class);
    
    public x10.rtt.RuntimeType<?> $getRTT() { return $RTT; }
    
    public x10.rtt.Type<?> $getParam(int i) { return null; }
    
    private Object writeReplace() throws java.io.ObjectStreamException {
        return new x10.serialization.SerializationProxy(this);
    }
    
    public static x10.serialization.X10JavaSerializable $_deserialize_body(SeqPi $_obj, x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
        if (x10.runtime.impl.java.Runtime.TRACE_SER) { x10.runtime.impl.java.Runtime.printTraceMessage("X10JavaSerializable: $_deserialize_body() of " + SeqPi.class + " calling"); } 
        return $_obj;
    }
    
    public static x10.serialization.X10JavaSerializable $_deserializer(x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
        SeqPi $_obj = new SeqPi((java.lang.System[]) null);
        $deserializer.record_reference($_obj);
        return $_deserialize_body($_obj, $deserializer);
    }
    
    public void $_serialize(x10.serialization.X10JavaSerializer $serializer) throws java.io.IOException {
        
    }
    
    // constructor just for allocation
    public SeqPi(final java.lang.System[] $dummy) {
        
    }
    
    

    
    
    //#line 5 "SeqPi.x10"
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
            SeqPi.main(args);
        }
    }
    
    // the original app-main method
    public static void main(final x10.core.Rail<java.lang.String> args) {
        
        //#line 6 "SeqPi.x10"
        final java.lang.String t$234 = ((java.lang.String[])args.value)[(int)0L];
        
        //#line 6 "SeqPi.x10"
        final int N = java.lang.Integer.parseInt(t$234);
        
        //#line 7 "SeqPi.x10"
        double C = ((double)(long)(((long)(0L))));
        
        //#line 8 "SeqPi.x10"
        final x10.util.Random rand = ((x10.util.Random)(new x10.util.Random((java.lang.System[]) null).x10$util$Random$$init$S()));
        
        //#line 9 "SeqPi.x10"
        final long i$217min$267 = 1L;
        
        //#line 9 "SeqPi.x10"
        final long i$217max$268 = ((long)(((int)(N))));
        
        //#line 9 "SeqPi.x10"
        long i$264 = i$217min$267;
        
        //#line 9 "SeqPi.x10"
        for (;
             true;
             ) {
            
            //#line 9 "SeqPi.x10"
            final long t$265 = i$264;
            
            //#line 9 "SeqPi.x10"
            final boolean t$266 = ((t$265) <= (((long)(i$217max$268))));
            
            //#line 9 "SeqPi.x10"
            if (!(t$266)) {
                
                //#line 9 "SeqPi.x10"
                break;
            }
            
            //#line 10 "SeqPi.x10"
            final double x$253 = rand.nextDouble$O();
            
            //#line 11 "SeqPi.x10"
            final double y$254 = rand.nextDouble$O();
            
            //#line 12 "SeqPi.x10"
            final double t$255 = ((x$253) * (((double)(x$253))));
            
            //#line 12 "SeqPi.x10"
            final double t$256 = ((y$254) * (((double)(y$254))));
            
            //#line 12 "SeqPi.x10"
            final double t$257 = ((t$255) + (((double)(t$256))));
            
            //#line 12 "SeqPi.x10"
            final double t$258 = ((double)(long)(((long)(1L))));
            
            //#line 12 "SeqPi.x10"
            final boolean t$259 = ((t$257) <= (((double)(t$258))));
            
            //#line 12 "SeqPi.x10"
            if (t$259) {
                
                //#line 12 "SeqPi.x10"
                final double t$260 = C;
                
                //#line 12 "SeqPi.x10"
                final double t$261 = ((t$260) + (((double)(1.0))));
                
                //#line 12 "SeqPi.x10"
                C = t$261;
            }
            
            //#line 9 "SeqPi.x10"
            final long t$262 = i$264;
            
            //#line 9 "SeqPi.x10"
            final long t$263 = ((t$262) + (((long)(1L))));
            
            //#line 9 "SeqPi.x10"
            i$264 = t$263;
        }
        
        //#line 14 "SeqPi.x10"
        final double t$247 = ((double)(long)(((long)(4L))));
        
        //#line 14 "SeqPi.x10"
        final double t$248 = C;
        
        //#line 14 "SeqPi.x10"
        final double t$249 = ((t$247) * (((double)(t$248))));
        
        //#line 14 "SeqPi.x10"
        final double t$250 = ((double)(int)(((int)(N))));
        
        //#line 14 "SeqPi.x10"
        final double pi = ((t$249) / (((double)(t$250))));
        
        //#line 15 "SeqPi.x10"
        final x10.io.Printer t$251 = ((x10.io.Printer)(x10.io.Console.get$OUT()));
        
        //#line 15 "SeqPi.x10"
        final java.lang.String t$252 = (("PI = ") + ((x10.core.Double.$box(pi))));
        
        //#line 15 "SeqPi.x10"
        t$251.println(((java.lang.Object)(t$252)));
    }
    
    
    //#line 4 "SeqPi.x10"
    final public SeqPi SeqPi$$this$SeqPi() {
        
        //#line 4 "SeqPi.x10"
        return SeqPi.this;
    }
    
    
    //#line 4 "SeqPi.x10"
    // creation method for java code (1-phase java constructor)
    public SeqPi() {
        this((java.lang.System[]) null);
        SeqPi$$init$S();
    }
    
    // constructor for non-virtual call
    final public SeqPi SeqPi$$init$S() {
         {
            
            //#line 4 "SeqPi.x10"
            
            
            //#line 4 "SeqPi.x10"
            this.__fieldInitializers_SeqPi();
        }
        return this;
    }
    
    
    
    //#line 4 "SeqPi.x10"
    final public void __fieldInitializers_SeqPi() {
        
    }
}

