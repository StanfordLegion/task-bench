
@x10.runtime.impl.java.X10Generated
public class PixelBlurPar_v1 extends x10.core.Ref implements x10.serialization.X10JavaSerializable
{
    public static final x10.rtt.RuntimeType<PixelBlurPar_v1> $RTT = 
        x10.rtt.NamedType.<PixelBlurPar_v1> make("PixelBlurPar_v1",
                                                 PixelBlurPar_v1.class);
    
    public x10.rtt.RuntimeType<?> $getRTT() { return $RTT; }
    
    public x10.rtt.Type<?> $getParam(int i) { return null; }
    
    private Object writeReplace() throws java.io.ObjectStreamException {
        return new x10.serialization.SerializationProxy(this);
    }
    
    public static x10.serialization.X10JavaSerializable $_deserialize_body(PixelBlurPar_v1 $_obj, x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
        if (x10.runtime.impl.java.Runtime.TRACE_SER) { x10.runtime.impl.java.Runtime.printTraceMessage("X10JavaSerializable: $_deserialize_body() of " + PixelBlurPar_v1.class + " calling"); } 
        return $_obj;
    }
    
    public static x10.serialization.X10JavaSerializable $_deserializer(x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
        PixelBlurPar_v1 $_obj = new PixelBlurPar_v1((java.lang.System[]) null);
        $deserializer.record_reference($_obj);
        return $_deserialize_body($_obj, $deserializer);
    }
    
    public void $_serialize(x10.serialization.X10JavaSerializer $serializer) throws java.io.IOException {
        
    }
    
    // constructor just for allocation
    public PixelBlurPar_v1(final java.lang.System[] $dummy) {
        
    }
    
    

    
    
