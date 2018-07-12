
@x10.runtime.impl.java.X10Generated
public class PixelBlurSeq extends x10.core.Ref implements x10.serialization.X10JavaSerializable
{
    public static final x10.rtt.RuntimeType<PixelBlurSeq> $RTT = 
        x10.rtt.NamedType.<PixelBlurSeq> make("PixelBlurSeq",
                                              PixelBlurSeq.class);
    
    public x10.rtt.RuntimeType<?> $getRTT() { return $RTT; }
    
    public x10.rtt.Type<?> $getParam(int i) { return null; }
    
    private Object writeReplace() throws java.io.ObjectStreamException {
        return new x10.serialization.SerializationProxy(this);
    }
    
    public static x10.serialization.X10JavaSerializable $_deserialize_body(PixelBlurSeq $_obj, x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
        if (x10.runtime.impl.java.Runtime.TRACE_SER) { x10.runtime.impl.java.Runtime.printTraceMessage("X10JavaSerializable: $_deserialize_body() of " + PixelBlurSeq.class + " calling"); } 
        return $_obj;
    }
    
    public static x10.serialization.X10JavaSerializable $_deserializer(x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
        PixelBlurSeq $_obj = new PixelBlurSeq((java.lang.System[]) null);
        $deserializer.record_reference($_obj);
        return $_deserialize_body($_obj, $deserializer);
    }
    
    public void $_serialize(x10.serialization.X10JavaSerializer $serializer) throws java.io.IOException {
        
    }
    
    // constructor just for allocation
    public PixelBlurSeq(final java.lang.System[] $dummy) {
        
    }
    
    

    
    