    //#line 5 "PixelBlurPar_v1.x10"
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
            PixelBlurPar_v1.main(args);
        }
    }
    
    // the original app-main method
    public static void main(final x10.core.Rail<java.lang.String> args) {
        
        //#line 6 "PixelBlurPar_v1.x10"
        final long t$1158 = ((x10.core.Rail<java.lang.String>)args).size;
        
        //#line 6 "PixelBlurPar_v1.x10"
        final x10.core.Rail pixels = new x10.core.Rail<x10.core.Double>(x10.rtt.Types.DOUBLE, ((long)(t$1158)));
        
        //#line 7 "PixelBlurPar_v1.x10"
        final long i$1135min$1259 = 0L;
        
        //#line 7 "PixelBlurPar_v1.x10"
        final long t$1260 = ((x10.core.Rail<java.lang.String>)args).size;
        
        //#line 7 "PixelBlurPar_v1.x10"
        final long i$1135max$1261 = ((t$1260) - (((long)(1L))));
        
        //#line 7 "PixelBlurPar_v1.x10"
        long i$1256 = i$1135min$1259;
        {
            
            //#line 7 "PixelBlurPar_v1.x10"
            final java.lang.String[] args$value$1479 = ((java.lang.String[])args.value);
            
            //#line 7 "PixelBlurPar_v1.x10"
            final double[] pixels$value$1480 = ((double[])pixels.value);
            
            //#line 7 "PixelBlurPar_v1.x10"
            for (;
                 true;
                 ) {
                
                //#line 7 "PixelBlurPar_v1.x10"
                final long t$1257 = i$1256;
                
                //#line 7 "PixelBlurPar_v1.x10"
                final boolean t$1258 = ((t$1257) <= (((long)(i$1135max$1261))));
                
                //#line 7 "PixelBlurPar_v1.x10"
                if (!(t$1258)) {
                    
                    //#line 7 "PixelBlurPar_v1.x10"
                    break;
                }
                
                //#line 7 "PixelBlurPar_v1.x10"
                final long i$1253 = i$1256;
                
                //#line 8 "PixelBlurPar_v1.x10"
                final java.lang.String t$1251 = ((java.lang.String)args$value$1479[(int)i$1253]);
                
                //#line 8 "PixelBlurPar_v1.x10"
                final double t$1252 = java.lang.Double.parseDouble(t$1251);
                
                //#line 8 "PixelBlurPar_v1.x10"
                pixels$value$1480[(int)i$1253]=t$1252;
                
                //#line 7 "PixelBlurPar_v1.x10"
                final long t$1254 = i$1256;
                
                //#line 7 "PixelBlurPar_v1.x10"
                final long t$1255 = ((t$1254) + (((long)(1L))));
                
                //#line 7 "PixelBlurPar_v1.x10"
                i$1256 = t$1255;
            }
        }
        
        //#line 10 "PixelBlurPar_v1.x10"
        final x10.core.Rail blurredPixels = PixelBlurPar_v1.pixelBlur__0$1x10$lang$Double$2(((x10.core.Rail)(pixels)));
        
        //#line 11 "PixelBlurPar_v1.x10"
        final x10.io.Printer t$1167 = ((x10.io.Printer)(x10.io.Console.get$OUT()));
        
        //#line 11 "PixelBlurPar_v1.x10"
        final java.lang.String t$1168 = ((x10.core.Rail<x10.core.Double>)blurredPixels).toString();
        
        //#line 11 "PixelBlurPar_v1.x10"
        t$1167.println(((java.lang.Object)(t$1168)));
    }
    
    
    //#line 14 "PixelBlurPar_v1.x10"
    private static x10.core.Rail pixelBlur__0$1x10$lang$Double$2(final x10.core.Rail<x10.core.Double> pixels) {
        
        //#line 15 "PixelBlurPar_v1.x10"
        final long t$1169 = ((x10.core.Rail<x10.core.Double>)pixels).size;
        
        //#line 15 "PixelBlurPar_v1.x10"
        x10.core.Rail blurredPixels = new x10.core.Rail<x10.core.Double>(x10.rtt.Types.DOUBLE, ((long)(t$1169)));
        
        //#line 16 "PixelBlurPar_v1.x10"
        final x10.core.Rail t$1170 = ((x10.core.Rail)(blurredPixels));
        
        //#line 16 "PixelBlurPar_v1.x10"
        final x10.core.GlobalRef blurredPixelsRef = new x10.core.GlobalRef<x10.core.Rail<x10.core.Double>>(x10.rtt.ParameterizedType.make(x10.core.Rail.$RTT, x10.rtt.Types.DOUBLE), t$1170, (x10.core.GlobalRef.__0x10$lang$GlobalRef$$T) null);
        
        //#line 17 "PixelBlurPar_v1.x10"
        final long t$1171 = ((x10.core.Rail<x10.core.Double>)pixels).size;
        
        //#line 17 "PixelBlurPar_v1.x10"
        x10.core.Rail pixelRails = new x10.core.Rail<x10.core.Rail<x10.core.Double>>(x10.rtt.ParameterizedType.make(x10.core.Rail.$RTT, x10.rtt.Types.DOUBLE), ((long)(t$1171)));
        
        //#line 18 "PixelBlurPar_v1.x10"
        final x10.core.Rail t$1172 = ((x10.core.Rail)(pixelRails));
        
        //#line 18 "PixelBlurPar_v1.x10"
        final x10.core.GlobalRef pixelRailsRef = new x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>>(x10.rtt.ParameterizedType.make(x10.core.Rail.$RTT, x10.rtt.ParameterizedType.make(x10.core.Rail.$RTT, x10.rtt.Types.DOUBLE)), t$1172, (x10.core.GlobalRef.__0x10$lang$GlobalRef$$T) null);
        {
            
            //#line 20 "PixelBlurPar_v1.x10"
            x10.xrx.Runtime.ensureNotInAtomic();
            
            //#line 20 "PixelBlurPar_v1.x10"
            final x10.xrx.FinishState fs$1408 = x10.xrx.Runtime.startFinish();
            {
                
                //#line 20 "PixelBlurPar_v1.x10"
                final x10.core.Rail[] $pixelRails$1478 = new x10.core.Rail[1];
                
                //#line 20 "PixelBlurPar_v1.x10"
                $pixelRails$1478[(int)0]=pixelRails;
                
                //#line 20 "PixelBlurPar_v1.x10"
                try {{
                    {
                        
                        //#line 20 "PixelBlurPar_v1.x10"
                        final x10.lang.PlaceGroup t$1174 = ((x10.lang.PlaceGroup)(x10.lang.Place.places()));
                        
                        //#line 20 "PixelBlurPar_v1.x10"
                        final x10.lang.Iterator p$1155 = ((x10.lang.Iterable<x10.lang.Place>)t$1174).iterator();
                        
                        //#line 20 "PixelBlurPar_v1.x10"
                        for (;
                             true;
                             ) {
                            
                            //#line 20 "PixelBlurPar_v1.x10"
                            final boolean t$1187 = ((x10.lang.Iterator<x10.lang.Place>)p$1155).hasNext$O();
                            
                            //#line 20 "PixelBlurPar_v1.x10"
                            if (!(t$1187)) {
                                
                                //#line 20 "PixelBlurPar_v1.x10"
                                break;
                            }
                            
                            //#line 20 "PixelBlurPar_v1.x10"
                            final x10.lang.Place p$1262 = ((x10.lang.Place)(((x10.lang.Iterator<x10.lang.Place>)p$1155).next$G()));
                            
                            //#line 20 "PixelBlurPar_v1.x10"
                            x10.xrx.Runtime.runAsync(((x10.core.fun.VoidFun_0_0)(new PixelBlurPar_v1.$Closure$2(p$1262, pixels, pixelRailsRef, $pixelRails$1478, (PixelBlurPar_v1.$Closure$2.__1$1x10$lang$Double$2__2$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2) null))));
                        }
                    }
                }}catch (java.lang.Throwable ct$1406) {
                    
                    //#line 20 "PixelBlurPar_v1.x10"
                    x10.xrx.Runtime.pushException(((java.lang.Throwable)(ct$1406)));
                    
                    //#line 20 "PixelBlurPar_v1.x10"
                    throw new java.lang.RuntimeException();
                }finally {{
                     
                     //#line 20 "PixelBlurPar_v1.x10"
                     x10.xrx.Runtime.stopFinish(((x10.xrx.FinishState)(fs$1408)));
                 }}
                
                //#line 20 "PixelBlurPar_v1.x10"
                pixelRails = ((x10.core.Rail<x10.core.Rail<x10.core.Double>>)$pixelRails$1478[(int)0]);
                }
            }
        {
            
            //#line 29 "PixelBlurPar_v1.x10"
            x10.xrx.Runtime.ensureNotInAtomic();
            
            //#line 29 "PixelBlurPar_v1.x10"
            final x10.xrx.FinishState fs$1472 = x10.xrx.Runtime.startFinish();
            
            //#line 29 "PixelBlurPar_v1.x10"
            try {{
                {
                    
                    //#line 29 "PixelBlurPar_v1.x10"
                    final x10.lang.PlaceGroup t$1189 = ((x10.lang.PlaceGroup)(x10.lang.Place.places()));
                    
                    //#line 29 "PixelBlurPar_v1.x10"
                    final x10.lang.Iterator p$1157 = ((x10.lang.Iterable<x10.lang.Place>)t$1189).iterator();
                    
                    //#line 29 "PixelBlurPar_v1.x10"
                    for (;
                         true;
                         ) {
                        
                        //#line 29 "PixelBlurPar_v1.x10"
                        final boolean t$1245 = ((x10.lang.Iterator<x10.lang.Place>)p$1157).hasNext$O();
                        
                        //#line 29 "PixelBlurPar_v1.x10"
                        if (!(t$1245)) {
                            
                            //#line 29 "PixelBlurPar_v1.x10"
                            break;
                        }
                        
                        //#line 29 "PixelBlurPar_v1.x10"
                        final x10.lang.Place p$1276 = ((x10.lang.Place)(((x10.lang.Iterator<x10.lang.Place>)p$1157).next$G()));
                        
                        //#line 31 "PixelBlurPar_v1.x10"
                        x10.xrx.Runtime.runAsync(((x10.lang.Place)(p$1276)), ((x10.core.fun.VoidFun_0_0)(new PixelBlurPar_v1.$Closure$16(p$1276, pixels, pixelRailsRef, blurredPixelsRef, (PixelBlurPar_v1.$Closure$16.__1$1x10$lang$Double$2__2$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2__3$1x10$lang$Rail$1x10$lang$Double$2$2) null))), ((x10.xrx.Runtime.Profile)(null)));
                    }
                }
            }}catch (java.lang.Throwable ct$1470) {
                
                //#line 29 "PixelBlurPar_v1.x10"
                x10.xrx.Runtime.pushException(((java.lang.Throwable)(ct$1470)));
                
                //#line 29 "PixelBlurPar_v1.x10"
                throw new java.lang.RuntimeException();
            }finally {{
                 
                 //#line 29 "PixelBlurPar_v1.x10"
                 x10.xrx.Runtime.stopFinish(((x10.xrx.FinishState)(fs$1472)));
             }}
            }
        
        //#line 72 "PixelBlurPar_v1.x10"
        final x10.lang.Place t$1249 = ((x10.lang.Place)((pixelRailsRef).home));
        {
            
            //#line 72 "PixelBlurPar_v1.x10"
            x10.xrx.Runtime.runAt(((x10.lang.Place)(t$1249)), ((x10.core.fun.VoidFun_0_0)(new PixelBlurPar_v1.$Closure$17(pixelRailsRef, (PixelBlurPar_v1.$Closure$17.__0$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2) null))), ((x10.xrx.Runtime.Profile)(null)));
        }
        
        //#line 74 "PixelBlurPar_v1.x10"
        final x10.core.Rail t$1250 = ((x10.core.Rail)(blurredPixels));
        
        //#line 74 "PixelBlurPar_v1.x10"
        return t$1250;
        }
        
        public static x10.core.Rail pixelBlur$P__0$1x10$lang$Double$2(final x10.core.Rail<x10.core.Double> pixels) {
            return PixelBlurPar_v1.pixelBlur__0$1x10$lang$Double$2(((x10.core.Rail)(pixels)));
        }
        
        
        //#line 3 "PixelBlurPar_v1.x10"
        final public PixelBlurPar_v1 PixelBlurPar_v1$$this$PixelBlurPar_v1() {
            
            //#line 3 "PixelBlurPar_v1.x10"
            return PixelBlurPar_v1.this;
        }
        
        
        //#line 3 "PixelBlurPar_v1.x10"
        // creation method for java code (1-phase java constructor)
        public PixelBlurPar_v1() {
            this((java.lang.System[]) null);
            PixelBlurPar_v1$$init$S();
        }
        
        // constructor for non-virtual call
        final public PixelBlurPar_v1 PixelBlurPar_v1$$init$S() {
             {
                
                //#line 3 "PixelBlurPar_v1.x10"
                
                
                //#line 3 "PixelBlurPar_v1.x10"
                this.__fieldInitializers_PixelBlurPar_v1();
            }
            return this;
        }
        
        
        
        //#line 3 "PixelBlurPar_v1.x10"
        final public void __fieldInitializers_PixelBlurPar_v1() {
            
        }
        
        @x10.runtime.impl.java.X10Generated
        final public static class $Closure$0 extends x10.core.Ref implements x10.core.fun.VoidFun_0_0, x10.serialization.X10JavaSerializable
        {
            public static final x10.rtt.RuntimeType<$Closure$0> $RTT = 
                x10.rtt.StaticVoidFunType.<$Closure$0> make($Closure$0.class,
                                                            new x10.rtt.Type[] {
                                                                x10.core.fun.VoidFun_0_0.$RTT
                                                            });
            
            public x10.rtt.RuntimeType<?> $getRTT() { return $RTT; }
            
            public x10.rtt.Type<?> $getParam(int i) { return null; }
            
            private Object writeReplace() throws java.io.ObjectStreamException {
                return new x10.serialization.SerializationProxy(this);
            }
            
            public static x10.serialization.X10JavaSerializable $_deserialize_body(PixelBlurPar_v1.$Closure$0 $_obj, x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
                if (x10.runtime.impl.java.Runtime.TRACE_SER) { x10.runtime.impl.java.Runtime.printTraceMessage("X10JavaSerializable: $_deserialize_body() of " + $Closure$0.class + " calling"); } 
                $_obj.p$1262 = $deserializer.readObject();
                $_obj.pixelRail$1263 = $deserializer.readObject();
                $_obj.pixelRailsRef = $deserializer.readObject();
                return $_obj;
            }
            
            public static x10.serialization.X10JavaSerializable $_deserializer(x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
                PixelBlurPar_v1.$Closure$0 $_obj = new PixelBlurPar_v1.$Closure$0((java.lang.System[]) null);
                $deserializer.record_reference($_obj);
                return $_deserialize_body($_obj, $deserializer);
            }
            
            public void $_serialize(x10.serialization.X10JavaSerializer $serializer) throws java.io.IOException {
                $serializer.write(this.p$1262);
                $serializer.write(this.pixelRail$1263);
                $serializer.write(this.pixelRailsRef);
                
            }
            
            // constructor just for allocation
            public $Closure$0(final java.lang.System[] $dummy) {
                
            }
            
            // synthetic type for parameter mangling
            public static final class __0$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2__2$1x10$lang$Double$2 {}
            
        
            
            public void $apply() {
                
                //#line 24 "PixelBlurPar_v1.x10"
                try {{
                    
                    //#line 24 "PixelBlurPar_v1.x10"
                    final x10.core.Rail t$1267 = (((x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>>)(this.pixelRailsRef))).$apply$G();
                    
                    //#line 24 "PixelBlurPar_v1.x10"
                    final long t$1268 = this.p$1262.id;
                    
                    //#line 24 "PixelBlurPar_v1.x10"
                    ((x10.core.Rail[])t$1267.value)[(int)t$1268] = this.pixelRail$1263;
                }}catch (java.lang.Throwable __lowerer__var__0__) {
                    
                    //#line 24 "PixelBlurPar_v1.x10"
                    int __lowerer__var__1__ = (x10.core.Int.$unbox(x10.xrx.Runtime.<x10.core.Int> wrapAtChecked$G(x10.rtt.Types.INT, ((java.lang.Throwable)(__lowerer__var__0__)))));
                }
            }
            
            public x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>> pixelRailsRef;
            public x10.lang.Place p$1262;
            public x10.core.Rail<x10.core.Double> pixelRail$1263;
            
            public $Closure$0(final x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>> pixelRailsRef, final x10.lang.Place p$1262, final x10.core.Rail<x10.core.Double> pixelRail$1263, __0$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2__2$1x10$lang$Double$2 $dummy) {
                 {
                    this.pixelRailsRef = ((x10.core.GlobalRef)(pixelRailsRef));
                    this.p$1262 = ((x10.lang.Place)(p$1262));
                    this.pixelRail$1263 = ((x10.core.Rail)(pixelRail$1263));
                }
            }
            
        }
        
        @x10.runtime.impl.java.X10Generated
        final public static class $Closure$1 extends x10.core.Ref implements x10.core.fun.VoidFun_0_0, x10.serialization.X10JavaSerializable
        {
            public static final x10.rtt.RuntimeType<$Closure$1> $RTT = 
                x10.rtt.StaticVoidFunType.<$Closure$1> make($Closure$1.class,
                                                            new x10.rtt.Type[] {
                                                                x10.core.fun.VoidFun_0_0.$RTT
                                                            });
            
            public x10.rtt.RuntimeType<?> $getRTT() { return $RTT; }
            
            public x10.rtt.Type<?> $getParam(int i) { return null; }
            
            private Object writeReplace() throws java.io.ObjectStreamException {
                return new x10.serialization.SerializationProxy(this);
            }
            
            public static x10.serialization.X10JavaSerializable $_deserialize_body(PixelBlurPar_v1.$Closure$1 $_obj, x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
                if (x10.runtime.impl.java.Runtime.TRACE_SER) { x10.runtime.impl.java.Runtime.printTraceMessage("X10JavaSerializable: $_deserialize_body() of " + $Closure$1.class + " calling"); } 
                $_obj.p$1262 = $deserializer.readObject();
                $_obj.pixelRailsRef = $deserializer.readObject();
                $_obj.pixels = $deserializer.readObject();
                return $_obj;
            }
            
            public static x10.serialization.X10JavaSerializable $_deserializer(x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
                PixelBlurPar_v1.$Closure$1 $_obj = new PixelBlurPar_v1.$Closure$1((java.lang.System[]) null);
                $deserializer.record_reference($_obj);
                return $_deserialize_body($_obj, $deserializer);
            }
            
            public void $_serialize(x10.serialization.X10JavaSerializer $serializer) throws java.io.IOException {
                $serializer.write(this.p$1262);
                $serializer.write(this.pixelRailsRef);
                $serializer.write(this.pixels);
                
            }
            
            // constructor just for allocation
            public $Closure$1(final java.lang.System[] $dummy) {
                
            }
            
            // synthetic type for parameter mangling
            public static final class __1$1x10$lang$Double$2__2$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2 {}
            
        
            
            public void $apply() {
                
                //#line 21 "PixelBlurPar_v1.x10"
                try {{
                    
                    //#line 22 "PixelBlurPar_v1.x10"
                    final x10.core.Rail pixelRail$1263 = ((x10.core.Rail)(new x10.core.Rail<x10.core.Double>(x10.rtt.Types.DOUBLE, ((long)(3L)))));
                    
                    //#line 23 "PixelBlurPar_v1.x10"
                    final long t$1264 = this.p$1262.id;
                    
                    //#line 23 "PixelBlurPar_v1.x10"
                    final double t$1265 = ((double[])this.pixels.value)[(int)t$1264];
                    
                    //#line 23 "PixelBlurPar_v1.x10"
                    ((double[])pixelRail$1263.value)[(int)1L] = t$1265;
                    
                    //#line 24 "PixelBlurPar_v1.x10"
                    final x10.lang.Place t$1266 = ((x10.lang.Place)((this.pixelRailsRef).home));
                    {
                        
                        //#line 24 "PixelBlurPar_v1.x10"
                        x10.xrx.Runtime.runAt(((x10.lang.Place)(t$1266)), ((x10.core.fun.VoidFun_0_0)(new PixelBlurPar_v1.$Closure$0(((x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>>)(this.pixelRailsRef)), ((x10.lang.Place)(this.p$1262)), pixelRail$1263, (PixelBlurPar_v1.$Closure$0.__0$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2__2$1x10$lang$Double$2) null))), ((x10.xrx.Runtime.Profile)(null)));
                    }
                }}catch (java.lang.Throwable __lowerer__var__0__) {
                    
                    //#line 21 "PixelBlurPar_v1.x10"
                    int __lowerer__var__1__ = (x10.core.Int.$unbox(x10.xrx.Runtime.<x10.core.Int> wrapAtChecked$G(x10.rtt.Types.INT, ((java.lang.Throwable)(__lowerer__var__0__)))));
                }
            }
            
            public x10.lang.Place p$1262;
            public x10.core.Rail<x10.core.Double> pixels;
            public x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>> pixelRailsRef;
            
            public $Closure$1(final x10.lang.Place p$1262, final x10.core.Rail<x10.core.Double> pixels, final x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>> pixelRailsRef, __1$1x10$lang$Double$2__2$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2 $dummy) {
                 {
                    this.p$1262 = ((x10.lang.Place)(p$1262));
                    this.pixels = ((x10.core.Rail)(pixels));
                    this.pixelRailsRef = ((x10.core.GlobalRef)(pixelRailsRef));
                }
            }
            
        }
        
        @x10.runtime.impl.java.X10Generated
        final public static class $Closure$2 extends x10.core.Ref implements x10.core.fun.VoidFun_0_0, x10.serialization.X10JavaSerializable
        {
            public static final x10.rtt.RuntimeType<$Closure$2> $RTT = 
                x10.rtt.StaticVoidFunType.<$Closure$2> make($Closure$2.class,
                                                            new x10.rtt.Type[] {
                                                                x10.core.fun.VoidFun_0_0.$RTT
                                                            });
            
            public x10.rtt.RuntimeType<?> $getRTT() { return $RTT; }
            
            public x10.rtt.Type<?> $getParam(int i) { return null; }
            
            private Object writeReplace() throws java.io.ObjectStreamException {
                return new x10.serialization.SerializationProxy(this);
            }
            
            public static x10.serialization.X10JavaSerializable $_deserialize_body(PixelBlurPar_v1.$Closure$2 $_obj, x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
                if (x10.runtime.impl.java.Runtime.TRACE_SER) { x10.runtime.impl.java.Runtime.printTraceMessage("X10JavaSerializable: $_deserialize_body() of " + $Closure$2.class + " calling"); } 
                $_obj.$pixelRails$1478 = $deserializer.readObject();
                $_obj.p$1262 = $deserializer.readObject();
                $_obj.pixelRailsRef = $deserializer.readObject();
                $_obj.pixels = $deserializer.readObject();
                return $_obj;
            }
            
            public static x10.serialization.X10JavaSerializable $_deserializer(x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
                PixelBlurPar_v1.$Closure$2 $_obj = new PixelBlurPar_v1.$Closure$2((java.lang.System[]) null);
                $deserializer.record_reference($_obj);
                return $_deserialize_body($_obj, $deserializer);
            }
            
            public void $_serialize(x10.serialization.X10JavaSerializer $serializer) throws java.io.IOException {
                $serializer.write(this.$pixelRails$1478);
                $serializer.write(this.p$1262);
                $serializer.write(this.pixelRailsRef);
                $serializer.write(this.pixels);
                
            }
            
            // constructor just for allocation
            public $Closure$2(final java.lang.System[] $dummy) {
                
            }
            
            // synthetic type for parameter mangling
            public static final class __1$1x10$lang$Double$2__2$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2 {}
            
        
            
            public void $apply() {
                
                //#line 20 "PixelBlurPar_v1.x10"
                try {{
                    {
                        
                        //#line 21 "PixelBlurPar_v1.x10"
                        x10.xrx.Runtime.runAt(((x10.lang.Place)(this.p$1262)), ((x10.core.fun.VoidFun_0_0)(new PixelBlurPar_v1.$Closure$1(((x10.lang.Place)(this.p$1262)), ((x10.core.Rail)(this.pixels)), ((x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>>)(this.pixelRailsRef)), (PixelBlurPar_v1.$Closure$1.__1$1x10$lang$Double$2__2$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2) null))), ((x10.xrx.Runtime.Profile)(null)));
                    }
                    
                    //#line 26 "PixelBlurPar_v1.x10"
                    final x10.io.Printer t$1269 = ((x10.io.Printer)(x10.io.Console.get$OUT()));
                    
                    //#line 26 "PixelBlurPar_v1.x10"
                    final java.lang.String t$1270 = (("INIT Pixel Rail at ") + (this.p$1262));
                    
                    //#line 26 "PixelBlurPar_v1.x10"
                    final java.lang.String t$1271 = ((t$1270) + (": "));
                    
                    //#line 26 "PixelBlurPar_v1.x10"
                    final x10.core.Rail t$1272 = ((x10.core.Rail<x10.core.Rail<x10.core.Double>>)this.$pixelRails$1478[(int)0]);
                    
                    //#line 26 "PixelBlurPar_v1.x10"
                    final long t$1273 = this.p$1262.id;
                    
                    //#line 26 "PixelBlurPar_v1.x10"
                    final x10.core.Rail t$1274 = ((x10.core.Rail[])t$1272.value)[(int)t$1273];
                    
                    //#line 26 "PixelBlurPar_v1.x10"
                    final java.lang.String t$1275 = ((t$1271) + (t$1274));
                    
                    //#line 26 "PixelBlurPar_v1.x10"
                    t$1269.println(((java.lang.Object)(t$1275)));
                }}catch (java.lang.Error __lowerer__var__0__) {
                    
                    //#line 20 "PixelBlurPar_v1.x10"
                    throw __lowerer__var__0__;
                }catch (java.lang.Throwable __lowerer__var__1__) {
                    
                    //#line 20 "PixelBlurPar_v1.x10"
                    throw x10.rtt.Types.EXCEPTION.isInstance(__lowerer__var__1__) ? (java.lang.RuntimeException)(__lowerer__var__1__) : new x10.lang.WrappedThrowable(__lowerer__var__1__);
                }
            }
            
            public x10.lang.Place p$1262;
            public x10.core.Rail<x10.core.Double> pixels;
            public x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>> pixelRailsRef;
            public x10.core.Rail[] $pixelRails$1478;
            
            public $Closure$2(final x10.lang.Place p$1262, final x10.core.Rail<x10.core.Double> pixels, final x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>> pixelRailsRef, final x10.core.Rail[] $pixelRails$1478, __1$1x10$lang$Double$2__2$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2 $dummy) {
                 {
                    this.p$1262 = ((x10.lang.Place)(p$1262));
                    this.pixels = ((x10.core.Rail)(pixels));
                    this.pixelRailsRef = ((x10.core.GlobalRef)(pixelRailsRef));
                    this.$pixelRails$1478 = $pixelRails$1478;
                }
            }
            
        }
        
        @x10.runtime.impl.java.X10Generated
        final public static class $Closure$3 extends x10.core.Ref implements x10.core.fun.Fun_0_0, x10.serialization.X10JavaSerializable
        {
            public static final x10.rtt.RuntimeType<$Closure$3> $RTT = 
                x10.rtt.StaticFunType.<$Closure$3> make($Closure$3.class,
                                                        new x10.rtt.Type[] {
                                                            x10.rtt.ParameterizedType.make(x10.core.fun.Fun_0_0.$RTT, x10.rtt.Types.DOUBLE)
                                                        });
            
            public x10.rtt.RuntimeType<?> $getRTT() { return $RTT; }
            
            public x10.rtt.Type<?> $getParam(int i) { return null; }
            
            private Object writeReplace() throws java.io.ObjectStreamException {
                return new x10.serialization.SerializationProxy(this);
            }
            
            public static x10.serialization.X10JavaSerializable $_deserialize_body(PixelBlurPar_v1.$Closure$3 $_obj, x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
                if (x10.runtime.impl.java.Runtime.TRACE_SER) { x10.runtime.impl.java.Runtime.printTraceMessage("X10JavaSerializable: $_deserialize_body() of " + $Closure$3.class + " calling"); } 
                $_obj.p$1276 = $deserializer.readObject();
                $_obj.pixelRailsRef = $deserializer.readObject();
                return $_obj;
            }
            
            public static x10.serialization.X10JavaSerializable $_deserializer(x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
                PixelBlurPar_v1.$Closure$3 $_obj = new PixelBlurPar_v1.$Closure$3((java.lang.System[]) null);
                $deserializer.record_reference($_obj);
                return $_deserialize_body($_obj, $deserializer);
            }
            
            public void $_serialize(x10.serialization.X10JavaSerializer $serializer) throws java.io.IOException {
                $serializer.write(this.p$1276);
                $serializer.write(this.pixelRailsRef);
                
            }
            
            // constructor just for allocation
            public $Closure$3(final java.lang.System[] $dummy) {
                
            }
            
            // bridge for method abstract public ()=>U.operator()():U
            public x10.core.Double $apply$G() {
                return x10.core.Double.$box($apply$O());
            }
            
            // synthetic type for parameter mangling
            public static final class __0$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2 {}
            
        
            
            public double $apply$O() {
                
                //#line 38 "PixelBlurPar_v1.x10"
                try {{
                    
                    //#line 38 "PixelBlurPar_v1.x10"
                    final x10.core.Rail t$1288 = (((x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>>)(this.pixelRailsRef))).$apply$G();
                    
                    //#line 38 "PixelBlurPar_v1.x10"
                    final long t$1289 = this.p$1276.id;
                    
                    //#line 38 "PixelBlurPar_v1.x10"
                    final long t$1290 = ((t$1289) + (((long)(1L))));
                    
                    //#line 38 "PixelBlurPar_v1.x10"
                    final x10.core.Rail t$1291 = ((x10.core.Rail[])t$1288.value)[(int)t$1290];
                    
                    //#line 38 "PixelBlurPar_v1.x10"
                    final double t$1292 = ((double[])t$1291.value)[(int)1L];
                    
                    //#line 38 "PixelBlurPar_v1.x10"
                    return t$1292;
                }}catch (java.lang.Throwable __lowerer__var__0__) {
                    
                    //#line 38 "PixelBlurPar_v1.x10"
                    double __lowerer__var__1__ = (x10.core.Double.$unbox(x10.xrx.Runtime.<x10.core.Double> wrapAtChecked$G(x10.rtt.Types.DOUBLE, ((java.lang.Throwable)(__lowerer__var__0__)))));
                    
                    //#line 38 "PixelBlurPar_v1.x10"
                    return __lowerer__var__1__;
                }
            }
            
            public x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>> pixelRailsRef;
            public x10.lang.Place p$1276;
            
            public $Closure$3(final x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>> pixelRailsRef, final x10.lang.Place p$1276, __0$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2 $dummy) {
                 {
                    this.pixelRailsRef = ((x10.core.GlobalRef)(pixelRailsRef));
                    this.p$1276 = ((x10.lang.Place)(p$1276));
                }
            }
            
        }
        
        @x10.runtime.impl.java.X10Generated
        final public static class $Closure$4 extends x10.core.Ref implements x10.core.fun.VoidFun_0_0, x10.serialization.X10JavaSerializable
        {
            public static final x10.rtt.RuntimeType<$Closure$4> $RTT = 
                x10.rtt.StaticVoidFunType.<$Closure$4> make($Closure$4.class,
                                                            new x10.rtt.Type[] {
                                                                x10.core.fun.VoidFun_0_0.$RTT
                                                            });
            
            public x10.rtt.RuntimeType<?> $getRTT() { return $RTT; }
            
            public x10.rtt.Type<?> $getParam(int i) { return null; }
            
            private Object writeReplace() throws java.io.ObjectStreamException {
                return new x10.serialization.SerializationProxy(this);
            }
            
            public static x10.serialization.X10JavaSerializable $_deserialize_body(PixelBlurPar_v1.$Closure$4 $_obj, x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
                if (x10.runtime.impl.java.Runtime.TRACE_SER) { x10.runtime.impl.java.Runtime.printTraceMessage("X10JavaSerializable: $_deserialize_body() of " + $Closure$4.class + " calling"); } 
                $_obj.p$1276 = $deserializer.readObject();
                $_obj.pixel$1287 = $deserializer.readDouble();
                $_obj.pixelRailsRef = $deserializer.readObject();
                return $_obj;
            }
            
            public static x10.serialization.X10JavaSerializable $_deserializer(x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
                PixelBlurPar_v1.$Closure$4 $_obj = new PixelBlurPar_v1.$Closure$4((java.lang.System[]) null);
                $deserializer.record_reference($_obj);
                return $_deserialize_body($_obj, $deserializer);
            }
            
            public void $_serialize(x10.serialization.X10JavaSerializer $serializer) throws java.io.IOException {
                $serializer.write(this.p$1276);
                $serializer.write(this.pixel$1287);
                $serializer.write(this.pixelRailsRef);
                
            }
            
            // constructor just for allocation
            public $Closure$4(final java.lang.System[] $dummy) {
                
            }
            
            // synthetic type for parameter mangling
            public static final class __0$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2 {}
            
        
            
            public void $apply() {
                
                //#line 39 "PixelBlurPar_v1.x10"
                try {{
                    
                    //#line 40 "PixelBlurPar_v1.x10"
                    final x10.core.Rail t$1294 = (((x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>>)(this.pixelRailsRef))).$apply$G();
                    
                    //#line 40 "PixelBlurPar_v1.x10"
                    final long t$1295 = this.p$1276.id;
                    
                    //#line 40 "PixelBlurPar_v1.x10"
                    final x10.core.Rail t$1296 = ((x10.core.Rail[])t$1294.value)[(int)t$1295];
                    
                    //#line 40 "PixelBlurPar_v1.x10"
                    ((double[])t$1296.value)[(int)2L] = this.pixel$1287;
                    
                    //#line 41 "PixelBlurPar_v1.x10"
                    final x10.io.Printer t$1297 = ((x10.io.Printer)(x10.io.Console.get$OUT()));
                    
                    //#line 41 "PixelBlurPar_v1.x10"
                    final java.lang.String t$1298 = (("PULLED FROM RIGHT ") + (this.p$1276));
                    
                    //#line 41 "PixelBlurPar_v1.x10"
                    final java.lang.String t$1299 = ((t$1298) + (": "));
                    
                    //#line 41 "PixelBlurPar_v1.x10"
                    final x10.core.Rail t$1300 = (((x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>>)(this.pixelRailsRef))).$apply$G();
                    
                    //#line 41 "PixelBlurPar_v1.x10"
                    final long t$1301 = this.p$1276.id;
                    
                    //#line 41 "PixelBlurPar_v1.x10"
                    final x10.core.Rail t$1302 = ((x10.core.Rail[])t$1300.value)[(int)t$1301];
                    
                    //#line 41 "PixelBlurPar_v1.x10"
                    final java.lang.String t$1303 = ((t$1299) + (t$1302));
                    
                    //#line 41 "PixelBlurPar_v1.x10"
                    t$1297.println(((java.lang.Object)(t$1303)));
                }}catch (java.lang.Throwable __lowerer__var__2__) {
                    
                    //#line 39 "PixelBlurPar_v1.x10"
                    int __lowerer__var__3__ = (x10.core.Int.$unbox(x10.xrx.Runtime.<x10.core.Int> wrapAtChecked$G(x10.rtt.Types.INT, ((java.lang.Throwable)(__lowerer__var__2__)))));
                }
            }
            
            public x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>> pixelRailsRef;
            public x10.lang.Place p$1276;
            public double pixel$1287;
            
            public $Closure$4(final x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>> pixelRailsRef, final x10.lang.Place p$1276, final double pixel$1287, __0$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2 $dummy) {
                 {
                    this.pixelRailsRef = ((x10.core.GlobalRef)(pixelRailsRef));
                    this.p$1276 = ((x10.lang.Place)(p$1276));
                    this.pixel$1287 = pixel$1287;
                }
            }
            
        }
        
        @x10.runtime.impl.java.X10Generated
        final public static class $Closure$5 extends x10.core.Ref implements x10.core.fun.VoidFun_0_0, x10.serialization.X10JavaSerializable
        {
            public static final x10.rtt.RuntimeType<$Closure$5> $RTT = 
                x10.rtt.StaticVoidFunType.<$Closure$5> make($Closure$5.class,
                                                            new x10.rtt.Type[] {
                                                                x10.core.fun.VoidFun_0_0.$RTT
                                                            });
            
            public x10.rtt.RuntimeType<?> $getRTT() { return $RTT; }
            
            public x10.rtt.Type<?> $getParam(int i) { return null; }
            
            private Object writeReplace() throws java.io.ObjectStreamException {
                return new x10.serialization.SerializationProxy(this);
            }
            
            public static x10.serialization.X10JavaSerializable $_deserialize_body(PixelBlurPar_v1.$Closure$5 $_obj, x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
                if (x10.runtime.impl.java.Runtime.TRACE_SER) { x10.runtime.impl.java.Runtime.printTraceMessage("X10JavaSerializable: $_deserialize_body() of " + $Closure$5.class + " calling"); } 
                $_obj.p$1276 = $deserializer.readObject();
                $_obj.pixelRailsRef = $deserializer.readObject();
                return $_obj;
            }
            
            public static x10.serialization.X10JavaSerializable $_deserializer(x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
                PixelBlurPar_v1.$Closure$5 $_obj = new PixelBlurPar_v1.$Closure$5((java.lang.System[]) null);
                $deserializer.record_reference($_obj);
                return $_deserialize_body($_obj, $deserializer);
            }
            
            public void $_serialize(x10.serialization.X10JavaSerializer $serializer) throws java.io.IOException {
                $serializer.write(this.p$1276);
                $serializer.write(this.pixelRailsRef);
                
            }
            
            // constructor just for allocation
            public $Closure$5(final java.lang.System[] $dummy) {
                
            }
            
            // synthetic type for parameter mangling
            public static final class __1$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2 {}
            
        
            
            public void $apply() {
                
                //#line 36 "PixelBlurPar_v1.x10"
                try {{
                    
                    //#line 37 "PixelBlurPar_v1.x10"
                    final x10.io.Printer t$1284 = ((x10.io.Printer)(x10.io.Console.get$OUT()));
                    
                    //#line 37 "PixelBlurPar_v1.x10"
                    final java.lang.String t$1285 = ((this.p$1276) + (" PULLING FROM RIGHT"));
                    
                    //#line 37 "PixelBlurPar_v1.x10"
                    t$1284.println(((java.lang.Object)(t$1285)));
                    
                    //#line 38 "PixelBlurPar_v1.x10"
                    final x10.lang.Place t$1286 = ((x10.lang.Place)((this.pixelRailsRef).home));
                    
                    //#line 38 "PixelBlurPar_v1.x10"
                    final double pixel$1287 = x10.core.Double.$unbox(x10.xrx.Runtime.<x10.core.Double> evalAt__1$1x10$xrx$Runtime$$T$2$G(x10.rtt.Types.DOUBLE, ((x10.lang.Place)(t$1286)), ((x10.core.fun.Fun_0_0)(new PixelBlurPar_v1.$Closure$3(((x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>>)(this.pixelRailsRef)), ((x10.lang.Place)(this.p$1276)), (PixelBlurPar_v1.$Closure$3.__0$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2) null))), ((x10.xrx.Runtime.Profile)(null))));
                    
                    //#line 39 "PixelBlurPar_v1.x10"
                    final x10.lang.Place t$1293 = ((x10.lang.Place)((this.pixelRailsRef).home));
                    {
                        
                        //#line 39 "PixelBlurPar_v1.x10"
                        x10.xrx.Runtime.runAt(((x10.lang.Place)(t$1293)), ((x10.core.fun.VoidFun_0_0)(new PixelBlurPar_v1.$Closure$4(((x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>>)(this.pixelRailsRef)), ((x10.lang.Place)(this.p$1276)), pixel$1287, (PixelBlurPar_v1.$Closure$4.__0$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2) null))), ((x10.xrx.Runtime.Profile)(null)));
                    }
                }}catch (java.lang.Error __lowerer__var__0__) {
                    
                    //#line 36 "PixelBlurPar_v1.x10"
                    throw __lowerer__var__0__;
                }catch (java.lang.Throwable __lowerer__var__1__) {
                    
                    //#line 36 "PixelBlurPar_v1.x10"
                    throw x10.rtt.Types.EXCEPTION.isInstance(__lowerer__var__1__) ? (java.lang.RuntimeException)(__lowerer__var__1__) : new x10.lang.WrappedThrowable(__lowerer__var__1__);
                }
            }
            
            public x10.lang.Place p$1276;
            public x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>> pixelRailsRef;
            
            public $Closure$5(final x10.lang.Place p$1276, final x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>> pixelRailsRef, __1$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2 $dummy) {
                 {
                    this.p$1276 = ((x10.lang.Place)(p$1276));
                    this.pixelRailsRef = ((x10.core.GlobalRef)(pixelRailsRef));
                }
            }
            
        }
        
        @x10.runtime.impl.java.X10Generated
        final public static class $Closure$6 extends x10.core.Ref implements x10.core.fun.Fun_0_0, x10.serialization.X10JavaSerializable
        {
            public static final x10.rtt.RuntimeType<$Closure$6> $RTT = 
                x10.rtt.StaticFunType.<$Closure$6> make($Closure$6.class,
                                                        new x10.rtt.Type[] {
                                                            x10.rtt.ParameterizedType.make(x10.core.fun.Fun_0_0.$RTT, x10.rtt.Types.DOUBLE)
                                                        });
            
            public x10.rtt.RuntimeType<?> $getRTT() { return $RTT; }
            
            public x10.rtt.Type<?> $getParam(int i) { return null; }
            
            private Object writeReplace() throws java.io.ObjectStreamException {
                return new x10.serialization.SerializationProxy(this);
            }
            
            public static x10.serialization.X10JavaSerializable $_deserialize_body(PixelBlurPar_v1.$Closure$6 $_obj, x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
                if (x10.runtime.impl.java.Runtime.TRACE_SER) { x10.runtime.impl.java.Runtime.printTraceMessage("X10JavaSerializable: $_deserialize_body() of " + $Closure$6.class + " calling"); } 
                $_obj.p$1276 = $deserializer.readObject();
                $_obj.pixelRailsRef = $deserializer.readObject();
                return $_obj;
            }
            
            public static x10.serialization.X10JavaSerializable $_deserializer(x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
                PixelBlurPar_v1.$Closure$6 $_obj = new PixelBlurPar_v1.$Closure$6((java.lang.System[]) null);
                $deserializer.record_reference($_obj);
                return $_deserialize_body($_obj, $deserializer);
            }
            
            public void $_serialize(x10.serialization.X10JavaSerializer $serializer) throws java.io.IOException {
                $serializer.write(this.p$1276);
                $serializer.write(this.pixelRailsRef);
                
            }
            
            // constructor just for allocation
            public $Closure$6(final java.lang.System[] $dummy) {
                
            }
            
            // bridge for method abstract public ()=>U.operator()():U
            public x10.core.Double $apply$G() {
                return x10.core.Double.$box($apply$O());
            }
            
            // synthetic type for parameter mangling
            public static final class __0$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2 {}
            
        
            
            public double $apply$O() {
                
                //#line 48 "PixelBlurPar_v1.x10"
                try {{
                    
                    //#line 48 "PixelBlurPar_v1.x10"
                    final x10.core.Rail t$1313 = (((x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>>)(this.pixelRailsRef))).$apply$G();
                    
                    //#line 48 "PixelBlurPar_v1.x10"
                    final long t$1314 = this.p$1276.id;
                    
                    //#line 48 "PixelBlurPar_v1.x10"
                    final long t$1315 = ((t$1314) - (((long)(1L))));
                    
                    //#line 48 "PixelBlurPar_v1.x10"
                    final x10.core.Rail t$1316 = ((x10.core.Rail[])t$1313.value)[(int)t$1315];
                    
                    //#line 48 "PixelBlurPar_v1.x10"
                    final double t$1317 = ((double[])t$1316.value)[(int)1L];
                    
                    //#line 48 "PixelBlurPar_v1.x10"
                    return t$1317;
                }}catch (java.lang.Throwable __lowerer__var__0__) {
                    
                    //#line 48 "PixelBlurPar_v1.x10"
                    double __lowerer__var__1__ = (x10.core.Double.$unbox(x10.xrx.Runtime.<x10.core.Double> wrapAtChecked$G(x10.rtt.Types.DOUBLE, ((java.lang.Throwable)(__lowerer__var__0__)))));
                    
                    //#line 48 "PixelBlurPar_v1.x10"
                    return __lowerer__var__1__;
                }
            }
            
            public x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>> pixelRailsRef;
            public x10.lang.Place p$1276;
            
            public $Closure$6(final x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>> pixelRailsRef, final x10.lang.Place p$1276, __0$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2 $dummy) {
                 {
                    this.pixelRailsRef = ((x10.core.GlobalRef)(pixelRailsRef));
                    this.p$1276 = ((x10.lang.Place)(p$1276));
                }
            }
            
        }
        
        @x10.runtime.impl.java.X10Generated
        final public static class $Closure$7 extends x10.core.Ref implements x10.core.fun.VoidFun_0_0, x10.serialization.X10JavaSerializable
        {
            public static final x10.rtt.RuntimeType<$Closure$7> $RTT = 
                x10.rtt.StaticVoidFunType.<$Closure$7> make($Closure$7.class,
                                                            new x10.rtt.Type[] {
                                                                x10.core.fun.VoidFun_0_0.$RTT
                                                            });
            
            public x10.rtt.RuntimeType<?> $getRTT() { return $RTT; }
            
            public x10.rtt.Type<?> $getParam(int i) { return null; }
            
            private Object writeReplace() throws java.io.ObjectStreamException {
                return new x10.serialization.SerializationProxy(this);
            }
            
            public static x10.serialization.X10JavaSerializable $_deserialize_body(PixelBlurPar_v1.$Closure$7 $_obj, x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
                if (x10.runtime.impl.java.Runtime.TRACE_SER) { x10.runtime.impl.java.Runtime.printTraceMessage("X10JavaSerializable: $_deserialize_body() of " + $Closure$7.class + " calling"); } 
                $_obj.p$1276 = $deserializer.readObject();
                $_obj.pixel$1312 = $deserializer.readDouble();
                $_obj.pixelRailsRef = $deserializer.readObject();
                return $_obj;
            }
            
            public static x10.serialization.X10JavaSerializable $_deserializer(x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
                PixelBlurPar_v1.$Closure$7 $_obj = new PixelBlurPar_v1.$Closure$7((java.lang.System[]) null);
                $deserializer.record_reference($_obj);
                return $_deserialize_body($_obj, $deserializer);
            }
            
            public void $_serialize(x10.serialization.X10JavaSerializer $serializer) throws java.io.IOException {
                $serializer.write(this.p$1276);
                $serializer.write(this.pixel$1312);
                $serializer.write(this.pixelRailsRef);
                
            }
            
            // constructor just for allocation
            public $Closure$7(final java.lang.System[] $dummy) {
                
            }
            
            // synthetic type for parameter mangling
            public static final class __0$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2 {}
            
        
            
            public void $apply() {
                
                //#line 49 "PixelBlurPar_v1.x10"
                try {{
                    
                    //#line 50 "PixelBlurPar_v1.x10"
                    final x10.core.Rail t$1319 = (((x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>>)(this.pixelRailsRef))).$apply$G();
                    
                    //#line 50 "PixelBlurPar_v1.x10"
                    final long t$1320 = this.p$1276.id;
                    
                    //#line 50 "PixelBlurPar_v1.x10"
                    final x10.core.Rail t$1321 = ((x10.core.Rail[])t$1319.value)[(int)t$1320];
                    
                    //#line 50 "PixelBlurPar_v1.x10"
                    ((double[])t$1321.value)[(int)0L] = this.pixel$1312;
                    
                    //#line 51 "PixelBlurPar_v1.x10"
                    final x10.io.Printer t$1322 = ((x10.io.Printer)(x10.io.Console.get$OUT()));
                    
                    //#line 51 "PixelBlurPar_v1.x10"
                    final java.lang.String t$1323 = (("PULLED FROM LEFT ") + (this.p$1276));
                    
                    //#line 51 "PixelBlurPar_v1.x10"
                    final java.lang.String t$1324 = ((t$1323) + (": "));
                    
                    //#line 51 "PixelBlurPar_v1.x10"
                    final x10.core.Rail t$1325 = (((x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>>)(this.pixelRailsRef))).$apply$G();
                    
                    //#line 51 "PixelBlurPar_v1.x10"
                    final long t$1326 = this.p$1276.id;
                    
                    //#line 51 "PixelBlurPar_v1.x10"
                    final x10.core.Rail t$1327 = ((x10.core.Rail[])t$1325.value)[(int)t$1326];
                    
                    //#line 51 "PixelBlurPar_v1.x10"
                    final java.lang.String t$1328 = ((t$1324) + (t$1327));
                    
                    //#line 51 "PixelBlurPar_v1.x10"
                    t$1322.println(((java.lang.Object)(t$1328)));
                }}catch (java.lang.Throwable __lowerer__var__2__) {
                    
                    //#line 49 "PixelBlurPar_v1.x10"
                    int __lowerer__var__3__ = (x10.core.Int.$unbox(x10.xrx.Runtime.<x10.core.Int> wrapAtChecked$G(x10.rtt.Types.INT, ((java.lang.Throwable)(__lowerer__var__2__)))));
                }
            }
            
            public x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>> pixelRailsRef;
            public x10.lang.Place p$1276;
            public double pixel$1312;
            
            public $Closure$7(final x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>> pixelRailsRef, final x10.lang.Place p$1276, final double pixel$1312, __0$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2 $dummy) {
                 {
                    this.pixelRailsRef = ((x10.core.GlobalRef)(pixelRailsRef));
                    this.p$1276 = ((x10.lang.Place)(p$1276));
                    this.pixel$1312 = pixel$1312;
                }
            }
            
        }
        
        @x10.runtime.impl.java.X10Generated
        final public static class $Closure$8 extends x10.core.Ref implements x10.core.fun.VoidFun_0_0, x10.serialization.X10JavaSerializable
        {
            public static final x10.rtt.RuntimeType<$Closure$8> $RTT = 
                x10.rtt.StaticVoidFunType.<$Closure$8> make($Closure$8.class,
                                                            new x10.rtt.Type[] {
                                                                x10.core.fun.VoidFun_0_0.$RTT
                                                            });
            
            public x10.rtt.RuntimeType<?> $getRTT() { return $RTT; }
            
            public x10.rtt.Type<?> $getParam(int i) { return null; }
            
            private Object writeReplace() throws java.io.ObjectStreamException {
                return new x10.serialization.SerializationProxy(this);
            }
            
            public static x10.serialization.X10JavaSerializable $_deserialize_body(PixelBlurPar_v1.$Closure$8 $_obj, x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
                if (x10.runtime.impl.java.Runtime.TRACE_SER) { x10.runtime.impl.java.Runtime.printTraceMessage("X10JavaSerializable: $_deserialize_body() of " + $Closure$8.class + " calling"); } 
                $_obj.p$1276 = $deserializer.readObject();
                $_obj.pixelRailsRef = $deserializer.readObject();
                return $_obj;
            }
            
            public static x10.serialization.X10JavaSerializable $_deserializer(x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
                PixelBlurPar_v1.$Closure$8 $_obj = new PixelBlurPar_v1.$Closure$8((java.lang.System[]) null);
                $deserializer.record_reference($_obj);
                return $_deserialize_body($_obj, $deserializer);
            }
            
            public void $_serialize(x10.serialization.X10JavaSerializer $serializer) throws java.io.IOException {
                $serializer.write(this.p$1276);
                $serializer.write(this.pixelRailsRef);
                
            }
            
            // constructor just for allocation
            public $Closure$8(final java.lang.System[] $dummy) {
                
            }
            
            // synthetic type for parameter mangling
            public static final class __1$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2 {}
            
        
            
            public void $apply() {
                
                //#line 46 "PixelBlurPar_v1.x10"
                try {{
                    
                    //#line 47 "PixelBlurPar_v1.x10"
                    final x10.io.Printer t$1309 = ((x10.io.Printer)(x10.io.Console.get$OUT()));
                    
                    //#line 47 "PixelBlurPar_v1.x10"
                    final java.lang.String t$1310 = ((this.p$1276) + (" PULLING FROM LEFT"));
                    
                    //#line 47 "PixelBlurPar_v1.x10"
                    t$1309.println(((java.lang.Object)(t$1310)));
                    
                    //#line 48 "PixelBlurPar_v1.x10"
                    final x10.lang.Place t$1311 = ((x10.lang.Place)((this.pixelRailsRef).home));
                    
                    //#line 48 "PixelBlurPar_v1.x10"
                    final double pixel$1312 = x10.core.Double.$unbox(x10.xrx.Runtime.<x10.core.Double> evalAt__1$1x10$xrx$Runtime$$T$2$G(x10.rtt.Types.DOUBLE, ((x10.lang.Place)(t$1311)), ((x10.core.fun.Fun_0_0)(new PixelBlurPar_v1.$Closure$6(((x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>>)(this.pixelRailsRef)), ((x10.lang.Place)(this.p$1276)), (PixelBlurPar_v1.$Closure$6.__0$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2) null))), ((x10.xrx.Runtime.Profile)(null))));
                    
                    //#line 49 "PixelBlurPar_v1.x10"
                    final x10.lang.Place t$1318 = ((x10.lang.Place)((this.pixelRailsRef).home));
                    {
                        
                        //#line 49 "PixelBlurPar_v1.x10"
                        x10.xrx.Runtime.runAt(((x10.lang.Place)(t$1318)), ((x10.core.fun.VoidFun_0_0)(new PixelBlurPar_v1.$Closure$7(((x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>>)(this.pixelRailsRef)), ((x10.lang.Place)(this.p$1276)), pixel$1312, (PixelBlurPar_v1.$Closure$7.__0$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2) null))), ((x10.xrx.Runtime.Profile)(null)));
                    }
                }}catch (java.lang.Error __lowerer__var__0__) {
                    
                    //#line 46 "PixelBlurPar_v1.x10"
                    throw __lowerer__var__0__;
                }catch (java.lang.Throwable __lowerer__var__1__) {
                    
                    //#line 46 "PixelBlurPar_v1.x10"
                    throw x10.rtt.Types.EXCEPTION.isInstance(__lowerer__var__1__) ? (java.lang.RuntimeException)(__lowerer__var__1__) : new x10.lang.WrappedThrowable(__lowerer__var__1__);
                }
            }
            
            public x10.lang.Place p$1276;
            public x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>> pixelRailsRef;
            
            public $Closure$8(final x10.lang.Place p$1276, final x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>> pixelRailsRef, __1$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2 $dummy) {
                 {
                    this.p$1276 = ((x10.lang.Place)(p$1276));
                    this.pixelRailsRef = ((x10.core.GlobalRef)(pixelRailsRef));
                }
            }
            
        }
        
        @x10.runtime.impl.java.X10Generated
        final public static class $Closure$9 extends x10.core.Ref implements x10.core.fun.VoidFun_0_0, x10.serialization.X10JavaSerializable
        {
            public static final x10.rtt.RuntimeType<$Closure$9> $RTT = 
                x10.rtt.StaticVoidFunType.<$Closure$9> make($Closure$9.class,
                                                            new x10.rtt.Type[] {
                                                                x10.core.fun.VoidFun_0_0.$RTT
                                                            });
            
            public x10.rtt.RuntimeType<?> $getRTT() { return $RTT; }
            
            public x10.rtt.Type<?> $getParam(int i) { return null; }
            
            private Object writeReplace() throws java.io.ObjectStreamException {
                return new x10.serialization.SerializationProxy(this);
            }
            
            public static x10.serialization.X10JavaSerializable $_deserialize_body(PixelBlurPar_v1.$Closure$9 $_obj, x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
                if (x10.runtime.impl.java.Runtime.TRACE_SER) { x10.runtime.impl.java.Runtime.printTraceMessage("X10JavaSerializable: $_deserialize_body() of " + $Closure$9.class + " calling"); } 
                $_obj.p$1276 = $deserializer.readObject();
                $_obj.pixelRailsRef = $deserializer.readObject();
                return $_obj;
            }
            
            public static x10.serialization.X10JavaSerializable $_deserializer(x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
                PixelBlurPar_v1.$Closure$9 $_obj = new PixelBlurPar_v1.$Closure$9((java.lang.System[]) null);
                $deserializer.record_reference($_obj);
                return $_deserialize_body($_obj, $deserializer);
            }
            
            public void $_serialize(x10.serialization.X10JavaSerializer $serializer) throws java.io.IOException {
                $serializer.write(this.p$1276);
                $serializer.write(this.pixelRailsRef);
                
            }
            
            // constructor just for allocation
            public $Closure$9(final java.lang.System[] $dummy) {
                
            }
            
            // synthetic type for parameter mangling
            public static final class __1$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2 {}
            
        
            
            public void $apply() {
                
                //#line 58 "PixelBlurPar_v1.x10"
                try {{
                    
                    //#line 58 "PixelBlurPar_v1.x10"
                    final x10.io.Printer t$1330 = ((x10.io.Printer)(x10.io.Console.get$OUT()));
                    
                    //#line 58 "PixelBlurPar_v1.x10"
                    final java.lang.String t$1331 = (("READY TO COMPUTE ") + (this.p$1276));
                    
                    //#line 58 "PixelBlurPar_v1.x10"
                    final java.lang.String t$1332 = ((t$1331) + (": "));
                    
                    //#line 58 "PixelBlurPar_v1.x10"
                    final x10.core.Rail t$1333 = (((x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>>)(this.pixelRailsRef))).$apply$G();
                    
                    //#line 58 "PixelBlurPar_v1.x10"
                    final long t$1334 = this.p$1276.id;
                    
                    //#line 58 "PixelBlurPar_v1.x10"
                    final x10.core.Rail t$1335 = ((x10.core.Rail[])t$1333.value)[(int)t$1334];
                    
                    //#line 58 "PixelBlurPar_v1.x10"
                    final java.lang.String t$1336 = ((t$1332) + (t$1335));
                    
                    //#line 58 "PixelBlurPar_v1.x10"
                    t$1330.println(((java.lang.Object)(t$1336)));
                }}catch (java.lang.Throwable __lowerer__var__0__) {
                    
                    //#line 58 "PixelBlurPar_v1.x10"
                    int __lowerer__var__1__ = (x10.core.Int.$unbox(x10.xrx.Runtime.<x10.core.Int> wrapAtChecked$G(x10.rtt.Types.INT, ((java.lang.Throwable)(__lowerer__var__0__)))));
                }
            }
            
            public x10.lang.Place p$1276;
            public x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>> pixelRailsRef;
            
            public $Closure$9(final x10.lang.Place p$1276, final x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>> pixelRailsRef, __1$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2 $dummy) {
                 {
                    this.p$1276 = ((x10.lang.Place)(p$1276));
                    this.pixelRailsRef = ((x10.core.GlobalRef)(pixelRailsRef));
                }
            }
            
        }
        
        @x10.runtime.impl.java.X10Generated
        final public static class $Closure$10 extends x10.core.Ref implements x10.core.fun.Fun_0_0, x10.serialization.X10JavaSerializable
        {
            public static final x10.rtt.RuntimeType<$Closure$10> $RTT = 
                x10.rtt.StaticFunType.<$Closure$10> make($Closure$10.class,
                                                         new x10.rtt.Type[] {
                                                             x10.rtt.ParameterizedType.make(x10.core.fun.Fun_0_0.$RTT, x10.rtt.Types.DOUBLE)
                                                         });
            
            public x10.rtt.RuntimeType<?> $getRTT() { return $RTT; }
            
            public x10.rtt.Type<?> $getParam(int i) { return null; }
            
            private Object writeReplace() throws java.io.ObjectStreamException {
                return new x10.serialization.SerializationProxy(this);
            }
            
            public static x10.serialization.X10JavaSerializable $_deserialize_body(PixelBlurPar_v1.$Closure$10 $_obj, x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
                if (x10.runtime.impl.java.Runtime.TRACE_SER) { x10.runtime.impl.java.Runtime.printTraceMessage("X10JavaSerializable: $_deserialize_body() of " + $Closure$10.class + " calling"); } 
                $_obj.p$1276 = $deserializer.readObject();
                $_obj.pixelRailsRef = $deserializer.readObject();
                return $_obj;
            }
            
            public static x10.serialization.X10JavaSerializable $_deserializer(x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
                PixelBlurPar_v1.$Closure$10 $_obj = new PixelBlurPar_v1.$Closure$10((java.lang.System[]) null);
                $deserializer.record_reference($_obj);
                return $_deserialize_body($_obj, $deserializer);
            }
            
            public void $_serialize(x10.serialization.X10JavaSerializer $serializer) throws java.io.IOException {
                $serializer.write(this.p$1276);
                $serializer.write(this.pixelRailsRef);
                
            }
            
            // constructor just for allocation
            public $Closure$10(final java.lang.System[] $dummy) {
                
            }
            
            // bridge for method abstract public ()=>U.operator()():U
            public x10.core.Double $apply$G() {
                return x10.core.Double.$box($apply$O());
            }
            
            // synthetic type for parameter mangling
            public static final class __0$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2 {}
            
        
            
            public double $apply$O() {
                
                //#line 61 "PixelBlurPar_v1.x10"
                try {{
                    
                    //#line 61 "PixelBlurPar_v1.x10"
                    final x10.core.Rail t$1346 = (((x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>>)(this.pixelRailsRef))).$apply$G();
                    
                    //#line 61 "PixelBlurPar_v1.x10"
                    final long t$1347 = this.p$1276.id;
                    
                    //#line 61 "PixelBlurPar_v1.x10"
                    final x10.core.Rail t$1348 = ((x10.core.Rail[])t$1346.value)[(int)t$1347];
                    
                    //#line 61 "PixelBlurPar_v1.x10"
                    final double t$1349 = ((double[])t$1348.value)[(int)0L];
                    
                    //#line 61 "PixelBlurPar_v1.x10"
                    final x10.core.Rail t$1350 = (((x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>>)(this.pixelRailsRef))).$apply$G();
                    
                    //#line 61 "PixelBlurPar_v1.x10"
                    final long t$1351 = this.p$1276.id;
                    
                    //#line 61 "PixelBlurPar_v1.x10"
                    final x10.core.Rail t$1352 = ((x10.core.Rail[])t$1350.value)[(int)t$1351];
                    
                    //#line 61 "PixelBlurPar_v1.x10"
                    final double t$1353 = ((double[])t$1352.value)[(int)1L];
                    
                    //#line 61 "PixelBlurPar_v1.x10"
                    final double t$1354 = ((t$1349) + (((double)(t$1353))));
                    
                    //#line 61 "PixelBlurPar_v1.x10"
                    final double t$1355 = ((double)(long)(((long)(2L))));
                    
                    //#line 61 "PixelBlurPar_v1.x10"
                    final double t$1356 = ((t$1354) / (((double)(t$1355))));
                    
                    //#line 61 "PixelBlurPar_v1.x10"
                    return t$1356;
                }}catch (java.lang.Throwable __lowerer__var__2__) {
                    
                    //#line 61 "PixelBlurPar_v1.x10"
                    double __lowerer__var__3__ = (x10.core.Double.$unbox(x10.xrx.Runtime.<x10.core.Double> wrapAtChecked$G(x10.rtt.Types.DOUBLE, ((java.lang.Throwable)(__lowerer__var__2__)))));
                    
                    //#line 61 "PixelBlurPar_v1.x10"
                    return __lowerer__var__3__;
                }
            }
            
            public x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>> pixelRailsRef;
            public x10.lang.Place p$1276;
            
            public $Closure$10(final x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>> pixelRailsRef, final x10.lang.Place p$1276, __0$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2 $dummy) {
                 {
                    this.pixelRailsRef = ((x10.core.GlobalRef)(pixelRailsRef));
                    this.p$1276 = ((x10.lang.Place)(p$1276));
                }
            }
            
        }
        
        @x10.runtime.impl.java.X10Generated
        final public static class $Closure$11 extends x10.core.Ref implements x10.core.fun.VoidFun_0_0, x10.serialization.X10JavaSerializable
        {
            public static final x10.rtt.RuntimeType<$Closure$11> $RTT = 
                x10.rtt.StaticVoidFunType.<$Closure$11> make($Closure$11.class,
                                                             new x10.rtt.Type[] {
                                                                 x10.core.fun.VoidFun_0_0.$RTT
                                                             });
            
            public x10.rtt.RuntimeType<?> $getRTT() { return $RTT; }
            
            public x10.rtt.Type<?> $getParam(int i) { return null; }
            
            private Object writeReplace() throws java.io.ObjectStreamException {
                return new x10.serialization.SerializationProxy(this);
            }
            
            public static x10.serialization.X10JavaSerializable $_deserialize_body(PixelBlurPar_v1.$Closure$11 $_obj, x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
                if (x10.runtime.impl.java.Runtime.TRACE_SER) { x10.runtime.impl.java.Runtime.printTraceMessage("X10JavaSerializable: $_deserialize_body() of " + $Closure$11.class + " calling"); } 
                $_obj.blurredPixelsRef = $deserializer.readObject();
                $_obj.p$1276 = $deserializer.readObject();
                $_obj.pixelRailsRef = $deserializer.readObject();
                return $_obj;
            }
            
            public static x10.serialization.X10JavaSerializable $_deserializer(x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
                PixelBlurPar_v1.$Closure$11 $_obj = new PixelBlurPar_v1.$Closure$11((java.lang.System[]) null);
                $deserializer.record_reference($_obj);
                return $_deserialize_body($_obj, $deserializer);
            }
            
            public void $_serialize(x10.serialization.X10JavaSerializer $serializer) throws java.io.IOException {
                $serializer.write(this.blurredPixelsRef);
                $serializer.write(this.p$1276);
                $serializer.write(this.pixelRailsRef);
                
            }
            
            // constructor just for allocation
            public $Closure$11(final java.lang.System[] $dummy) {
                
            }
            
            // synthetic type for parameter mangling
            public static final class __0$1x10$lang$Rail$1x10$lang$Double$2$2__2$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2 {}
            
        
            
            public void $apply() {
                
                //#line 60 "PixelBlurPar_v1.x10"
                try {{
                    
                    //#line 60 "PixelBlurPar_v1.x10"
                    final x10.core.Rail t$1342 = (((x10.core.GlobalRef<x10.core.Rail<x10.core.Double>>)(this.blurredPixelsRef))).$apply$G();
                    
                    //#line 60 "PixelBlurPar_v1.x10"
                    final long t$1343 = this.p$1276.id;
                    
                    //#line 61 "PixelBlurPar_v1.x10"
                    final x10.lang.Place t$1344 = ((x10.lang.Place)((this.pixelRailsRef).home));
                    
                    //#line 61 "PixelBlurPar_v1.x10"
                    final double t$1345 = x10.core.Double.$unbox(x10.xrx.Runtime.<x10.core.Double> evalAt__1$1x10$xrx$Runtime$$T$2$G(x10.rtt.Types.DOUBLE, ((x10.lang.Place)(t$1344)), ((x10.core.fun.Fun_0_0)(new PixelBlurPar_v1.$Closure$10(((x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>>)(this.pixelRailsRef)), ((x10.lang.Place)(this.p$1276)), (PixelBlurPar_v1.$Closure$10.__0$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2) null))), ((x10.xrx.Runtime.Profile)(null))));
                    
                    //#line 60 "PixelBlurPar_v1.x10"
                    ((double[])t$1342.value)[(int)t$1343] = t$1345;
                }}catch (java.lang.Throwable __lowerer__var__2__) {
                    
                    //#line 60 "PixelBlurPar_v1.x10"
                    int __lowerer__var__3__ = (x10.core.Int.$unbox(x10.xrx.Runtime.<x10.core.Int> wrapAtChecked$G(x10.rtt.Types.INT, ((java.lang.Throwable)(__lowerer__var__2__)))));
                }
            }
            
            public x10.core.GlobalRef<x10.core.Rail<x10.core.Double>> blurredPixelsRef;
            public x10.lang.Place p$1276;
            public x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>> pixelRailsRef;
            
            public $Closure$11(final x10.core.GlobalRef<x10.core.Rail<x10.core.Double>> blurredPixelsRef, final x10.lang.Place p$1276, final x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>> pixelRailsRef, __0$1x10$lang$Rail$1x10$lang$Double$2$2__2$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2 $dummy) {
                 {
                    this.blurredPixelsRef = ((x10.core.GlobalRef)(blurredPixelsRef));
                    this.p$1276 = ((x10.lang.Place)(p$1276));
                    this.pixelRailsRef = ((x10.core.GlobalRef)(pixelRailsRef));
                }
            }
            
        }
        
        @x10.runtime.impl.java.X10Generated
        final public static class $Closure$12 extends x10.core.Ref implements x10.core.fun.Fun_0_0, x10.serialization.X10JavaSerializable
        {
            public static final x10.rtt.RuntimeType<$Closure$12> $RTT = 
                x10.rtt.StaticFunType.<$Closure$12> make($Closure$12.class,
                                                         new x10.rtt.Type[] {
                                                             x10.rtt.ParameterizedType.make(x10.core.fun.Fun_0_0.$RTT, x10.rtt.Types.DOUBLE)
                                                         });
            
            public x10.rtt.RuntimeType<?> $getRTT() { return $RTT; }
            
            public x10.rtt.Type<?> $getParam(int i) { return null; }
            
            private Object writeReplace() throws java.io.ObjectStreamException {
                return new x10.serialization.SerializationProxy(this);
            }
            
            public static x10.serialization.X10JavaSerializable $_deserialize_body(PixelBlurPar_v1.$Closure$12 $_obj, x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
                if (x10.runtime.impl.java.Runtime.TRACE_SER) { x10.runtime.impl.java.Runtime.printTraceMessage("X10JavaSerializable: $_deserialize_body() of " + $Closure$12.class + " calling"); } 
                $_obj.p$1276 = $deserializer.readObject();
                $_obj.pixelRailsRef = $deserializer.readObject();
                return $_obj;
            }
            
            public static x10.serialization.X10JavaSerializable $_deserializer(x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
                PixelBlurPar_v1.$Closure$12 $_obj = new PixelBlurPar_v1.$Closure$12((java.lang.System[]) null);
                $deserializer.record_reference($_obj);
                return $_deserialize_body($_obj, $deserializer);
            }
            
            public void $_serialize(x10.serialization.X10JavaSerializer $serializer) throws java.io.IOException {
                $serializer.write(this.p$1276);
                $serializer.write(this.pixelRailsRef);
                
            }
            
            // constructor just for allocation
            public $Closure$12(final java.lang.System[] $dummy) {
                
            }
            
            // bridge for method abstract public ()=>U.operator()():U
            public x10.core.Double $apply$G() {
                return x10.core.Double.$box($apply$O());
            }
            
            // synthetic type for parameter mangling
            public static final class __0$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2 {}
            
        
            
            public double $apply$O() {
                
                //#line 63 "PixelBlurPar_v1.x10"
                try {{
                    
                    //#line 63 "PixelBlurPar_v1.x10"
                    final x10.core.Rail t$1364 = (((x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>>)(this.pixelRailsRef))).$apply$G();
                    
                    //#line 63 "PixelBlurPar_v1.x10"
                    final long t$1365 = this.p$1276.id;
                    
                    //#line 63 "PixelBlurPar_v1.x10"
                    final x10.core.Rail t$1366 = ((x10.core.Rail[])t$1364.value)[(int)t$1365];
                    
                    //#line 63 "PixelBlurPar_v1.x10"
                    final double t$1367 = ((double[])t$1366.value)[(int)1L];
                    
                    //#line 63 "PixelBlurPar_v1.x10"
                    final x10.core.Rail t$1368 = (((x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>>)(this.pixelRailsRef))).$apply$G();
                    
                    //#line 63 "PixelBlurPar_v1.x10"
                    final long t$1369 = this.p$1276.id;
                    
                    //#line 63 "PixelBlurPar_v1.x10"
                    final x10.core.Rail t$1370 = ((x10.core.Rail[])t$1368.value)[(int)t$1369];
                    
                    //#line 63 "PixelBlurPar_v1.x10"
                    final double t$1371 = ((double[])t$1370.value)[(int)2L];
                    
                    //#line 63 "PixelBlurPar_v1.x10"
                    final double t$1372 = ((t$1367) + (((double)(t$1371))));
                    
                    //#line 63 "PixelBlurPar_v1.x10"
                    final double t$1373 = ((double)(long)(((long)(2L))));
                    
                    //#line 63 "PixelBlurPar_v1.x10"
                    final double t$1374 = ((t$1372) / (((double)(t$1373))));
                    
                    //#line 63 "PixelBlurPar_v1.x10"
                    return t$1374;
                }}catch (java.lang.Throwable __lowerer__var__2__) {
                    
                    //#line 63 "PixelBlurPar_v1.x10"
                    double __lowerer__var__3__ = (x10.core.Double.$unbox(x10.xrx.Runtime.<x10.core.Double> wrapAtChecked$G(x10.rtt.Types.DOUBLE, ((java.lang.Throwable)(__lowerer__var__2__)))));
                    
                    //#line 63 "PixelBlurPar_v1.x10"
                    return __lowerer__var__3__;
                }
            }
            
            public x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>> pixelRailsRef;
            public x10.lang.Place p$1276;
            
            public $Closure$12(final x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>> pixelRailsRef, final x10.lang.Place p$1276, __0$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2 $dummy) {
                 {
                    this.pixelRailsRef = ((x10.core.GlobalRef)(pixelRailsRef));
                    this.p$1276 = ((x10.lang.Place)(p$1276));
                }
            }
            
        }
        
        @x10.runtime.impl.java.X10Generated
        final public static class $Closure$13 extends x10.core.Ref implements x10.core.fun.VoidFun_0_0, x10.serialization.X10JavaSerializable
        {
            public static final x10.rtt.RuntimeType<$Closure$13> $RTT = 
                x10.rtt.StaticVoidFunType.<$Closure$13> make($Closure$13.class,
                                                             new x10.rtt.Type[] {
                                                                 x10.core.fun.VoidFun_0_0.$RTT
                                                             });
            
            public x10.rtt.RuntimeType<?> $getRTT() { return $RTT; }
            
            public x10.rtt.Type<?> $getParam(int i) { return null; }
            
            private Object writeReplace() throws java.io.ObjectStreamException {
                return new x10.serialization.SerializationProxy(this);
            }
            
            public static x10.serialization.X10JavaSerializable $_deserialize_body(PixelBlurPar_v1.$Closure$13 $_obj, x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
                if (x10.runtime.impl.java.Runtime.TRACE_SER) { x10.runtime.impl.java.Runtime.printTraceMessage("X10JavaSerializable: $_deserialize_body() of " + $Closure$13.class + " calling"); } 
                $_obj.blurredPixelsRef = $deserializer.readObject();
                $_obj.p$1276 = $deserializer.readObject();
                $_obj.pixelRailsRef = $deserializer.readObject();
                return $_obj;
            }
            
            public static x10.serialization.X10JavaSerializable $_deserializer(x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
                PixelBlurPar_v1.$Closure$13 $_obj = new PixelBlurPar_v1.$Closure$13((java.lang.System[]) null);
                $deserializer.record_reference($_obj);
                return $_deserialize_body($_obj, $deserializer);
            }
            
            public void $_serialize(x10.serialization.X10JavaSerializer $serializer) throws java.io.IOException {
                $serializer.write(this.blurredPixelsRef);
                $serializer.write(this.p$1276);
                $serializer.write(this.pixelRailsRef);
                
            }
            
            // constructor just for allocation
            public $Closure$13(final java.lang.System[] $dummy) {
                
            }
            
            // synthetic type for parameter mangling
            public static final class __0$1x10$lang$Rail$1x10$lang$Double$2$2__2$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2 {}
            
        
            
            public void $apply() {
                
                //#line 62 "PixelBlurPar_v1.x10"
                try {{
                    
                    //#line 62 "PixelBlurPar_v1.x10"
                    final x10.core.Rail t$1360 = (((x10.core.GlobalRef<x10.core.Rail<x10.core.Double>>)(this.blurredPixelsRef))).$apply$G();
                    
                    //#line 62 "PixelBlurPar_v1.x10"
                    final long t$1361 = this.p$1276.id;
                    
                    //#line 63 "PixelBlurPar_v1.x10"
                    final x10.lang.Place t$1362 = ((x10.lang.Place)((this.pixelRailsRef).home));
                    
                    //#line 63 "PixelBlurPar_v1.x10"
                    final double t$1363 = x10.core.Double.$unbox(x10.xrx.Runtime.<x10.core.Double> evalAt__1$1x10$xrx$Runtime$$T$2$G(x10.rtt.Types.DOUBLE, ((x10.lang.Place)(t$1362)), ((x10.core.fun.Fun_0_0)(new PixelBlurPar_v1.$Closure$12(((x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>>)(this.pixelRailsRef)), ((x10.lang.Place)(this.p$1276)), (PixelBlurPar_v1.$Closure$12.__0$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2) null))), ((x10.xrx.Runtime.Profile)(null))));
                    
                    //#line 62 "PixelBlurPar_v1.x10"
                    ((double[])t$1360.value)[(int)t$1361] = t$1363;
                }}catch (java.lang.Throwable __lowerer__var__2__) {
                    
                    //#line 62 "PixelBlurPar_v1.x10"
                    int __lowerer__var__3__ = (x10.core.Int.$unbox(x10.xrx.Runtime.<x10.core.Int> wrapAtChecked$G(x10.rtt.Types.INT, ((java.lang.Throwable)(__lowerer__var__2__)))));
                }
            }
            
            public x10.core.GlobalRef<x10.core.Rail<x10.core.Double>> blurredPixelsRef;
            public x10.lang.Place p$1276;
            public x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>> pixelRailsRef;
            
            public $Closure$13(final x10.core.GlobalRef<x10.core.Rail<x10.core.Double>> blurredPixelsRef, final x10.lang.Place p$1276, final x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>> pixelRailsRef, __0$1x10$lang$Rail$1x10$lang$Double$2$2__2$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2 $dummy) {
                 {
                    this.blurredPixelsRef = ((x10.core.GlobalRef)(blurredPixelsRef));
                    this.p$1276 = ((x10.lang.Place)(p$1276));
                    this.pixelRailsRef = ((x10.core.GlobalRef)(pixelRailsRef));
                }
            }
            
        }
        
        @x10.runtime.impl.java.X10Generated
        final public static class $Closure$14 extends x10.core.Ref implements x10.core.fun.Fun_0_0, x10.serialization.X10JavaSerializable
        {
            public static final x10.rtt.RuntimeType<$Closure$14> $RTT = 
                x10.rtt.StaticFunType.<$Closure$14> make($Closure$14.class,
                                                         new x10.rtt.Type[] {
                                                             x10.rtt.ParameterizedType.make(x10.core.fun.Fun_0_0.$RTT, x10.rtt.Types.DOUBLE)
                                                         });
            
            public x10.rtt.RuntimeType<?> $getRTT() { return $RTT; }
            
            public x10.rtt.Type<?> $getParam(int i) { return null; }
            
            private Object writeReplace() throws java.io.ObjectStreamException {
                return new x10.serialization.SerializationProxy(this);
            }
            
            public static x10.serialization.X10JavaSerializable $_deserialize_body(PixelBlurPar_v1.$Closure$14 $_obj, x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
                if (x10.runtime.impl.java.Runtime.TRACE_SER) { x10.runtime.impl.java.Runtime.printTraceMessage("X10JavaSerializable: $_deserialize_body() of " + $Closure$14.class + " calling"); } 
                $_obj.p$1276 = $deserializer.readObject();
                $_obj.pixelRailsRef = $deserializer.readObject();
                return $_obj;
            }
            
            public static x10.serialization.X10JavaSerializable $_deserializer(x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
                PixelBlurPar_v1.$Closure$14 $_obj = new PixelBlurPar_v1.$Closure$14((java.lang.System[]) null);
                $deserializer.record_reference($_obj);
                return $_deserialize_body($_obj, $deserializer);
            }
            
            public void $_serialize(x10.serialization.X10JavaSerializer $serializer) throws java.io.IOException {
                $serializer.write(this.p$1276);
                $serializer.write(this.pixelRailsRef);
                
            }
            
            // constructor just for allocation
            public $Closure$14(final java.lang.System[] $dummy) {
                
            }
            
            // bridge for method abstract public ()=>U.operator()():U
            public x10.core.Double $apply$G() {
                return x10.core.Double.$box($apply$O());
            }
            
            // synthetic type for parameter mangling
            public static final class __0$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2 {}
            
        
            
            public double $apply$O() {
                
                //#line 65 "PixelBlurPar_v1.x10"
                try {{
                    
                    //#line 65 "PixelBlurPar_v1.x10"
                    final x10.core.Rail t$1380 = (((x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>>)(this.pixelRailsRef))).$apply$G();
                    
                    //#line 65 "PixelBlurPar_v1.x10"
                    final long t$1381 = this.p$1276.id;
                    
                    //#line 65 "PixelBlurPar_v1.x10"
                    final x10.core.Rail t$1382 = ((x10.core.Rail[])t$1380.value)[(int)t$1381];
                    
                    //#line 65 "PixelBlurPar_v1.x10"
                    final double t$1383 = ((double[])t$1382.value)[(int)0L];
                    
                    //#line 65 "PixelBlurPar_v1.x10"
                    final x10.core.Rail t$1384 = (((x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>>)(this.pixelRailsRef))).$apply$G();
                    
                    //#line 65 "PixelBlurPar_v1.x10"
                    final long t$1385 = this.p$1276.id;
                    
                    //#line 65 "PixelBlurPar_v1.x10"
                    final x10.core.Rail t$1386 = ((x10.core.Rail[])t$1384.value)[(int)t$1385];
                    
                    //#line 65 "PixelBlurPar_v1.x10"
                    final double t$1387 = ((double[])t$1386.value)[(int)1L];
                    
                    //#line 65 "PixelBlurPar_v1.x10"
                    final double t$1388 = ((t$1383) + (((double)(t$1387))));
                    
                    //#line 65 "PixelBlurPar_v1.x10"
                    final x10.core.Rail t$1389 = (((x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>>)(this.pixelRailsRef))).$apply$G();
                    
                    //#line 65 "PixelBlurPar_v1.x10"
                    final long t$1390 = this.p$1276.id;
                    
                    //#line 65 "PixelBlurPar_v1.x10"
                    final x10.core.Rail t$1391 = ((x10.core.Rail[])t$1389.value)[(int)t$1390];
                    
                    //#line 65 "PixelBlurPar_v1.x10"
                    final double t$1392 = ((double[])t$1391.value)[(int)2L];
                    
                    //#line 65 "PixelBlurPar_v1.x10"
                    final double t$1393 = ((t$1388) + (((double)(t$1392))));
                    
                    //#line 65 "PixelBlurPar_v1.x10"
                    final double t$1394 = ((double)(long)(((long)(3L))));
                    
                    //#line 65 "PixelBlurPar_v1.x10"
                    final double t$1395 = ((t$1393) / (((double)(t$1394))));
                    
                    //#line 65 "PixelBlurPar_v1.x10"
                    return t$1395;
                }}catch (java.lang.Throwable __lowerer__var__2__) {
                    
                    //#line 65 "PixelBlurPar_v1.x10"
                    double __lowerer__var__3__ = (x10.core.Double.$unbox(x10.xrx.Runtime.<x10.core.Double> wrapAtChecked$G(x10.rtt.Types.DOUBLE, ((java.lang.Throwable)(__lowerer__var__2__)))));
                    
                    //#line 65 "PixelBlurPar_v1.x10"
                    return __lowerer__var__3__;
                }
            }
            
            public x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>> pixelRailsRef;
            public x10.lang.Place p$1276;
            
            public $Closure$14(final x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>> pixelRailsRef, final x10.lang.Place p$1276, __0$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2 $dummy) {
                 {
                    this.pixelRailsRef = ((x10.core.GlobalRef)(pixelRailsRef));
                    this.p$1276 = ((x10.lang.Place)(p$1276));
                }
            }
            
        }
        
        @x10.runtime.impl.java.X10Generated
        final public static class $Closure$15 extends x10.core.Ref implements x10.core.fun.VoidFun_0_0, x10.serialization.X10JavaSerializable
        {
            public static final x10.rtt.RuntimeType<$Closure$15> $RTT = 
                x10.rtt.StaticVoidFunType.<$Closure$15> make($Closure$15.class,
                                                             new x10.rtt.Type[] {
                                                                 x10.core.fun.VoidFun_0_0.$RTT
                                                             });
            
            public x10.rtt.RuntimeType<?> $getRTT() { return $RTT; }
            
            public x10.rtt.Type<?> $getParam(int i) { return null; }
            
            private Object writeReplace() throws java.io.ObjectStreamException {
                return new x10.serialization.SerializationProxy(this);
            }
            
            public static x10.serialization.X10JavaSerializable $_deserialize_body(PixelBlurPar_v1.$Closure$15 $_obj, x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
                if (x10.runtime.impl.java.Runtime.TRACE_SER) { x10.runtime.impl.java.Runtime.printTraceMessage("X10JavaSerializable: $_deserialize_body() of " + $Closure$15.class + " calling"); } 
                $_obj.blurredPixelsRef = $deserializer.readObject();
                $_obj.p$1276 = $deserializer.readObject();
                $_obj.pixelRailsRef = $deserializer.readObject();
                return $_obj;
            }
            
            public static x10.serialization.X10JavaSerializable $_deserializer(x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
                PixelBlurPar_v1.$Closure$15 $_obj = new PixelBlurPar_v1.$Closure$15((java.lang.System[]) null);
                $deserializer.record_reference($_obj);
                return $_deserialize_body($_obj, $deserializer);
            }
            
            public void $_serialize(x10.serialization.X10JavaSerializer $serializer) throws java.io.IOException {
                $serializer.write(this.blurredPixelsRef);
                $serializer.write(this.p$1276);
                $serializer.write(this.pixelRailsRef);
                
            }
            
            // constructor just for allocation
            public $Closure$15(final java.lang.System[] $dummy) {
                
            }
            
            // synthetic type for parameter mangling
            public static final class __0$1x10$lang$Rail$1x10$lang$Double$2$2__2$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2 {}
            
        
            
            public void $apply() {
                
                //#line 64 "PixelBlurPar_v1.x10"
                try {{
                    
                    //#line 64 "PixelBlurPar_v1.x10"
                    final x10.core.Rail t$1376 = (((x10.core.GlobalRef<x10.core.Rail<x10.core.Double>>)(this.blurredPixelsRef))).$apply$G();
                    
                    //#line 64 "PixelBlurPar_v1.x10"
                    final long t$1377 = this.p$1276.id;
                    
                    //#line 65 "PixelBlurPar_v1.x10"
                    final x10.lang.Place t$1378 = ((x10.lang.Place)((this.pixelRailsRef).home));
                    
                    //#line 65 "PixelBlurPar_v1.x10"
                    final double t$1379 = x10.core.Double.$unbox(x10.xrx.Runtime.<x10.core.Double> evalAt__1$1x10$xrx$Runtime$$T$2$G(x10.rtt.Types.DOUBLE, ((x10.lang.Place)(t$1378)), ((x10.core.fun.Fun_0_0)(new PixelBlurPar_v1.$Closure$14(((x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>>)(this.pixelRailsRef)), ((x10.lang.Place)(this.p$1276)), (PixelBlurPar_v1.$Closure$14.__0$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2) null))), ((x10.xrx.Runtime.Profile)(null))));
                    
                    //#line 64 "PixelBlurPar_v1.x10"
                    ((double[])t$1376.value)[(int)t$1377] = t$1379;
                }}catch (java.lang.Throwable __lowerer__var__2__) {
                    
                    //#line 64 "PixelBlurPar_v1.x10"
                    int __lowerer__var__3__ = (x10.core.Int.$unbox(x10.xrx.Runtime.<x10.core.Int> wrapAtChecked$G(x10.rtt.Types.INT, ((java.lang.Throwable)(__lowerer__var__2__)))));
                }
            }
            
            public x10.core.GlobalRef<x10.core.Rail<x10.core.Double>> blurredPixelsRef;
            public x10.lang.Place p$1276;
            public x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>> pixelRailsRef;
            
            public $Closure$15(final x10.core.GlobalRef<x10.core.Rail<x10.core.Double>> blurredPixelsRef, final x10.lang.Place p$1276, final x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>> pixelRailsRef, __0$1x10$lang$Rail$1x10$lang$Double$2$2__2$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2 $dummy) {
                 {
                    this.blurredPixelsRef = ((x10.core.GlobalRef)(blurredPixelsRef));
                    this.p$1276 = ((x10.lang.Place)(p$1276));
                    this.pixelRailsRef = ((x10.core.GlobalRef)(pixelRailsRef));
                }
            }
            
        }
        
        @x10.runtime.impl.java.X10Generated
        final public static class $Closure$16 extends x10.core.Ref implements x10.core.fun.VoidFun_0_0, x10.serialization.X10JavaSerializable
        {
            public static final x10.rtt.RuntimeType<$Closure$16> $RTT = 
                x10.rtt.StaticVoidFunType.<$Closure$16> make($Closure$16.class,
                                                             new x10.rtt.Type[] {
                                                                 x10.core.fun.VoidFun_0_0.$RTT
                                                             });
            
            public x10.rtt.RuntimeType<?> $getRTT() { return $RTT; }
            
            public x10.rtt.Type<?> $getParam(int i) { return null; }
            
            private Object writeReplace() throws java.io.ObjectStreamException {
                return new x10.serialization.SerializationProxy(this);
            }
            
            public static x10.serialization.X10JavaSerializable $_deserialize_body(PixelBlurPar_v1.$Closure$16 $_obj, x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
                if (x10.runtime.impl.java.Runtime.TRACE_SER) { x10.runtime.impl.java.Runtime.printTraceMessage("X10JavaSerializable: $_deserialize_body() of " + $Closure$16.class + " calling"); } 
                $_obj.blurredPixelsRef = $deserializer.readObject();
                $_obj.p$1276 = $deserializer.readObject();
                $_obj.pixelRailsRef = $deserializer.readObject();
                $_obj.pixels = $deserializer.readObject();
                return $_obj;
            }
            
            public static x10.serialization.X10JavaSerializable $_deserializer(x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
                PixelBlurPar_v1.$Closure$16 $_obj = new PixelBlurPar_v1.$Closure$16((java.lang.System[]) null);
                $deserializer.record_reference($_obj);
                return $_deserialize_body($_obj, $deserializer);
            }
            
            public void $_serialize(x10.serialization.X10JavaSerializer $serializer) throws java.io.IOException {
                $serializer.write(this.blurredPixelsRef);
                $serializer.write(this.p$1276);
                $serializer.write(this.pixelRailsRef);
                $serializer.write(this.pixels);
                
            }
            
            // constructor just for allocation
            public $Closure$16(final java.lang.System[] $dummy) {
                
            }
            
            // synthetic type for parameter mangling
            public static final class __1$1x10$lang$Double$2__2$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2__3$1x10$lang$Rail$1x10$lang$Double$2$2 {}
            
        
            
            public void $apply() {
                
                //#line 31 "PixelBlurPar_v1.x10"
                try {{
                    {
                        
                        //#line 33 "PixelBlurPar_v1.x10"
                        x10.xrx.Runtime.ensureNotInAtomic();
                        
                        //#line 33 "PixelBlurPar_v1.x10"
                        final x10.xrx.FinishState fs$1436 = x10.xrx.Runtime.startFinish();
                        
                        //#line 33 "PixelBlurPar_v1.x10"
                        try {{
                            {
                                
                                //#line 35 "PixelBlurPar_v1.x10"
                                final long t$1277 = this.p$1276.id;
                                
                                //#line 35 "PixelBlurPar_v1.x10"
                                final long t$1278 = ((x10.core.Rail<x10.core.Double>)this.pixels).size;
                                
                                //#line 35 "PixelBlurPar_v1.x10"
                                final long t$1279 = ((t$1278) - (((long)(1L))));
                                
                                //#line 35 "PixelBlurPar_v1.x10"
                                final boolean t$1280 = ((t$1277) < (((long)(t$1279))));
                                
                                //#line 35 "PixelBlurPar_v1.x10"
                                if (t$1280) {
                                    
                                    //#line 36 "PixelBlurPar_v1.x10"
                                    final long t$1281 = this.p$1276.id;
                                    
                                    //#line 36 "PixelBlurPar_v1.x10"
                                    final long t$1282 = ((t$1281) + (((long)(1L))));
                                    
                                    //#line 36 "PixelBlurPar_v1.x10"
                                    final x10.lang.Place t$1283 = ((x10.lang.Place)(new x10.lang.Place((java.lang.System[]) null).x10$lang$Place$$init$S(t$1282)));
                                    
                                    //#line 36 "PixelBlurPar_v1.x10"
                                    x10.xrx.Runtime.runAsync(((x10.lang.Place)(t$1283)), ((x10.core.fun.VoidFun_0_0)(new PixelBlurPar_v1.$Closure$5(((x10.lang.Place)(this.p$1276)), ((x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>>)(this.pixelRailsRef)), (PixelBlurPar_v1.$Closure$5.__1$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2) null))), ((x10.xrx.Runtime.Profile)(null)));
                                }
                                
                                //#line 45 "PixelBlurPar_v1.x10"
                                final long t$1304 = this.p$1276.id;
                                
                                //#line 45 "PixelBlurPar_v1.x10"
                                final boolean t$1305 = ((t$1304) > (((long)(0L))));
                                
                                //#line 45 "PixelBlurPar_v1.x10"
                                if (t$1305) {
                                    
                                    //#line 46 "PixelBlurPar_v1.x10"
                                    final long t$1306 = this.p$1276.id;
                                    
                                    //#line 46 "PixelBlurPar_v1.x10"
                                    final long t$1307 = ((t$1306) - (((long)(1L))));
                                    
                                    //#line 46 "PixelBlurPar_v1.x10"
                                    final x10.lang.Place t$1308 = ((x10.lang.Place)(new x10.lang.Place((java.lang.System[]) null).x10$lang$Place$$init$S(t$1307)));
                                    
                                    //#line 46 "PixelBlurPar_v1.x10"
                                    x10.xrx.Runtime.runAsync(((x10.lang.Place)(t$1308)), ((x10.core.fun.VoidFun_0_0)(new PixelBlurPar_v1.$Closure$8(((x10.lang.Place)(this.p$1276)), ((x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>>)(this.pixelRailsRef)), (PixelBlurPar_v1.$Closure$8.__1$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2) null))), ((x10.xrx.Runtime.Profile)(null)));
                                }
                            }
                        }}catch (java.lang.Throwable ct$1434) {
                            
                            //#line 33 "PixelBlurPar_v1.x10"
                            x10.xrx.Runtime.pushException(((java.lang.Throwable)(ct$1434)));
                            
                            //#line 33 "PixelBlurPar_v1.x10"
                            throw new java.lang.RuntimeException();
                        }finally {{
                             
                             //#line 33 "PixelBlurPar_v1.x10"
                             x10.xrx.Runtime.stopFinish(((x10.xrx.FinishState)(fs$1436)));
                         }}
                        }
                    
                    //#line 58 "PixelBlurPar_v1.x10"
                    final x10.lang.Place t$1329 = ((x10.lang.Place)((this.pixelRailsRef).home));
                    {
                        
                        //#line 58 "PixelBlurPar_v1.x10"
                        x10.xrx.Runtime.runAt(((x10.lang.Place)(t$1329)), ((x10.core.fun.VoidFun_0_0)(new PixelBlurPar_v1.$Closure$9(((x10.lang.Place)(this.p$1276)), ((x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>>)(this.pixelRailsRef)), (PixelBlurPar_v1.$Closure$9.__1$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2) null))), ((x10.xrx.Runtime.Profile)(null)));
                    }
                    
                    //#line 60 "PixelBlurPar_v1.x10"
                    final long t$1337 = this.p$1276.id;
                    
                    //#line 60 "PixelBlurPar_v1.x10"
                    final long t$1338 = ((x10.core.Rail<x10.core.Double>)this.pixels).size;
                    
                    //#line 60 "PixelBlurPar_v1.x10"
                    final long t$1339 = ((t$1338) - (((long)(1L))));
                    
                    //#line 60 "PixelBlurPar_v1.x10"
                    final boolean t$1340 = ((long) t$1337) == ((long) t$1339);
                    
                    //#line 60 "PixelBlurPar_v1.x10"
                    if (t$1340) {
                        
                        //#line 60 "PixelBlurPar_v1.x10"
                        final x10.lang.Place t$1341 = ((x10.lang.Place)((this.blurredPixelsRef).home));
                        {
                            
                            //#line 60 "PixelBlurPar_v1.x10"
                            x10.xrx.Runtime.runAt(((x10.lang.Place)(t$1341)), ((x10.core.fun.VoidFun_0_0)(new PixelBlurPar_v1.$Closure$11(((x10.core.GlobalRef<x10.core.Rail<x10.core.Double>>)(this.blurredPixelsRef)), ((x10.lang.Place)(this.p$1276)), ((x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>>)(this.pixelRailsRef)), (PixelBlurPar_v1.$Closure$11.__0$1x10$lang$Rail$1x10$lang$Double$2$2__2$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2) null))), ((x10.xrx.Runtime.Profile)(null)));
                        }
                    } else {
                        
                        //#line 62 "PixelBlurPar_v1.x10"
                        final long t$1357 = this.p$1276.id;
                        
                        //#line 62 "PixelBlurPar_v1.x10"
                        final boolean t$1358 = ((long) t$1357) == ((long) 0L);
                        
                        //#line 62 "PixelBlurPar_v1.x10"
                        if (t$1358) {
                            
                            //#line 62 "PixelBlurPar_v1.x10"
                            final x10.lang.Place t$1359 = ((x10.lang.Place)((this.blurredPixelsRef).home));
                            {
                                
                                //#line 62 "PixelBlurPar_v1.x10"
                                x10.xrx.Runtime.runAt(((x10.lang.Place)(t$1359)), ((x10.core.fun.VoidFun_0_0)(new PixelBlurPar_v1.$Closure$13(((x10.core.GlobalRef<x10.core.Rail<x10.core.Double>>)(this.blurredPixelsRef)), ((x10.lang.Place)(this.p$1276)), ((x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>>)(this.pixelRailsRef)), (PixelBlurPar_v1.$Closure$13.__0$1x10$lang$Rail$1x10$lang$Double$2$2__2$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2) null))), ((x10.xrx.Runtime.Profile)(null)));
                            }
                        } else {
                            
                            //#line 64 "PixelBlurPar_v1.x10"
                            final x10.lang.Place t$1375 = ((x10.lang.Place)((this.blurredPixelsRef).home));
                            {
                                
                                //#line 64 "PixelBlurPar_v1.x10"
                                x10.xrx.Runtime.runAt(((x10.lang.Place)(t$1375)), ((x10.core.fun.VoidFun_0_0)(new PixelBlurPar_v1.$Closure$15(((x10.core.GlobalRef<x10.core.Rail<x10.core.Double>>)(this.blurredPixelsRef)), ((x10.lang.Place)(this.p$1276)), ((x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>>)(this.pixelRailsRef)), (PixelBlurPar_v1.$Closure$15.__0$1x10$lang$Rail$1x10$lang$Double$2$2__2$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2) null))), ((x10.xrx.Runtime.Profile)(null)));
                            }
                        }
                    }
                    }}catch (java.lang.Error __lowerer__var__0__) {
                        
                        //#line 31 "PixelBlurPar_v1.x10"
                        throw __lowerer__var__0__;
                    }catch (java.lang.Throwable __lowerer__var__1__) {
                        
                        //#line 31 "PixelBlurPar_v1.x10"
                        throw x10.rtt.Types.EXCEPTION.isInstance(__lowerer__var__1__) ? (java.lang.RuntimeException)(__lowerer__var__1__) : new x10.lang.WrappedThrowable(__lowerer__var__1__);
                    }
                }
            
            public x10.lang.Place p$1276;
            public x10.core.Rail<x10.core.Double> pixels;
            public x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>> pixelRailsRef;
            public x10.core.GlobalRef<x10.core.Rail<x10.core.Double>> blurredPixelsRef;
            
            public $Closure$16(final x10.lang.Place p$1276, final x10.core.Rail<x10.core.Double> pixels, final x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>> pixelRailsRef, final x10.core.GlobalRef<x10.core.Rail<x10.core.Double>> blurredPixelsRef, __1$1x10$lang$Double$2__2$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2__3$1x10$lang$Rail$1x10$lang$Double$2$2 $dummy) {
                 {
                    this.p$1276 = ((x10.lang.Place)(p$1276));
                    this.pixels = ((x10.core.Rail)(pixels));
                    this.pixelRailsRef = ((x10.core.GlobalRef)(pixelRailsRef));
                    this.blurredPixelsRef = ((x10.core.GlobalRef)(blurredPixelsRef));
                }
            }
            
            }
            
        @x10.runtime.impl.java.X10Generated
        final public static class $Closure$17 extends x10.core.Ref implements x10.core.fun.VoidFun_0_0, x10.serialization.X10JavaSerializable
        {
            public static final x10.rtt.RuntimeType<$Closure$17> $RTT = 
                x10.rtt.StaticVoidFunType.<$Closure$17> make($Closure$17.class,
                                                             new x10.rtt.Type[] {
                                                                 x10.core.fun.VoidFun_0_0.$RTT
                                                             });
            
            public x10.rtt.RuntimeType<?> $getRTT() { return $RTT; }
            
            public x10.rtt.Type<?> $getParam(int i) { return null; }
            
            private Object writeReplace() throws java.io.ObjectStreamException {
                return new x10.serialization.SerializationProxy(this);
            }
            
            public static x10.serialization.X10JavaSerializable $_deserialize_body(PixelBlurPar_v1.$Closure$17 $_obj, x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
                if (x10.runtime.impl.java.Runtime.TRACE_SER) { x10.runtime.impl.java.Runtime.printTraceMessage("X10JavaSerializable: $_deserialize_body() of " + $Closure$17.class + " calling"); } 
                $_obj.pixelRailsRef = $deserializer.readObject();
                return $_obj;
            }
            
            public static x10.serialization.X10JavaSerializable $_deserializer(x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
                PixelBlurPar_v1.$Closure$17 $_obj = new PixelBlurPar_v1.$Closure$17((java.lang.System[]) null);
                $deserializer.record_reference($_obj);
                return $_deserialize_body($_obj, $deserializer);
            }
            
            public void $_serialize(x10.serialization.X10JavaSerializer $serializer) throws java.io.IOException {
                $serializer.write(this.pixelRailsRef);
                
            }
            
            // constructor just for allocation
            public $Closure$17(final java.lang.System[] $dummy) {
                
            }
            
            // synthetic type for parameter mangling
            public static final class __0$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2 {}
            
        
            
            public void $apply() {
                
                //#line 72 "PixelBlurPar_v1.x10"
                try {{
                    
                    //#line 72 "PixelBlurPar_v1.x10"
                    final x10.io.Printer t$1247 = ((x10.io.Printer)(x10.io.Console.get$OUT()));
                    
                    //#line 72 "PixelBlurPar_v1.x10"
                    final x10.core.Rail t$1246 = (((x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>>)(this.pixelRailsRef))).$apply$G();
                    
                    //#line 72 "PixelBlurPar_v1.x10"
                    final java.lang.String t$1248 = ((x10.core.Rail<x10.core.Rail<x10.core.Double>>)t$1246).toString();
                    
                    //#line 72 "PixelBlurPar_v1.x10"
                    t$1247.println(((java.lang.Object)(t$1248)));
                }}catch (java.lang.Throwable __lowerer__var__0__) {
                    
                    //#line 72 "PixelBlurPar_v1.x10"
                    int __lowerer__var__1__ = (x10.core.Int.$unbox(x10.xrx.Runtime.<x10.core.Int> wrapAtChecked$G(x10.rtt.Types.INT, ((java.lang.Throwable)(__lowerer__var__0__)))));
                }
            }
            
            public x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>> pixelRailsRef;
            
            public $Closure$17(final x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>> pixelRailsRef, __0$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2 $dummy) {
                 {
                    this.pixelRailsRef = ((x10.core.GlobalRef)(pixelRailsRef));
                }
            }
            
        }
        
        }
        
        