    //#line 6 "PixelBlurSeq.x10"
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
            PixelBlurSeq.main(args);
        }
    }
    
    // the original app-main method
    public static void main(final x10.core.Rail<java.lang.String> args) {
        
        //#line 7 "PixelBlurSeq.x10"
        final long t$481 = ((x10.core.Rail<java.lang.String>)args).size;
        
        //#line 7 "PixelBlurSeq.x10"
        final x10.core.Rail pixels = new x10.core.Rail<x10.core.Double>(x10.rtt.Types.DOUBLE, ((long)(t$481)));
        
        //#line 8 "PixelBlurSeq.x10"
        final long i$446min$536 = 0L;
        
        //#line 8 "PixelBlurSeq.x10"
        final long t$537 = ((x10.core.Rail<java.lang.String>)args).size;
        
        //#line 8 "PixelBlurSeq.x10"
        final long i$446max$538 = ((t$537) - (((long)(1L))));
        
        //#line 8 "PixelBlurSeq.x10"
        long i$533 = i$446min$536;
        {
            
            //#line 8 "PixelBlurSeq.x10"
            final java.lang.String[] args$value$576 = ((java.lang.String[])args.value);
            
            //#line 8 "PixelBlurSeq.x10"
            final double[] pixels$value$577 = ((double[])pixels.value);
            
            //#line 8 "PixelBlurSeq.x10"
            for (;
                 true;
                 ) {
                
                //#line 8 "PixelBlurSeq.x10"
                final long t$534 = i$533;
                
                //#line 8 "PixelBlurSeq.x10"
                final boolean t$535 = ((t$534) <= (((long)(i$446max$538))));
                
                //#line 8 "PixelBlurSeq.x10"
                if (!(t$535)) {
                    
                    //#line 8 "PixelBlurSeq.x10"
                    break;
                }
                
                //#line 8 "PixelBlurSeq.x10"
                final long i$530 = i$533;
                
                //#line 9 "PixelBlurSeq.x10"
                final java.lang.String t$528 = ((java.lang.String)args$value$576[(int)i$530]);
                
                //#line 9 "PixelBlurSeq.x10"
                final double t$529 = java.lang.Double.parseDouble(t$528);
                
                //#line 9 "PixelBlurSeq.x10"
                pixels$value$577[(int)i$530]=t$529;
                
                //#line 8 "PixelBlurSeq.x10"
                final long t$531 = i$533;
                
                //#line 8 "PixelBlurSeq.x10"
                final long t$532 = ((t$531) + (((long)(1L))));
                
                //#line 8 "PixelBlurSeq.x10"
                i$533 = t$532;
            }
        }
        
        //#line 11 "PixelBlurSeq.x10"
        final x10.core.Rail blurredPixels = PixelBlurSeq.pixelBlur__0$1x10$lang$Double$2(((x10.core.Rail)(pixels)));
        
        //#line 12 "PixelBlurSeq.x10"
        final x10.io.Printer t$490 = ((x10.io.Printer)(x10.io.Console.get$OUT()));
        
        //#line 12 "PixelBlurSeq.x10"
        final java.lang.String t$491 = ((x10.core.Rail<x10.core.Double>)blurredPixels).toString();
        
        //#line 12 "PixelBlurSeq.x10"
        t$490.println(((java.lang.Object)(t$491)));
    }
    
    
    //#line 15 "PixelBlurSeq.x10"
    private static x10.core.Rail pixelBlur__0$1x10$lang$Double$2(final x10.core.Rail<x10.core.Double> pixels) {
        
        //#line 16 "PixelBlurSeq.x10"
        final long t$492 = ((x10.core.Rail<x10.core.Double>)pixels).size;
        
        //#line 16 "PixelBlurSeq.x10"
        x10.core.Rail blurredPixels = new x10.core.Rail<x10.core.Double>(x10.rtt.Types.DOUBLE, ((long)(t$492)));
        
        //#line 17 "PixelBlurSeq.x10"
        final long i$464min$573 = 0L;
        
        //#line 17 "PixelBlurSeq.x10"
        final long t$574 = ((x10.core.Rail<x10.core.Double>)pixels).size;
        
        //#line 17 "PixelBlurSeq.x10"
        final long i$464max$575 = ((t$574) - (((long)(1L))));
        
        //#line 17 "PixelBlurSeq.x10"
        long i$570 = i$464min$573;
        {
            
            //#line 17 "PixelBlurSeq.x10"
            final double[] pixels$value$578 = ((double[])pixels.value);
            
            //#line 17 "PixelBlurSeq.x10"
            for (;
                 true;
                 ) {
                
                //#line 17 "PixelBlurSeq.x10"
                final long t$571 = i$570;
                
                //#line 17 "PixelBlurSeq.x10"
                final boolean t$572 = ((t$571) <= (((long)(i$464max$575))));
                
                //#line 17 "PixelBlurSeq.x10"
                if (!(t$572)) {
                    
                    //#line 17 "PixelBlurSeq.x10"
                    break;
                }
                
                //#line 17 "PixelBlurSeq.x10"
                final long i$567 = i$570;
                
                //#line 18 "PixelBlurSeq.x10"
                final boolean t$539 = ((long) i$567) == ((long) 0L);
                
                //#line 18 "PixelBlurSeq.x10"
                if (t$539) {
                    
                    //#line 19 "PixelBlurSeq.x10"
                    final x10.core.Rail t$540 = ((x10.core.Rail)(blurredPixels));
                    
                    //#line 19 "PixelBlurSeq.x10"
                    final double t$541 = ((double)pixels$value$578[(int)i$567]);
                    
                    //#line 19 "PixelBlurSeq.x10"
                    final long t$542 = ((i$567) + (((long)(1L))));
                    
                    //#line 19 "PixelBlurSeq.x10"
                    final double t$543 = ((double)pixels$value$578[(int)t$542]);
                    
                    //#line 19 "PixelBlurSeq.x10"
                    final double t$544 = ((t$541) + (((double)(t$543))));
                    
                    //#line 19 "PixelBlurSeq.x10"
                    final double t$545 = ((double)(long)(((long)(2L))));
                    
                    //#line 19 "PixelBlurSeq.x10"
                    final double t$546 = ((t$544) / (((double)(t$545))));
                    
                    //#line 19 "PixelBlurSeq.x10"
                    ((double[])t$540.value)[(int)i$567] = t$546;
                } else {
                    
                    //#line 20 "PixelBlurSeq.x10"
                    final long t$547 = ((x10.core.Rail<x10.core.Double>)pixels).size;
                    
                    //#line 20 "PixelBlurSeq.x10"
                    final long t$548 = ((t$547) - (((long)(1L))));
                    
                    //#line 20 "PixelBlurSeq.x10"
                    final boolean t$549 = ((long) i$567) == ((long) t$548);
                    
                    //#line 20 "PixelBlurSeq.x10"
                    if (t$549) {
                        
                        //#line 21 "PixelBlurSeq.x10"
                        final x10.core.Rail t$550 = ((x10.core.Rail)(blurredPixels));
                        
                        //#line 21 "PixelBlurSeq.x10"
                        final long t$551 = ((i$567) - (((long)(1L))));
                        
                        //#line 21 "PixelBlurSeq.x10"
                        final double t$552 = ((double)pixels$value$578[(int)t$551]);
                        
                        //#line 21 "PixelBlurSeq.x10"
                        final double t$553 = ((double)pixels$value$578[(int)i$567]);
                        
                        //#line 21 "PixelBlurSeq.x10"
                        final double t$554 = ((t$552) + (((double)(t$553))));
                        
                        //#line 21 "PixelBlurSeq.x10"
                        final double t$555 = ((double)(long)(((long)(2L))));
                        
                        //#line 21 "PixelBlurSeq.x10"
                        final double t$556 = ((t$554) / (((double)(t$555))));
                        
                        //#line 21 "PixelBlurSeq.x10"
                        ((double[])t$550.value)[(int)i$567] = t$556;
                    } else {
                        
                        //#line 23 "PixelBlurSeq.x10"
                        final x10.core.Rail t$557 = ((x10.core.Rail)(blurredPixels));
                        
                        //#line 23 "PixelBlurSeq.x10"
                        final long t$558 = ((i$567) - (((long)(1L))));
                        
                        //#line 23 "PixelBlurSeq.x10"
                        final double t$559 = ((double)pixels$value$578[(int)t$558]);
                        
                        //#line 23 "PixelBlurSeq.x10"
                        final double t$560 = ((double)pixels$value$578[(int)i$567]);
                        
                        //#line 23 "PixelBlurSeq.x10"
                        final double t$561 = ((t$559) + (((double)(t$560))));
                        
                        //#line 23 "PixelBlurSeq.x10"
                        final long t$562 = ((i$567) + (((long)(1L))));
                        
                        //#line 23 "PixelBlurSeq.x10"
                        final double t$563 = ((double)pixels$value$578[(int)t$562]);
                        
                        //#line 23 "PixelBlurSeq.x10"
                        final double t$564 = ((t$561) + (((double)(t$563))));
                        
                        //#line 23 "PixelBlurSeq.x10"
                        final double t$565 = ((double)(long)(((long)(3L))));
                        
                        //#line 23 "PixelBlurSeq.x10"
                        final double t$566 = ((t$564) / (((double)(t$565))));
                        
                        //#line 23 "PixelBlurSeq.x10"
                        ((double[])t$557.value)[(int)i$567] = t$566;
                    }
                }
                
                //#line 17 "PixelBlurSeq.x10"
                final long t$568 = i$570;
                
                //#line 17 "PixelBlurSeq.x10"
                final long t$569 = ((t$568) + (((long)(1L))));
                
                //#line 17 "PixelBlurSeq.x10"
                i$570 = t$569;
            }
        }
        
        //#line 26 "PixelBlurSeq.x10"
        final x10.core.Rail t$527 = ((x10.core.Rail)(blurredPixels));
        
        //#line 26 "PixelBlurSeq.x10"
        return t$527;
    }
    
    public static x10.core.Rail pixelBlur$P__0$1x10$lang$Double$2(final x10.core.Rail<x10.core.Double> pixels) {
        return PixelBlurSeq.pixelBlur__0$1x10$lang$Double$2(((x10.core.Rail)(pixels)));
    }
    
    
    //#line 4 "PixelBlurSeq.x10"
    final public PixelBlurSeq PixelBlurSeq$$this$PixelBlurSeq() {
        
        //#line 4 "PixelBlurSeq.x10"
        return PixelBlurSeq.this;
    }
    
    
    //#line 4 "PixelBlurSeq.x10"
    // creation method for java code (1-phase java constructor)
    public PixelBlurSeq() {
        this((java.lang.System[]) null);
        PixelBlurSeq$$init$S();
    }
    
    // constructor for non-virtual call
    final public PixelBlurSeq PixelBlurSeq$$init$S() {
         {
            
            //#line 4 "PixelBlurSeq.x10"
            
            
            //#line 4 "PixelBlurSeq.x10"
            this.__fieldInitializers_PixelBlurSeq();
        }
        return this;
    }
    
    
    
    //#line 4 "PixelBlurSeq.x10"
    final public void __fieldInitializers_PixelBlurSeq() {
        
    }
}

