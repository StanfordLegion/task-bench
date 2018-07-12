
@x10.runtime.impl.java.X10Generated
public class PixelBlurPar_v2 extends x10.core.Ref implements x10.serialization.X10JavaSerializable
{
    public static final x10.rtt.RuntimeType<PixelBlurPar_v2> $RTT = 
        x10.rtt.NamedType.<PixelBlurPar_v2> make("PixelBlurPar_v2",
                                                 PixelBlurPar_v2.class);
    
    public x10.rtt.RuntimeType<?> $getRTT() { return $RTT; }
    
    public x10.rtt.Type<?> $getParam(int i) { return null; }
    
    private Object writeReplace() throws java.io.ObjectStreamException {
        return new x10.serialization.SerializationProxy(this);
    }
    
    public static x10.serialization.X10JavaSerializable $_deserialize_body(PixelBlurPar_v2 $_obj, x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
        if (x10.runtime.impl.java.Runtime.TRACE_SER) { x10.runtime.impl.java.Runtime.printTraceMessage("X10JavaSerializable: $_deserialize_body() of " + PixelBlurPar_v2.class + " calling"); } 
        $_obj.pixelplh = $deserializer.readObject();
        return $_obj;
    }
    
    public static x10.serialization.X10JavaSerializable $_deserializer(x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
        PixelBlurPar_v2 $_obj = new PixelBlurPar_v2((java.lang.System[]) null);
        $deserializer.record_reference($_obj);
        return $_deserialize_body($_obj, $deserializer);
    }
    
    public void $_serialize(x10.serialization.X10JavaSerializer $serializer) throws java.io.IOException {
        $serializer.write(this.pixelplh);
        
    }
    
    // constructor just for allocation
    public PixelBlurPar_v2(final java.lang.System[] $dummy) {
        
    }
    
    // synthetic type for parameter mangling
    public static final class __0$1x10$lang$Double$2__1$1x10$lang$Rail$1x10$lang$Long$2$2__2$1x10$lang$Rail$1x10$lang$Long$2$2 {}
    

    
    //#line 7 "PixelBlurPar_v2.x10"
    @x10.runtime.impl.java.X10Generated
    public static class Pixel extends x10.core.Ref implements x10.serialization.X10JavaSerializable
    {
        public static final x10.rtt.RuntimeType<Pixel> $RTT = 
            x10.rtt.NamedType.<Pixel> make("PixelBlurPar_v2.Pixel",
                                           Pixel.class);
        
        public x10.rtt.RuntimeType<?> $getRTT() { return $RTT; }
        
        public x10.rtt.Type<?> $getParam(int i) { return null; }
        
        private Object writeReplace() throws java.io.ObjectStreamException {
            return new x10.serialization.SerializationProxy(this);
        }
        
        public static x10.serialization.X10JavaSerializable $_deserialize_body(PixelBlurPar_v2.Pixel $_obj, x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
            if (x10.runtime.impl.java.Runtime.TRACE_SER) { x10.runtime.impl.java.Runtime.printTraceMessage("X10JavaSerializable: $_deserialize_body() of " + Pixel.class + " calling"); } 
            $_obj.myPixel = $deserializer.readDouble();
            $_obj.neighborsRecv = $deserializer.readObject();
            $_obj.neighborsSend = $deserializer.readObject();
            $_obj.recv = $deserializer.readObject();
            $_obj.remoteSend = $deserializer.readObject();
            $_obj.send = $deserializer.readObject();
            return $_obj;
        }
        
        public static x10.serialization.X10JavaSerializable $_deserializer(x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
            PixelBlurPar_v2.Pixel $_obj = new PixelBlurPar_v2.Pixel((java.lang.System[]) null);
            $deserializer.record_reference($_obj);
            return $_deserialize_body($_obj, $deserializer);
        }
        
        public void $_serialize(x10.serialization.X10JavaSerializer $serializer) throws java.io.IOException {
            $serializer.write(this.myPixel);
            $serializer.write(this.neighborsRecv);
            $serializer.write(this.neighborsSend);
            $serializer.write(this.recv);
            $serializer.write(this.remoteSend);
            $serializer.write(this.send);
            
        }
        
        // constructor just for allocation
        public Pixel(final java.lang.System[] $dummy) {
            
        }
        
        // synthetic type for parameter mangling
        public static final class __1$1x10$lang$Long$2__2$1x10$lang$Long$2 {}
        
    
        
        //#line 9 "PixelBlurPar_v2.x10"
        public double myPixel;
        
        //#line 12 "PixelBlurPar_v2.x10"
        public x10.core.Rail<x10.core.Rail<x10.core.Double>> send;
        
        //#line 15 "PixelBlurPar_v2.x10"
        public x10.core.Rail<x10.core.Rail<x10.core.Double>> recv;
        
        //#line 18 "PixelBlurPar_v2.x10"
        public x10.core.Rail<x10.lang.GlobalRail<x10.core.Double>> remoteSend;
        
        //#line 21 "PixelBlurPar_v2.x10"
        public x10.core.Rail<x10.core.Long> neighborsSend;
        
        //#line 24 "PixelBlurPar_v2.x10"
        public x10.core.Rail<x10.core.Long> neighborsRecv;
        
        
        //#line 30 "PixelBlurPar_v2.x10"
        /** return index for sender neighbor in this send rail */
        public long getSenderIndex$O(final long recvId) {
            
            //#line 31 "PixelBlurPar_v2.x10"
            final long i$727min$975 = 0L;
            
            //#line 31 "PixelBlurPar_v2.x10"
            final x10.core.Rail t$976 = ((x10.core.Rail)(this.neighborsSend));
            
            //#line 31 "PixelBlurPar_v2.x10"
            final long t$977 = ((x10.core.Rail<x10.core.Long>)t$976).size;
            
            //#line 31 "PixelBlurPar_v2.x10"
            final long i$727max$978 = ((t$977) - (((long)(1L))));
            
            //#line 31 "PixelBlurPar_v2.x10"
            long i$972 = i$727min$975;
            
            //#line 31 "PixelBlurPar_v2.x10"
            for (;
                 true;
                 ) {
                
                //#line 31 "PixelBlurPar_v2.x10"
                final long t$973 = i$972;
                
                //#line 31 "PixelBlurPar_v2.x10"
                final boolean t$974 = ((t$973) <= (((long)(i$727max$978))));
                
                //#line 31 "PixelBlurPar_v2.x10"
                if (!(t$974)) {
                    
                    //#line 31 "PixelBlurPar_v2.x10"
                    break;
                }
                
                //#line 31 "PixelBlurPar_v2.x10"
                final long i$969 = i$972;
                
                //#line 32 "PixelBlurPar_v2.x10"
                final x10.core.Rail t$966 = ((x10.core.Rail)(this.neighborsSend));
                
                //#line 32 "PixelBlurPar_v2.x10"
                final long t$967 = ((long[])t$966.value)[(int)i$969];
                
                //#line 32 "PixelBlurPar_v2.x10"
                final boolean t$968 = ((long) recvId) == ((long) t$967);
                
                //#line 32 "PixelBlurPar_v2.x10"
                if (t$968) {
                    
                    //#line 33 "PixelBlurPar_v2.x10"
                    return i$969;
                }
                
                //#line 31 "PixelBlurPar_v2.x10"
                final long t$970 = i$972;
                
                //#line 31 "PixelBlurPar_v2.x10"
                final long t$971 = ((t$970) + (((long)(1L))));
                
                //#line 31 "PixelBlurPar_v2.x10"
                i$972 = t$971;
            }
            
            //#line 36 "PixelBlurPar_v2.x10"
            final x10.io.Printer t$856 = ((x10.io.Printer)(x10.io.Console.get$OUT()));
            
            //#line 36 "PixelBlurPar_v2.x10"
            final java.lang.String t$853 = (("Could not find sender ") + ((x10.core.Long.$box(recvId))));
            
            //#line 36 "PixelBlurPar_v2.x10"
            final java.lang.String t$854 = ((t$853) + (" in neighborsSend of "));
            
            //#line 36 "PixelBlurPar_v2.x10"
            final long t$855 = x10.x10rt.X10RT.here().id;
            
            //#line 36 "PixelBlurPar_v2.x10"
            final java.lang.String t$857 = ((t$854) + ((x10.core.Long.$box(t$855))));
            
            //#line 36 "PixelBlurPar_v2.x10"
            t$856.println(((java.lang.Object)(t$857)));
            
            //#line 37 "PixelBlurPar_v2.x10"
            return -1L;
        }
        
        
        //#line 40 "PixelBlurPar_v2.x10"
        // creation method for java code (1-phase java constructor)
        public Pixel(final double myPixel, final x10.core.Rail<x10.core.Long> neighborsSend, final x10.core.Rail<x10.core.Long> neighborsRecv, __1$1x10$lang$Long$2__2$1x10$lang$Long$2 $dummy) {
            this((java.lang.System[]) null);
            PixelBlurPar_v2$Pixel$$init$S(myPixel, neighborsSend, neighborsRecv, (PixelBlurPar_v2.Pixel.__1$1x10$lang$Long$2__2$1x10$lang$Long$2) null);
        }
        
        // constructor for non-virtual call
        final public PixelBlurPar_v2.Pixel PixelBlurPar_v2$Pixel$$init$S(final double myPixel, final x10.core.Rail<x10.core.Long> neighborsSend, final x10.core.Rail<x10.core.Long> neighborsRecv, __1$1x10$lang$Long$2__2$1x10$lang$Long$2 $dummy) {
             {
                
                //#line 40 "PixelBlurPar_v2.x10"
                
                
                //#line 7 "PixelBlurPar_v2.x10"
                this.__fieldInitializers_PixelBlurPar_v2_Pixel();
                
                //#line 42 "PixelBlurPar_v2.x10"
                this.myPixel = myPixel;
                
                //#line 43 "PixelBlurPar_v2.x10"
                this.neighborsSend = ((x10.core.Rail)(neighborsSend));
                
                //#line 44 "PixelBlurPar_v2.x10"
                this.neighborsRecv = ((x10.core.Rail)(neighborsRecv));
                
                //#line 47 "PixelBlurPar_v2.x10"
                final long t$859 = ((x10.core.Rail<x10.core.Long>)neighborsSend).size;
                
                //#line 47 "PixelBlurPar_v2.x10"
                final x10.core.fun.Fun_0_1 t$860 = ((x10.core.fun.Fun_0_1)(new PixelBlurPar_v2.Pixel.$Closure$0()));
                
                //#line 47 "PixelBlurPar_v2.x10"
                final x10.core.Rail t$861 = ((x10.core.Rail)(new x10.core.Rail<x10.core.Rail<x10.core.Double>>(x10.rtt.ParameterizedType.make(x10.core.Rail.$RTT, x10.rtt.Types.DOUBLE), ((long)(t$859)), ((x10.core.fun.Fun_0_1)(t$860)), (x10.core.Rail.__1$1x10$lang$Long$3x10$lang$Rail$$T$2) null)));
                
                //#line 47 "PixelBlurPar_v2.x10"
                this.send = ((x10.core.Rail)(t$861));
                
                //#line 48 "PixelBlurPar_v2.x10"
                final long t$863 = ((x10.core.Rail<x10.core.Long>)neighborsRecv).size;
                
                //#line 48 "PixelBlurPar_v2.x10"
                final x10.core.fun.Fun_0_1 t$864 = ((x10.core.fun.Fun_0_1)(new PixelBlurPar_v2.Pixel.$Closure$1()));
                
                //#line 48 "PixelBlurPar_v2.x10"
                final x10.core.Rail t$865 = ((x10.core.Rail)(new x10.core.Rail<x10.core.Rail<x10.core.Double>>(x10.rtt.ParameterizedType.make(x10.core.Rail.$RTT, x10.rtt.Types.DOUBLE), ((long)(t$863)), ((x10.core.fun.Fun_0_1)(t$864)), (x10.core.Rail.__1$1x10$lang$Long$3x10$lang$Rail$$T$2) null)));
                
                //#line 48 "PixelBlurPar_v2.x10"
                this.recv = ((x10.core.Rail)(t$865));
                
                //#line 50 "PixelBlurPar_v2.x10"
                final x10.core.Rail t$866 = ((x10.core.Rail)(new x10.core.Rail<x10.core.Double>(x10.rtt.Types.DOUBLE, ((long)(0L)))));
                
                //#line 50 "PixelBlurPar_v2.x10"
                final x10.lang.GlobalRail plchldr = ((x10.lang.GlobalRail)(new x10.lang.GlobalRail<x10.core.Double>((java.lang.System[]) null, x10.rtt.Types.DOUBLE).x10$lang$GlobalRail$$init$S(((x10.core.Rail)(t$866)), (x10.lang.GlobalRail.__0$1x10$lang$GlobalRail$$T$2) null)));
                
                //#line 51 "PixelBlurPar_v2.x10"
                final long t$867 = ((x10.core.Rail<x10.core.Long>)neighborsRecv).size;
                
                //#line 51 "PixelBlurPar_v2.x10"
                final x10.core.Rail t$868 = ((x10.core.Rail)(new x10.core.Rail<x10.lang.GlobalRail<x10.core.Double>>(x10.rtt.ParameterizedType.make(x10.lang.GlobalRail.$RTT, x10.rtt.Types.DOUBLE), ((long)(t$867)), ((x10.lang.GlobalRail<x10.core.Double>)(plchldr)), (x10.core.Rail.__1x10$lang$Rail$$T) null)));
                
                //#line 51 "PixelBlurPar_v2.x10"
                this.remoteSend = ((x10.core.Rail)(t$868));
            }
            return this;
        }
        
        
        
        //#line 7 "PixelBlurPar_v2.x10"
        final public PixelBlurPar_v2.Pixel PixelBlurPar_v2$Pixel$$this$PixelBlurPar_v2$Pixel() {
            
            //#line 7 "PixelBlurPar_v2.x10"
            return PixelBlurPar_v2.Pixel.this;
        }
        
        
        //#line 7 "PixelBlurPar_v2.x10"
        final public void __fieldInitializers_PixelBlurPar_v2_Pixel() {
            
        }
        
        @x10.runtime.impl.java.X10Generated
        final public static class $Closure$0 extends x10.core.Ref implements x10.core.fun.Fun_0_1, x10.serialization.X10JavaSerializable
        {
            public static final x10.rtt.RuntimeType<$Closure$0> $RTT = 
                x10.rtt.StaticFunType.<$Closure$0> make($Closure$0.class,
                                                        new x10.rtt.Type[] {
                                                            x10.rtt.ParameterizedType.make(x10.core.fun.Fun_0_1.$RTT, x10.rtt.Types.LONG, x10.rtt.ParameterizedType.make(x10.core.Rail.$RTT, x10.rtt.Types.DOUBLE))
                                                        });
            
            public x10.rtt.RuntimeType<?> $getRTT() { return $RTT; }
            
            public x10.rtt.Type<?> $getParam(int i) { return null; }
            
            private Object writeReplace() throws java.io.ObjectStreamException {
                return new x10.serialization.SerializationProxy(this);
            }
            
            public static x10.serialization.X10JavaSerializable $_deserialize_body(PixelBlurPar_v2.Pixel.$Closure$0 $_obj, x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
                if (x10.runtime.impl.java.Runtime.TRACE_SER) { x10.runtime.impl.java.Runtime.printTraceMessage("X10JavaSerializable: $_deserialize_body() of " + $Closure$0.class + " calling"); } 
                return $_obj;
            }
            
            public static x10.serialization.X10JavaSerializable $_deserializer(x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
                PixelBlurPar_v2.Pixel.$Closure$0 $_obj = new PixelBlurPar_v2.Pixel.$Closure$0((java.lang.System[]) null);
                $deserializer.record_reference($_obj);
                return $_deserialize_body($_obj, $deserializer);
            }
            
            public void $_serialize(x10.serialization.X10JavaSerializer $serializer) throws java.io.IOException {
                
            }
            
            // constructor just for allocation
            public $Closure$0(final java.lang.System[] $dummy) {
                
            }
            
            // dispatcher for method abstract public (Z1)=>U.operator()(a1:Z1):U
            public java.lang.Object $apply(final java.lang.Object a1, final x10.rtt.Type t1) {
                return $apply(x10.core.Long.$unbox(a1));
                
            }
            
            
        
            
            public x10.core.Rail $apply(final long i) {
                
                //#line 47 "PixelBlurPar_v2.x10"
                final x10.core.Rail t$858 = ((x10.core.Rail)(new x10.core.Rail<x10.core.Double>(x10.rtt.Types.DOUBLE, ((long)(1L)))));
                
                //#line 47 "PixelBlurPar_v2.x10"
                return t$858;
            }
            
            public $Closure$0() {
                 {
                    
                }
            }
            
        }
        
        @x10.runtime.impl.java.X10Generated
        final public static class $Closure$1 extends x10.core.Ref implements x10.core.fun.Fun_0_1, x10.serialization.X10JavaSerializable
        {
            public static final x10.rtt.RuntimeType<$Closure$1> $RTT = 
                x10.rtt.StaticFunType.<$Closure$1> make($Closure$1.class,
                                                        new x10.rtt.Type[] {
                                                            x10.rtt.ParameterizedType.make(x10.core.fun.Fun_0_1.$RTT, x10.rtt.Types.LONG, x10.rtt.ParameterizedType.make(x10.core.Rail.$RTT, x10.rtt.Types.DOUBLE))
                                                        });
            
            public x10.rtt.RuntimeType<?> $getRTT() { return $RTT; }
            
            public x10.rtt.Type<?> $getParam(int i) { return null; }
            
            private Object writeReplace() throws java.io.ObjectStreamException {
                return new x10.serialization.SerializationProxy(this);
            }
            
            public static x10.serialization.X10JavaSerializable $_deserialize_body(PixelBlurPar_v2.Pixel.$Closure$1 $_obj, x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
                if (x10.runtime.impl.java.Runtime.TRACE_SER) { x10.runtime.impl.java.Runtime.printTraceMessage("X10JavaSerializable: $_deserialize_body() of " + $Closure$1.class + " calling"); } 
                return $_obj;
            }
            
            public static x10.serialization.X10JavaSerializable $_deserializer(x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
                PixelBlurPar_v2.Pixel.$Closure$1 $_obj = new PixelBlurPar_v2.Pixel.$Closure$1((java.lang.System[]) null);
                $deserializer.record_reference($_obj);
                return $_deserialize_body($_obj, $deserializer);
            }
            
            public void $_serialize(x10.serialization.X10JavaSerializer $serializer) throws java.io.IOException {
                
            }
            
            // constructor just for allocation
            public $Closure$1(final java.lang.System[] $dummy) {
                
            }
            
            // dispatcher for method abstract public (Z1)=>U.operator()(a1:Z1):U
            public java.lang.Object $apply(final java.lang.Object a1, final x10.rtt.Type t1) {
                return $apply(x10.core.Long.$unbox(a1));
                
            }
            
            
        
            
            public x10.core.Rail $apply(final long i) {
                
                //#line 48 "PixelBlurPar_v2.x10"
                final x10.core.Rail t$862 = ((x10.core.Rail)(new x10.core.Rail<x10.core.Double>(x10.rtt.Types.DOUBLE, ((long)(1L)))));
                
                //#line 48 "PixelBlurPar_v2.x10"
                return t$862;
            }
            
            public $Closure$1() {
                 {
                    
                }
            }
            
        }
        
    }
    
    
    //#line 57 "PixelBlurPar_v2.x10"
    public x10.lang.PlaceLocalHandle<PixelBlurPar_v2.Pixel> pixelplh;
    
    
    //#line 59 "PixelBlurPar_v2.x10"
    // creation method for java code (1-phase java constructor)
    public PixelBlurPar_v2(final x10.core.Rail<x10.core.Double> pixels, final x10.core.Rail<x10.core.Rail<x10.core.Long>> neighborSendMap, final x10.core.Rail<x10.core.Rail<x10.core.Long>> neighborRecvMap, __0$1x10$lang$Double$2__1$1x10$lang$Rail$1x10$lang$Long$2$2__2$1x10$lang$Rail$1x10$lang$Long$2$2 $dummy) {
        this((java.lang.System[]) null);
        PixelBlurPar_v2$$init$S(pixels, neighborSendMap, neighborRecvMap, (PixelBlurPar_v2.__0$1x10$lang$Double$2__1$1x10$lang$Rail$1x10$lang$Long$2$2__2$1x10$lang$Rail$1x10$lang$Long$2$2) null);
    }
    
    // constructor for non-virtual call
    final public PixelBlurPar_v2 PixelBlurPar_v2$$init$S(final x10.core.Rail<x10.core.Double> pixels, final x10.core.Rail<x10.core.Rail<x10.core.Long>> neighborSendMap, final x10.core.Rail<x10.core.Rail<x10.core.Long>> neighborRecvMap, __0$1x10$lang$Double$2__1$1x10$lang$Rail$1x10$lang$Long$2$2__2$1x10$lang$Rail$1x10$lang$Long$2$2 $dummy) {
         {
            
            //#line 59 "PixelBlurPar_v2.x10"
            
            
            //#line 5 "PixelBlurPar_v2.x10"
            this.__fieldInitializers_PixelBlurPar_v2();
            
            //#line 62 "PixelBlurPar_v2.x10"
            final x10.lang.PlaceGroup t$876 = ((x10.lang.PlaceGroup)(x10.lang.Place.places()));
            
            //#line 62 "PixelBlurPar_v2.x10"
            final x10.core.fun.Fun_0_0 t$877 = ((x10.core.fun.Fun_0_0)(new PixelBlurPar_v2.$Closure$2(pixels, neighborSendMap, neighborRecvMap, (PixelBlurPar_v2.$Closure$2.__0$1x10$lang$Double$2__1$1x10$lang$Rail$1x10$lang$Long$2$2__2$1x10$lang$Rail$1x10$lang$Long$2$2) null)));
            
            //#line 62 "PixelBlurPar_v2.x10"
            final x10.lang.PlaceLocalHandle pplh = x10.lang.PlaceLocalHandle.<PixelBlurPar_v2.Pixel> make__1$1x10$lang$PlaceLocalHandle$$T$2(PixelBlurPar_v2.Pixel.$RTT, ((x10.lang.PlaceGroup)(t$876)), ((x10.core.fun.Fun_0_0)(t$877)));
            
            //#line 65 "PixelBlurPar_v2.x10"
            this.pixelplh = ((x10.lang.PlaceLocalHandle)(pplh));
            {
                
                //#line 67 "PixelBlurPar_v2.x10"
                x10.xrx.Runtime.ensureNotInAtomic();
                
                //#line 67 "PixelBlurPar_v2.x10"
                final x10.xrx.FinishState fs$1102 = x10.xrx.Runtime.startFinish();
                
                //#line 67 "PixelBlurPar_v2.x10"
                try {{
                    {
                        
                        //#line 67 "PixelBlurPar_v2.x10"
                        final x10.lang.PlaceGroup t$879 = ((x10.lang.PlaceGroup)(x10.lang.Place.places()));
                        
                        //#line 67 "PixelBlurPar_v2.x10"
                        final x10.lang.Iterator p$765 = ((x10.lang.Iterable<x10.lang.Place>)t$879).iterator();
                        
                        //#line 67 "PixelBlurPar_v2.x10"
                        for (;
                             true;
                             ) {
                            
                            //#line 67 "PixelBlurPar_v2.x10"
                            final boolean t$899 = ((x10.lang.Iterator<x10.lang.Place>)p$765).hasNext$O();
                            
                            //#line 67 "PixelBlurPar_v2.x10"
                            if (!(t$899)) {
                                
                                //#line 67 "PixelBlurPar_v2.x10"
                                break;
                            }
                            
                            //#line 67 "PixelBlurPar_v2.x10"
                            final x10.lang.Place p$1002 = ((x10.lang.Place)(((x10.lang.Iterator<x10.lang.Place>)p$765).next$G()));
                            
                            //#line 68 "PixelBlurPar_v2.x10"
                            x10.xrx.Runtime.runAsync(((x10.lang.Place)(p$1002)), ((x10.core.fun.VoidFun_0_0)(new PixelBlurPar_v2.$Closure$5(pplh, (PixelBlurPar_v2.$Closure$5.__0$1PixelBlurPar_v2$Pixel$2) null))), ((x10.xrx.Runtime.Profile)(null)));
                        }
                    }
                }}catch (java.lang.Throwable ct$1100) {
                    
                    //#line 67 "PixelBlurPar_v2.x10"
                    x10.xrx.Runtime.pushException(((java.lang.Throwable)(ct$1100)));
                    
                    //#line 67 "PixelBlurPar_v2.x10"
                    throw new java.lang.RuntimeException();
                }finally {{
                     
                     //#line 67 "PixelBlurPar_v2.x10"
                     x10.xrx.Runtime.stopFinish(((x10.xrx.FinishState)(fs$1102)));
                 }}
                }
            }
            return this;
        }
        
    
    
    //#line 95 "PixelBlurPar_v2.x10"
    /** Send values between pixels to calculate average 
		Steps:
		1. Each pixel puts data into send rail
		2. Pixels then get data from other pixels via remoteSend
		3. Calculate average
	*/
    public void blur() {
        {
            
            //#line 98 "PixelBlurPar_v2.x10"
            x10.xrx.Runtime.ensureNotInAtomic();
            
            //#line 98 "PixelBlurPar_v2.x10"
            final x10.xrx.FinishState fs$1110 = x10.xrx.Runtime.startFinish();
            
            //#line 98 "PixelBlurPar_v2.x10"
            try {{
                {
                    
                    //#line 98 "PixelBlurPar_v2.x10"
                    final x10.lang.PlaceGroup t$901 = ((x10.lang.PlaceGroup)(x10.lang.Place.places()));
                    
                    //#line 98 "PixelBlurPar_v2.x10"
                    final x10.lang.Iterator p$785 = ((x10.lang.Iterable<x10.lang.Place>)t$901).iterator();
                    
                    //#line 98 "PixelBlurPar_v2.x10"
                    for (;
                         true;
                         ) {
                        
                        //#line 98 "PixelBlurPar_v2.x10"
                        final boolean t$913 = ((x10.lang.Iterator<x10.lang.Place>)p$785).hasNext$O();
                        
                        //#line 98 "PixelBlurPar_v2.x10"
                        if (!(t$913)) {
                            
                            //#line 98 "PixelBlurPar_v2.x10"
                            break;
                        }
                        
                        //#line 98 "PixelBlurPar_v2.x10"
                        final x10.lang.Place p$1023 = ((x10.lang.Place)(((x10.lang.Iterator<x10.lang.Place>)p$785).next$G()));
                        
                        //#line 99 "PixelBlurPar_v2.x10"
                        x10.xrx.Runtime.runAsync(((x10.lang.Place)(p$1023)), ((x10.core.fun.VoidFun_0_0)(new PixelBlurPar_v2.$Closure$6(this, this.pixelplh, (PixelBlurPar_v2.$Closure$6.__1$1PixelBlurPar_v2$Pixel$2) null))), ((x10.xrx.Runtime.Profile)(null)));
                    }
                }
            }}catch (java.lang.Throwable ct$1108) {
                
                //#line 98 "PixelBlurPar_v2.x10"
                x10.xrx.Runtime.pushException(((java.lang.Throwable)(ct$1108)));
                
                //#line 98 "PixelBlurPar_v2.x10"
                throw new java.lang.RuntimeException();
            }finally {{
                 
                 //#line 98 "PixelBlurPar_v2.x10"
                 x10.xrx.Runtime.stopFinish(((x10.xrx.FinishState)(fs$1110)));
             }}
            }
        
        //#line 121 "PixelBlurPar_v2.x10"
        final x10.lang.PlaceGroup t$1050 = ((x10.lang.PlaceGroup)(x10.lang.Place.places()));
        
        //#line 121 "PixelBlurPar_v2.x10"
        final x10.lang.Iterator p$1051 = ((x10.lang.Iterable<x10.lang.Place>)t$1050).iterator();
        
        //#line 121 "PixelBlurPar_v2.x10"
        for (;
             true;
             ) {
            
            //#line 121 "PixelBlurPar_v2.x10"
            final boolean t$1052 = ((x10.lang.Iterator<x10.lang.Place>)p$1051).hasNext$O();
            
            //#line 121 "PixelBlurPar_v2.x10"
            if (!(t$1052)) {
                
                //#line 121 "PixelBlurPar_v2.x10"
                break;
            }
            
            //#line 121 "PixelBlurPar_v2.x10"
            final x10.lang.Place p$1039 = ((x10.lang.Place)(((x10.lang.Iterator<x10.lang.Place>)p$1051).next$G()));
            
            //#line 122 "PixelBlurPar_v2.x10"
            x10.xrx.Runtime.runAsync(((x10.lang.Place)(p$1039)), ((x10.core.fun.VoidFun_0_0)(new PixelBlurPar_v2.$Closure$7(this, this.pixelplh, p$1039, (PixelBlurPar_v2.$Closure$7.__1$1PixelBlurPar_v2$Pixel$2) null))), ((x10.xrx.Runtime.Profile)(null)));
        }
        }
    
    
    //#line 139 "PixelBlurPar_v2.x10"
    private static x10.core.Rail makeMap(final x10.io.File file) {
        
        //#line 140 "PixelBlurPar_v2.x10"
        final x10.io.FileReader reader = file.openRead();
        
        //#line 141 "PixelBlurPar_v2.x10"
        final x10.io.ReaderIterator t$935 = reader.lines();
        
        //#line 141 "PixelBlurPar_v2.x10"
        final java.lang.String t$936 = ((x10.io.ReaderIterator<java.lang.String>)t$935).next$G();
        
        //#line 141 "PixelBlurPar_v2.x10"
        final int numPixels = java.lang.Integer.parseInt(t$936);
        
        //#line 142 "PixelBlurPar_v2.x10"
        final long t$937 = ((long)(((int)(numPixels))));
        
        //#line 142 "PixelBlurPar_v2.x10"
        x10.core.Rail map = new x10.core.Rail<x10.core.Rail<x10.core.Long>>(x10.rtt.ParameterizedType.make(x10.core.Rail.$RTT, x10.rtt.Types.LONG), t$937);
        
        //#line 143 "PixelBlurPar_v2.x10"
        while (true) {
            
            //#line 143 "PixelBlurPar_v2.x10"
            final x10.io.ReaderIterator t$938 = reader.lines();
            
            //#line 143 "PixelBlurPar_v2.x10"
            final boolean t$955 = ((x10.io.ReaderIterator<java.lang.String>)t$938).hasNext$O();
            
            //#line 143 "PixelBlurPar_v2.x10"
            if (!(t$955)) {
                
                //#line 143 "PixelBlurPar_v2.x10"
                break;
            }
            
            //#line 144 "PixelBlurPar_v2.x10"
            final x10.io.ReaderIterator t$1066 = reader.lines();
            
            //#line 144 "PixelBlurPar_v2.x10"
            final java.lang.String line$1067 = ((x10.io.ReaderIterator<java.lang.String>)t$1066).next$G();
            
            //#line 145 "PixelBlurPar_v2.x10"
            final x10.core.Rail lineArr$1068 = x10.lang.StringHelper.split(" ", line$1067);
            
            //#line 146 "PixelBlurPar_v2.x10"
            final java.lang.String t$1069 = ((java.lang.String[])lineArr$1068.value)[(int)0L];
            
            //#line 146 "PixelBlurPar_v2.x10"
            final int place$1070 = java.lang.Integer.parseInt(t$1069);
            
            //#line 147 "PixelBlurPar_v2.x10"
            final java.lang.String t$1071 = ((java.lang.String[])lineArr$1068.value)[(int)1L];
            
            //#line 147 "PixelBlurPar_v2.x10"
            final int size$1072 = java.lang.Integer.parseInt(t$1071);
            
            //#line 148 "PixelBlurPar_v2.x10"
            final long t$1073 = ((long)(((int)(size$1072))));
            
            //#line 148 "PixelBlurPar_v2.x10"
            final x10.core.Rail neighborRail$1074 = ((x10.core.Rail)(new x10.core.Rail<x10.core.Long>(x10.rtt.Types.LONG, t$1073)));
            
            //#line 149 "PixelBlurPar_v2.x10"
            final long i$808min$1063 = 0L;
            
            //#line 149 "PixelBlurPar_v2.x10"
            final long t$1064 = ((long)(((int)(size$1072))));
            
            //#line 149 "PixelBlurPar_v2.x10"
            final long i$808max$1065 = ((t$1064) - (((long)(1L))));
            
            //#line 149 "PixelBlurPar_v2.x10"
            long i$1060 = i$808min$1063;
            {
                
                //#line 149 "PixelBlurPar_v2.x10"
                final java.lang.String[] lineArr$1068$value$1120 = ((java.lang.String[])lineArr$1068.value);
                
                //#line 149 "PixelBlurPar_v2.x10"
                final long[] neighborRail$1074$value$1121 = ((long[])neighborRail$1074.value);
                
                //#line 149 "PixelBlurPar_v2.x10"
                for (;
                     true;
                     ) {
                    
                    //#line 149 "PixelBlurPar_v2.x10"
                    final long t$1061 = i$1060;
                    
                    //#line 149 "PixelBlurPar_v2.x10"
                    final boolean t$1062 = ((t$1061) <= (((long)(i$808max$1065))));
                    
                    //#line 149 "PixelBlurPar_v2.x10"
                    if (!(t$1062)) {
                        
                        //#line 149 "PixelBlurPar_v2.x10"
                        break;
                    }
                    
                    //#line 149 "PixelBlurPar_v2.x10"
                    final long i$1057 = i$1060;
                    
                    //#line 150 "PixelBlurPar_v2.x10"
                    final long t$1053 = ((i$1057) + (((long)(2L))));
                    
                    //#line 150 "PixelBlurPar_v2.x10"
                    final java.lang.String t$1054 = ((java.lang.String)lineArr$1068$value$1120[(int)t$1053]);
                    
                    //#line 150 "PixelBlurPar_v2.x10"
                    final int t$1055 = java.lang.Integer.parseInt(t$1054);
                    
                    //#line 150 "PixelBlurPar_v2.x10"
                    final long t$1056 = ((long)(((int)(t$1055))));
                    
                    //#line 150 "PixelBlurPar_v2.x10"
                    neighborRail$1074$value$1121[(int)i$1057]=t$1056;
                    
                    //#line 149 "PixelBlurPar_v2.x10"
                    final long t$1058 = i$1060;
                    
                    //#line 149 "PixelBlurPar_v2.x10"
                    final long t$1059 = ((t$1058) + (((long)(1L))));
                    
                    //#line 149 "PixelBlurPar_v2.x10"
                    i$1060 = t$1059;
                }
            }
            
            //#line 152 "PixelBlurPar_v2.x10"
            final x10.core.Rail t$1075 = ((x10.core.Rail)(map));
            
            //#line 152 "PixelBlurPar_v2.x10"
            final long t$1076 = ((long)(((int)(place$1070))));
            
            //#line 152 "PixelBlurPar_v2.x10"
            ((x10.core.Rail[])t$1075.value)[(int)t$1076] = neighborRail$1074;
        }
        
        //#line 154 "PixelBlurPar_v2.x10"
        final x10.core.Rail t$956 = ((x10.core.Rail)(map));
        
        //#line 154 "PixelBlurPar_v2.x10"
        return t$956;
    }
    
    public static x10.core.Rail makeMap$P(final x10.io.File file) {
        return PixelBlurPar_v2.makeMap(((x10.io.File)(file)));
    }
    
    
    //#line 157 "PixelBlurPar_v2.x10"
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
            PixelBlurPar_v2.main(args);
        }
    }
    
    // the original app-main method
    public static void main(final x10.core.Rail<java.lang.String> args) {
        
        //#line 158 "PixelBlurPar_v2.x10"
        final long t$957 = ((x10.core.Rail<java.lang.String>)args).size;
        
        //#line 158 "PixelBlurPar_v2.x10"
        final x10.core.Rail pixels = new x10.core.Rail<x10.core.Double>(x10.rtt.Types.DOUBLE, ((long)(t$957)));
        
        //#line 159 "PixelBlurPar_v2.x10"
        final long i$826min$1085 = 0L;
        
        //#line 159 "PixelBlurPar_v2.x10"
        final long t$1086 = ((x10.core.Rail<java.lang.String>)args).size;
        
        //#line 159 "PixelBlurPar_v2.x10"
        final long i$826max$1087 = ((t$1086) - (((long)(1L))));
        
        //#line 159 "PixelBlurPar_v2.x10"
        long i$1082 = i$826min$1085;
        {
            
            //#line 159 "PixelBlurPar_v2.x10"
            final java.lang.String[] args$value$1122 = ((java.lang.String[])args.value);
            
            //#line 159 "PixelBlurPar_v2.x10"
            final double[] pixels$value$1123 = ((double[])pixels.value);
            
            //#line 159 "PixelBlurPar_v2.x10"
            for (;
                 true;
                 ) {
                
                //#line 159 "PixelBlurPar_v2.x10"
                final long t$1083 = i$1082;
                
                //#line 159 "PixelBlurPar_v2.x10"
                final boolean t$1084 = ((t$1083) <= (((long)(i$826max$1087))));
                
                //#line 159 "PixelBlurPar_v2.x10"
                if (!(t$1084)) {
                    
                    //#line 159 "PixelBlurPar_v2.x10"
                    break;
                }
                
                //#line 159 "PixelBlurPar_v2.x10"
                final long i$1079 = i$1082;
                
                //#line 160 "PixelBlurPar_v2.x10"
                final java.lang.String t$1077 = ((java.lang.String)args$value$1122[(int)i$1079]);
                
                //#line 160 "PixelBlurPar_v2.x10"
                final double t$1078 = java.lang.Double.parseDouble(t$1077);
                
                //#line 160 "PixelBlurPar_v2.x10"
                pixels$value$1123[(int)i$1079]=t$1078;
                
                //#line 159 "PixelBlurPar_v2.x10"
                final long t$1080 = i$1082;
                
                //#line 159 "PixelBlurPar_v2.x10"
                final long t$1081 = ((t$1080) + (((long)(1L))));
                
                //#line 159 "PixelBlurPar_v2.x10"
                i$1082 = t$1081;
            }
        }
        
        //#line 163 "PixelBlurPar_v2.x10"
        final x10.io.File sendMapFile = ((x10.io.File)(new x10.io.File((java.lang.System[]) null).x10$io$File$$init$S(((java.lang.String)("SendMap.txt")))));
        
        //#line 164 "PixelBlurPar_v2.x10"
        final x10.io.File recvMapFile = ((x10.io.File)(new x10.io.File((java.lang.System[]) null).x10$io$File$$init$S(((java.lang.String)("RecvMap.txt")))));
        
        //#line 166 "PixelBlurPar_v2.x10"
        final x10.core.Rail sendMap = PixelBlurPar_v2.makeMap(((x10.io.File)(sendMapFile)));
        
        //#line 167 "PixelBlurPar_v2.x10"
        final x10.core.Rail recvMap = PixelBlurPar_v2.makeMap(((x10.io.File)(recvMapFile)));
        
        //#line 169 "PixelBlurPar_v2.x10"
        final PixelBlurPar_v2 pixelBlur = ((PixelBlurPar_v2)(new PixelBlurPar_v2((java.lang.System[]) null).PixelBlurPar_v2$$init$S(((x10.core.Rail)(pixels)), ((x10.core.Rail)(sendMap)), ((x10.core.Rail)(recvMap)), (PixelBlurPar_v2.__0$1x10$lang$Double$2__1$1x10$lang$Rail$1x10$lang$Long$2$2__2$1x10$lang$Rail$1x10$lang$Long$2$2) null)));
        
        //#line 170 "PixelBlurPar_v2.x10"
        pixelBlur.blur();
    }
    
    
    //#line 5 "PixelBlurPar_v2.x10"
    final public PixelBlurPar_v2 PixelBlurPar_v2$$this$PixelBlurPar_v2() {
        
        //#line 5 "PixelBlurPar_v2.x10"
        return PixelBlurPar_v2.this;
    }
    
    
    //#line 5 "PixelBlurPar_v2.x10"
    final public void __fieldInitializers_PixelBlurPar_v2() {
        
    }
    
    @x10.runtime.impl.java.X10Generated
    final public static class $Closure$2 extends x10.core.Ref implements x10.core.fun.Fun_0_0, x10.serialization.X10JavaSerializable
    {
        public static final x10.rtt.RuntimeType<$Closure$2> $RTT = 
            x10.rtt.StaticFunType.<$Closure$2> make($Closure$2.class,
                                                    new x10.rtt.Type[] {
                                                        x10.rtt.ParameterizedType.make(x10.core.fun.Fun_0_0.$RTT, PixelBlurPar_v2.Pixel.$RTT)
                                                    });
        
        public x10.rtt.RuntimeType<?> $getRTT() { return $RTT; }
        
        public x10.rtt.Type<?> $getParam(int i) { return null; }
        
        private Object writeReplace() throws java.io.ObjectStreamException {
            return new x10.serialization.SerializationProxy(this);
        }
        
        public static x10.serialization.X10JavaSerializable $_deserialize_body(PixelBlurPar_v2.$Closure$2 $_obj, x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
            if (x10.runtime.impl.java.Runtime.TRACE_SER) { x10.runtime.impl.java.Runtime.printTraceMessage("X10JavaSerializable: $_deserialize_body() of " + $Closure$2.class + " calling"); } 
            $_obj.neighborRecvMap = $deserializer.readObject();
            $_obj.neighborSendMap = $deserializer.readObject();
            $_obj.pixels = $deserializer.readObject();
            return $_obj;
        }
        
        public static x10.serialization.X10JavaSerializable $_deserializer(x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
            PixelBlurPar_v2.$Closure$2 $_obj = new PixelBlurPar_v2.$Closure$2((java.lang.System[]) null);
            $deserializer.record_reference($_obj);
            return $_deserialize_body($_obj, $deserializer);
        }
        
        public void $_serialize(x10.serialization.X10JavaSerializer $serializer) throws java.io.IOException {
            $serializer.write(this.neighborRecvMap);
            $serializer.write(this.neighborSendMap);
            $serializer.write(this.pixels);
            
        }
        
        // constructor just for allocation
        public $Closure$2(final java.lang.System[] $dummy) {
            
        }
        
        // bridge for method abstract public ()=>U.operator()():U
        public PixelBlurPar_v2.Pixel $apply$G() {
            return $apply();
        }
        
        // synthetic type for parameter mangling
        public static final class __0$1x10$lang$Double$2__1$1x10$lang$Rail$1x10$lang$Long$2$2__2$1x10$lang$Rail$1x10$lang$Long$2$2 {}
        
    
        
        public PixelBlurPar_v2.Pixel $apply() {
            
            //#line 63 "PixelBlurPar_v2.x10"
            final long t$869 = x10.x10rt.X10RT.here().id;
            
            //#line 63 "PixelBlurPar_v2.x10"
            final double t$872 = ((double[])this.pixels.value)[(int)t$869];
            
            //#line 63 "PixelBlurPar_v2.x10"
            final long t$870 = x10.x10rt.X10RT.here().id;
            
            //#line 63 "PixelBlurPar_v2.x10"
            final x10.core.Rail t$873 = ((x10.core.Rail[])this.neighborSendMap.value)[(int)t$870];
            
            //#line 63 "PixelBlurPar_v2.x10"
            final long t$871 = x10.x10rt.X10RT.here().id;
            
            //#line 63 "PixelBlurPar_v2.x10"
            final x10.core.Rail t$874 = ((x10.core.Rail[])this.neighborRecvMap.value)[(int)t$871];
            
            //#line 63 "PixelBlurPar_v2.x10"
            final PixelBlurPar_v2.Pixel t$875 = ((PixelBlurPar_v2.Pixel)(new PixelBlurPar_v2.Pixel((java.lang.System[]) null).PixelBlurPar_v2$Pixel$$init$S(t$872, t$873, t$874, (PixelBlurPar_v2.Pixel.__1$1x10$lang$Long$2__2$1x10$lang$Long$2) null)));
            
            //#line 63 "PixelBlurPar_v2.x10"
            return t$875;
        }
        
        public x10.core.Rail<x10.core.Double> pixels;
        public x10.core.Rail<x10.core.Rail<x10.core.Long>> neighborSendMap;
        public x10.core.Rail<x10.core.Rail<x10.core.Long>> neighborRecvMap;
        
        public $Closure$2(final x10.core.Rail<x10.core.Double> pixels, final x10.core.Rail<x10.core.Rail<x10.core.Long>> neighborSendMap, final x10.core.Rail<x10.core.Rail<x10.core.Long>> neighborRecvMap, __0$1x10$lang$Double$2__1$1x10$lang$Rail$1x10$lang$Long$2$2__2$1x10$lang$Rail$1x10$lang$Long$2$2 $dummy) {
             {
                this.pixels = ((x10.core.Rail)(pixels));
                this.neighborSendMap = ((x10.core.Rail)(neighborSendMap));
                this.neighborRecvMap = ((x10.core.Rail)(neighborRecvMap));
            }
        }
        
    }
    
    @x10.runtime.impl.java.X10Generated
    final public static class $Closure$3 extends x10.core.Ref implements x10.core.fun.VoidFun_0_0, x10.serialization.X10JavaSerializable
    {
        public static final x10.rtt.RuntimeType<$Closure$3> $RTT = 
            x10.rtt.StaticVoidFunType.<$Closure$3> make($Closure$3.class,
                                                        new x10.rtt.Type[] {
                                                            x10.core.fun.VoidFun_0_0.$RTT
                                                        });
        
        public x10.rtt.RuntimeType<?> $getRTT() { return $RTT; }
        
        public x10.rtt.Type<?> $getParam(int i) { return null; }
        
        private Object writeReplace() throws java.io.ObjectStreamException {
            return new x10.serialization.SerializationProxy(this);
        }
        
        public static x10.serialization.X10JavaSerializable $_deserialize_body(PixelBlurPar_v2.$Closure$3 $_obj, x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
            if (x10.runtime.impl.java.Runtime.TRACE_SER) { x10.runtime.impl.java.Runtime.printTraceMessage("X10JavaSerializable: $_deserialize_body() of " + $Closure$3.class + " calling"); } 
            $_obj.i$992 = $deserializer.readLong();
            $_obj.rs$1008 = $deserializer.readObject();
            $_obj.rsr$989 = $deserializer.readObject();
            return $_obj;
        }
        
        public static x10.serialization.X10JavaSerializable $_deserializer(x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
            PixelBlurPar_v2.$Closure$3 $_obj = new PixelBlurPar_v2.$Closure$3((java.lang.System[]) null);
            $deserializer.record_reference($_obj);
            return $_deserialize_body($_obj, $deserializer);
        }
        
        public void $_serialize(x10.serialization.X10JavaSerializer $serializer) throws java.io.IOException {
            $serializer.write(this.i$992);
            $serializer.write(this.rs$1008);
            $serializer.write(this.rsr$989);
            
        }
        
        // constructor just for allocation
        public $Closure$3(final java.lang.System[] $dummy) {
            
        }
        
        // synthetic type for parameter mangling
        public static final class __0$1x10$lang$GlobalRail$1x10$lang$Double$2$2__2$1x10$lang$Double$2 {}
        
    
        
        public void $apply() {
            
            //#line 80 "PixelBlurPar_v2.x10"
            try {{
                
                //#line 81 "PixelBlurPar_v2.x10"
                final x10.core.Rail t$991 = ((x10.core.Rail)(((x10.core.Rail<x10.lang.GlobalRail<x10.core.Double>>)
                                                               ((x10.lang.GlobalRail<x10.lang.GlobalRail<x10.core.Double>>)this.rs$1008).$apply())));
                
                //#line 81 "PixelBlurPar_v2.x10"
                ((x10.lang.GlobalRail[])t$991.value)[(int)this.i$992] = this.rsr$989;
            }}catch (java.lang.Error __lowerer__var__0__) {
                
                //#line 80 "PixelBlurPar_v2.x10"
                throw __lowerer__var__0__;
            }catch (java.lang.Throwable __lowerer__var__1__) {
                
                //#line 80 "PixelBlurPar_v2.x10"
                throw x10.rtt.Types.EXCEPTION.isInstance(__lowerer__var__1__) ? (java.lang.RuntimeException)(__lowerer__var__1__) : new x10.lang.WrappedThrowable(__lowerer__var__1__);
            }
        }
        
        public x10.lang.GlobalRail<x10.lang.GlobalRail<x10.core.Double>> rs$1008;
        public long i$992;
        public x10.lang.GlobalRail<x10.core.Double> rsr$989;
        
        public $Closure$3(final x10.lang.GlobalRail<x10.lang.GlobalRail<x10.core.Double>> rs$1008, final long i$992, final x10.lang.GlobalRail<x10.core.Double> rsr$989, __0$1x10$lang$GlobalRail$1x10$lang$Double$2$2__2$1x10$lang$Double$2 $dummy) {
             {
                this.rs$1008 = ((x10.lang.GlobalRail)(rs$1008));
                this.i$992 = i$992;
                this.rsr$989 = ((x10.lang.GlobalRail)(rsr$989));
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
        
        public static x10.serialization.X10JavaSerializable $_deserialize_body(PixelBlurPar_v2.$Closure$4 $_obj, x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
            if (x10.runtime.impl.java.Runtime.TRACE_SER) { x10.runtime.impl.java.Runtime.printTraceMessage("X10JavaSerializable: $_deserialize_body() of " + $Closure$4.class + " calling"); } 
            $_obj.i$992 = $deserializer.readLong();
            $_obj.pplh = $deserializer.readObject();
            $_obj.recvId$1009 = $deserializer.readLong();
            $_obj.rs$1008 = $deserializer.readObject();
            return $_obj;
        }
        
        public static x10.serialization.X10JavaSerializable $_deserializer(x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
            PixelBlurPar_v2.$Closure$4 $_obj = new PixelBlurPar_v2.$Closure$4((java.lang.System[]) null);
            $deserializer.record_reference($_obj);
            return $_deserialize_body($_obj, $deserializer);
        }
        
        public void $_serialize(x10.serialization.X10JavaSerializer $serializer) throws java.io.IOException {
            $serializer.write(this.i$992);
            $serializer.write(this.pplh);
            $serializer.write(this.recvId$1009);
            $serializer.write(this.rs$1008);
            
        }
        
        // constructor just for allocation
        public $Closure$4(final java.lang.System[] $dummy) {
            
        }
        
        // synthetic type for parameter mangling
        public static final class __0$1PixelBlurPar_v2$Pixel$2__2$1x10$lang$GlobalRail$1x10$lang$Double$2$2 {}
        
    
        
        public void $apply() {
            
            //#line 75 "PixelBlurPar_v2.x10"
            try {{
                
                //#line 77 "PixelBlurPar_v2.x10"
                final PixelBlurPar_v2.Pixel pplh$982 = ((x10.lang.PlaceLocalHandle<PixelBlurPar_v2.Pixel>)this.pplh).$apply$G();
                
                //#line 78 "PixelBlurPar_v2.x10"
                final long sendIndex$983 = pplh$982.getSenderIndex$O((long)(this.recvId$1009));
                
                //#line 79 "PixelBlurPar_v2.x10"
                final x10.core.Rail t$984 = ((x10.core.Rail)(pplh$982.send));
                
                //#line 79 "PixelBlurPar_v2.x10"
                final x10.core.Rail a$985 = ((x10.core.Rail[])t$984.value)[(int)sendIndex$983];
                
                //#line 79 "PixelBlurPar_v2.x10"
                final boolean t$986 = ((a$985) != (null));
                
                //#line 79 "PixelBlurPar_v2.x10"
                final boolean t$987 = !(t$986);
                
                //#line 79 "PixelBlurPar_v2.x10"
                if (t$987) {
                    
                    //#line 79 "PixelBlurPar_v2.x10"
                    final x10.lang.FailedDynamicCheckException t$988 = ((x10.lang.FailedDynamicCheckException)(new x10.lang.FailedDynamicCheckException(((java.lang.String)("!(a$601 != null)")))));
                    
                    //#line 79 "PixelBlurPar_v2.x10"
                    throw t$988;
                }
                
                //#line 79 "PixelBlurPar_v2.x10"
                final x10.lang.GlobalRail rsr$989 = ((x10.lang.GlobalRail)(new x10.lang.GlobalRail<x10.core.Double>((java.lang.System[]) null, x10.rtt.Types.DOUBLE).x10$lang$GlobalRail$$init$S(((x10.core.Rail)(a$985)), (x10.lang.GlobalRail.__0$1x10$lang$GlobalRail$$T$2) null)));
                
                //#line 80 "PixelBlurPar_v2.x10"
                final x10.lang.Place t$990 = ((x10.lang.Place)(((x10.lang.GlobalRail<x10.lang.GlobalRail<x10.core.Double>>)this.rs$1008).home()));
                
                //#line 80 "PixelBlurPar_v2.x10"
                x10.xrx.Runtime.runAsync(((x10.lang.Place)(t$990)), ((x10.core.fun.VoidFun_0_0)(new PixelBlurPar_v2.$Closure$3(((x10.lang.GlobalRail<x10.lang.GlobalRail<x10.core.Double>>)(this.rs$1008)), ((long)(this.i$992)), rsr$989, (PixelBlurPar_v2.$Closure$3.__0$1x10$lang$GlobalRail$1x10$lang$Double$2$2__2$1x10$lang$Double$2) null))), ((x10.xrx.Runtime.Profile)(null)));
            }}catch (java.lang.Error __lowerer__var__0__) {
                
                //#line 75 "PixelBlurPar_v2.x10"
                throw __lowerer__var__0__;
            }catch (java.lang.Throwable __lowerer__var__1__) {
                
                //#line 75 "PixelBlurPar_v2.x10"
                throw x10.rtt.Types.EXCEPTION.isInstance(__lowerer__var__1__) ? (java.lang.RuntimeException)(__lowerer__var__1__) : new x10.lang.WrappedThrowable(__lowerer__var__1__);
            }
        }
        
        public x10.lang.PlaceLocalHandle<PixelBlurPar_v2.Pixel> pplh;
        public long recvId$1009;
        public x10.lang.GlobalRail<x10.lang.GlobalRail<x10.core.Double>> rs$1008;
        public long i$992;
        
        public $Closure$4(final x10.lang.PlaceLocalHandle<PixelBlurPar_v2.Pixel> pplh, final long recvId$1009, final x10.lang.GlobalRail<x10.lang.GlobalRail<x10.core.Double>> rs$1008, final long i$992, __0$1PixelBlurPar_v2$Pixel$2__2$1x10$lang$GlobalRail$1x10$lang$Double$2$2 $dummy) {
             {
                this.pplh = ((x10.lang.PlaceLocalHandle)(pplh));
                this.recvId$1009 = recvId$1009;
                this.rs$1008 = ((x10.lang.GlobalRail)(rs$1008));
                this.i$992 = i$992;
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
        
        public static x10.serialization.X10JavaSerializable $_deserialize_body(PixelBlurPar_v2.$Closure$5 $_obj, x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
            if (x10.runtime.impl.java.Runtime.TRACE_SER) { x10.runtime.impl.java.Runtime.printTraceMessage("X10JavaSerializable: $_deserialize_body() of " + $Closure$5.class + " calling"); } 
            $_obj.pplh = $deserializer.readObject();
            return $_obj;
        }
        
        public static x10.serialization.X10JavaSerializable $_deserializer(x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
            PixelBlurPar_v2.$Closure$5 $_obj = new PixelBlurPar_v2.$Closure$5((java.lang.System[]) null);
            $deserializer.record_reference($_obj);
            return $_deserialize_body($_obj, $deserializer);
        }
        
        public void $_serialize(x10.serialization.X10JavaSerializer $serializer) throws java.io.IOException {
            $serializer.write(this.pplh);
            
        }
        
        // constructor just for allocation
        public $Closure$5(final java.lang.System[] $dummy) {
            
        }
        
        // synthetic type for parameter mangling
        public static final class __0$1PixelBlurPar_v2$Pixel$2 {}
        
    
        
        public void $apply() {
            
            //#line 68 "PixelBlurPar_v2.x10"
            try {{
                
                //#line 69 "PixelBlurPar_v2.x10"
                final PixelBlurPar_v2.Pixel pplh$1003 = ((x10.lang.PlaceLocalHandle<PixelBlurPar_v2.Pixel>)this.pplh).$apply$G();
                
                //#line 70 "PixelBlurPar_v2.x10"
                final x10.core.Rail a$1004 = pplh$1003.remoteSend;
                
                //#line 70 "PixelBlurPar_v2.x10"
                final boolean t$1005 = ((a$1004) != (null));
                
                //#line 70 "PixelBlurPar_v2.x10"
                final boolean t$1006 = !(t$1005);
                
                //#line 70 "PixelBlurPar_v2.x10"
                if (t$1006) {
                    
                    //#line 70 "PixelBlurPar_v2.x10"
                    final x10.lang.FailedDynamicCheckException t$1007 = ((x10.lang.FailedDynamicCheckException)(new x10.lang.FailedDynamicCheckException(((java.lang.String)("!(a$589 != null)")))));
                    
                    //#line 70 "PixelBlurPar_v2.x10"
                    throw t$1007;
                }
                
                //#line 70 "PixelBlurPar_v2.x10"
                final x10.lang.GlobalRail rs$1008 = ((x10.lang.GlobalRail)(new x10.lang.GlobalRail<x10.lang.GlobalRail<x10.core.Double>>((java.lang.System[]) null, x10.rtt.ParameterizedType.make(x10.lang.GlobalRail.$RTT, x10.rtt.Types.DOUBLE)).x10$lang$GlobalRail$$init$S(((x10.core.Rail)(a$1004)), (x10.lang.GlobalRail.__0$1x10$lang$GlobalRail$$T$2) null)));
                
                //#line 72 "PixelBlurPar_v2.x10"
                final long recvId$1009 = x10.x10rt.X10RT.here().id;
                
                //#line 74 "PixelBlurPar_v2.x10"
                final long i$745min$998 = 0L;
                
                //#line 74 "PixelBlurPar_v2.x10"
                final x10.core.Rail t$999 = ((x10.core.Rail)(pplh$1003.neighborsRecv));
                
                //#line 74 "PixelBlurPar_v2.x10"
                final long t$1000 = ((x10.core.Rail<x10.core.Long>)t$999).size;
                
                //#line 74 "PixelBlurPar_v2.x10"
                final long i$745max$1001 = ((t$1000) - (((long)(1L))));
                
                //#line 74 "PixelBlurPar_v2.x10"
                long i$995 = i$745min$998;
                
                //#line 74 "PixelBlurPar_v2.x10"
                for (;
                     true;
                     ) {
                    
                    //#line 74 "PixelBlurPar_v2.x10"
                    final long t$996 = i$995;
                    
                    //#line 74 "PixelBlurPar_v2.x10"
                    final boolean t$997 = ((t$996) <= (((long)(i$745max$1001))));
                    
                    //#line 74 "PixelBlurPar_v2.x10"
                    if (!(t$997)) {
                        
                        //#line 74 "PixelBlurPar_v2.x10"
                        break;
                    }
                    
                    //#line 74 "PixelBlurPar_v2.x10"
                    final long i$992 = i$995;
                    
                    //#line 75 "PixelBlurPar_v2.x10"
                    final x10.core.Rail t$979 = ((x10.core.Rail)(pplh$1003.neighborsRecv));
                    
                    //#line 75 "PixelBlurPar_v2.x10"
                    final long t$980 = ((long[])t$979.value)[(int)i$992];
                    
                    //#line 75 "PixelBlurPar_v2.x10"
                    final x10.lang.Place t$981 = ((x10.lang.Place)(new x10.lang.Place((java.lang.System[]) null).x10$lang$Place$$init$S(t$980)));
                    
                    //#line 75 "PixelBlurPar_v2.x10"
                    x10.xrx.Runtime.runAsync(((x10.lang.Place)(t$981)), ((x10.core.fun.VoidFun_0_0)(new PixelBlurPar_v2.$Closure$4(((x10.lang.PlaceLocalHandle<PixelBlurPar_v2.Pixel>)(this.pplh)), recvId$1009, rs$1008, i$992, (PixelBlurPar_v2.$Closure$4.__0$1PixelBlurPar_v2$Pixel$2__2$1x10$lang$GlobalRail$1x10$lang$Double$2$2) null))), ((x10.xrx.Runtime.Profile)(null)));
                    
                    //#line 74 "PixelBlurPar_v2.x10"
                    final long t$993 = i$995;
                    
                    //#line 74 "PixelBlurPar_v2.x10"
                    final long t$994 = ((t$993) + (((long)(1L))));
                    
                    //#line 74 "PixelBlurPar_v2.x10"
                    i$995 = t$994;
                }
            }}catch (java.lang.Error __lowerer__var__0__) {
                
                //#line 68 "PixelBlurPar_v2.x10"
                throw __lowerer__var__0__;
            }catch (java.lang.Throwable __lowerer__var__1__) {
                
                //#line 68 "PixelBlurPar_v2.x10"
                throw x10.rtt.Types.EXCEPTION.isInstance(__lowerer__var__1__) ? (java.lang.RuntimeException)(__lowerer__var__1__) : new x10.lang.WrappedThrowable(__lowerer__var__1__);
            }
        }
        
        public x10.lang.PlaceLocalHandle<PixelBlurPar_v2.Pixel> pplh;
        
        public $Closure$5(final x10.lang.PlaceLocalHandle<PixelBlurPar_v2.Pixel> pplh, __0$1PixelBlurPar_v2$Pixel$2 $dummy) {
             {
                this.pplh = ((x10.lang.PlaceLocalHandle)(pplh));
            }
        }
        
    }
    
    @x10.runtime.impl.java.X10Generated
    final public static class $Closure$6 extends x10.core.Ref implements x10.core.fun.VoidFun_0_0, x10.serialization.X10JavaSerializable
    {
        public static final x10.rtt.RuntimeType<$Closure$6> $RTT = 
            x10.rtt.StaticVoidFunType.<$Closure$6> make($Closure$6.class,
                                                        new x10.rtt.Type[] {
                                                            x10.core.fun.VoidFun_0_0.$RTT
                                                        });
        
        public x10.rtt.RuntimeType<?> $getRTT() { return $RTT; }
        
        public x10.rtt.Type<?> $getParam(int i) { return null; }
        
        private Object writeReplace() throws java.io.ObjectStreamException {
            return new x10.serialization.SerializationProxy(this);
        }
        
        public static x10.serialization.X10JavaSerializable $_deserialize_body(PixelBlurPar_v2.$Closure$6 $_obj, x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
            if (x10.runtime.impl.java.Runtime.TRACE_SER) { x10.runtime.impl.java.Runtime.printTraceMessage("X10JavaSerializable: $_deserialize_body() of " + $Closure$6.class + " calling"); } 
            $_obj.out$$ = $deserializer.readObject();
            $_obj.pixelplh = $deserializer.readObject();
            return $_obj;
        }
        
        public static x10.serialization.X10JavaSerializable $_deserializer(x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
            PixelBlurPar_v2.$Closure$6 $_obj = new PixelBlurPar_v2.$Closure$6((java.lang.System[]) null);
            $deserializer.record_reference($_obj);
            return $_deserialize_body($_obj, $deserializer);
        }
        
        public void $_serialize(x10.serialization.X10JavaSerializer $serializer) throws java.io.IOException {
            $serializer.write(this.out$$);
            $serializer.write(this.pixelplh);
            
        }
        
        // constructor just for allocation
        public $Closure$6(final java.lang.System[] $dummy) {
            
        }
        
        // synthetic type for parameter mangling
        public static final class __1$1PixelBlurPar_v2$Pixel$2 {}
        
    
        
        public void $apply() {
            
            //#line 99 "PixelBlurPar_v2.x10"
            try {{
                
                //#line 100 "PixelBlurPar_v2.x10"
                final x10.lang.PlaceLocalHandle t$1024 = ((x10.lang.PlaceLocalHandle)(this.pixelplh));
                
                //#line 100 "PixelBlurPar_v2.x10"
                final PixelBlurPar_v2.Pixel pixel$1025 = ((x10.lang.PlaceLocalHandle<PixelBlurPar_v2.Pixel>)t$1024).$apply$G();
                
                //#line 102 "PixelBlurPar_v2.x10"
                final long i$767min$1019 = 0L;
                
                //#line 102 "PixelBlurPar_v2.x10"
                final x10.core.Rail t$1020 = ((x10.core.Rail)(pixel$1025.neighborsSend));
                
                //#line 102 "PixelBlurPar_v2.x10"
                final long t$1021 = ((x10.core.Rail<x10.core.Long>)t$1020).size;
                
                //#line 102 "PixelBlurPar_v2.x10"
                final long i$767max$1022 = ((t$1021) - (((long)(1L))));
                
                //#line 102 "PixelBlurPar_v2.x10"
                long i$1016 = i$767min$1019;
                
                //#line 102 "PixelBlurPar_v2.x10"
                for (;
                     true;
                     ) {
                    
                    //#line 102 "PixelBlurPar_v2.x10"
                    final long t$1017 = i$1016;
                    
                    //#line 102 "PixelBlurPar_v2.x10"
                    final boolean t$1018 = ((t$1017) <= (((long)(i$767max$1022))));
                    
                    //#line 102 "PixelBlurPar_v2.x10"
                    if (!(t$1018)) {
                        
                        //#line 102 "PixelBlurPar_v2.x10"
                        break;
                    }
                    
                    //#line 102 "PixelBlurPar_v2.x10"
                    final long i$1013 = i$1016;
                    
                    //#line 103 "PixelBlurPar_v2.x10"
                    final x10.core.Rail t$1010 = ((x10.core.Rail)(pixel$1025.send));
                    
                    //#line 103 "PixelBlurPar_v2.x10"
                    final x10.core.Rail t$1011 = ((x10.core.Rail[])t$1010.value)[(int)i$1013];
                    
                    //#line 103 "PixelBlurPar_v2.x10"
                    final double t$1012 = pixel$1025.myPixel;
                    
                    //#line 103 "PixelBlurPar_v2.x10"
                    ((double[])t$1011.value)[(int)0L] = t$1012;
                    
                    //#line 102 "PixelBlurPar_v2.x10"
                    final long t$1014 = i$1016;
                    
                    //#line 102 "PixelBlurPar_v2.x10"
                    final long t$1015 = ((t$1014) + (((long)(1L))));
                    
                    //#line 102 "PixelBlurPar_v2.x10"
                    i$1016 = t$1015;
                }
            }}catch (java.lang.Error __lowerer__var__0__) {
                
                //#line 99 "PixelBlurPar_v2.x10"
                throw __lowerer__var__0__;
            }catch (java.lang.Throwable __lowerer__var__1__) {
                
                //#line 99 "PixelBlurPar_v2.x10"
                throw x10.rtt.Types.EXCEPTION.isInstance(__lowerer__var__1__) ? (java.lang.RuntimeException)(__lowerer__var__1__) : new x10.lang.WrappedThrowable(__lowerer__var__1__);
            }
        }
        
        public PixelBlurPar_v2 out$$;
        public x10.lang.PlaceLocalHandle<PixelBlurPar_v2.Pixel> pixelplh;
        
        public $Closure$6(final PixelBlurPar_v2 out$$, final x10.lang.PlaceLocalHandle<PixelBlurPar_v2.Pixel> pixelplh, __1$1PixelBlurPar_v2$Pixel$2 $dummy) {
             {
                this.out$$ = out$$;
                this.pixelplh = ((x10.lang.PlaceLocalHandle)(pixelplh));
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
        
        public static x10.serialization.X10JavaSerializable $_deserialize_body(PixelBlurPar_v2.$Closure$7 $_obj, x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
            if (x10.runtime.impl.java.Runtime.TRACE_SER) { x10.runtime.impl.java.Runtime.printTraceMessage("X10JavaSerializable: $_deserialize_body() of " + $Closure$7.class + " calling"); } 
            $_obj.out$$ = $deserializer.readObject();
            $_obj.p$1039 = $deserializer.readObject();
            $_obj.pixelplh = $deserializer.readObject();
            return $_obj;
        }
        
        public static x10.serialization.X10JavaSerializable $_deserializer(x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
            PixelBlurPar_v2.$Closure$7 $_obj = new PixelBlurPar_v2.$Closure$7((java.lang.System[]) null);
            $deserializer.record_reference($_obj);
            return $_deserialize_body($_obj, $deserializer);
        }
        
        public void $_serialize(x10.serialization.X10JavaSerializer $serializer) throws java.io.IOException {
            $serializer.write(this.out$$);
            $serializer.write(this.p$1039);
            $serializer.write(this.pixelplh);
            
        }
        
        // constructor just for allocation
        public $Closure$7(final java.lang.System[] $dummy) {
            
        }
        
        // synthetic type for parameter mangling
        public static final class __1$1PixelBlurPar_v2$Pixel$2 {}
        
    
        
        public void $apply() {
            
            //#line 122 "PixelBlurPar_v2.x10"
            try {{
                
                //#line 123 "PixelBlurPar_v2.x10"
                final x10.lang.PlaceLocalHandle t$1040 = ((x10.lang.PlaceLocalHandle)(this.pixelplh));
                
                //#line 123 "PixelBlurPar_v2.x10"
                final PixelBlurPar_v2.Pixel pixel$1041 = ((x10.lang.PlaceLocalHandle<PixelBlurPar_v2.Pixel>)t$1040).$apply$G();
                {
                    
                    //#line 125 "PixelBlurPar_v2.x10"
                    x10.xrx.Runtime.ensureNotInAtomic();
                    
                    //#line 125 "PixelBlurPar_v2.x10"
                    final x10.xrx.FinishState fs$1114 = x10.xrx.Runtime.startFinish();
                    
                    //#line 125 "PixelBlurPar_v2.x10"
                    try {{
                        {
                            
                            //#line 125 "PixelBlurPar_v2.x10"
                            final x10.core.Rail rail$1042 = ((x10.core.Rail)(pixel$1041.neighborsRecv));
                            
                            //#line 125 "PixelBlurPar_v2.x10"
                            final long i$787min$1043 = 0L;
                            
                            //#line 125 "PixelBlurPar_v2.x10"
                            final long i$787max$1044 = ((x10.core.Rail<x10.core.Long>)rail$1042).size;
                            
                            //#line 125 "PixelBlurPar_v2.x10"
                            long i$1036 = i$787min$1043;
                            
                            //#line 125 "PixelBlurPar_v2.x10"
                            for (;
                                 true;
                                 ) {
                                
                                //#line 125 "PixelBlurPar_v2.x10"
                                final long t$1037 = i$1036;
                                
                                //#line 125 "PixelBlurPar_v2.x10"
                                final boolean t$1038 = ((t$1037) < (((long)(i$787max$1044))));
                                
                                //#line 125 "PixelBlurPar_v2.x10"
                                if (!(t$1038)) {
                                    
                                    //#line 125 "PixelBlurPar_v2.x10"
                                    break;
                                }
                                
                                //#line 125 "PixelBlurPar_v2.x10"
                                final long i$1033 = i$1036;
                                
                                //#line 126 "PixelBlurPar_v2.x10"
                                final x10.core.Rail t$1026 = ((x10.core.Rail)(pixel$1041.remoteSend));
                                
                                //#line 126 "PixelBlurPar_v2.x10"
                                final x10.lang.GlobalRail t$1027 = ((x10.lang.GlobalRail[])t$1026.value)[(int)i$1033];
                                
                                //#line 126 "PixelBlurPar_v2.x10"
                                final x10.core.Rail t$1028 = ((x10.core.Rail)(pixel$1041.recv));
                                
                                //#line 126 "PixelBlurPar_v2.x10"
                                final x10.core.Rail t$1029 = ((x10.core.Rail[])t$1028.value)[(int)i$1033];
                                
                                //#line 126 "PixelBlurPar_v2.x10"
                                final x10.core.Rail t$1030 = ((x10.core.Rail)(pixel$1041.recv));
                                
                                //#line 126 "PixelBlurPar_v2.x10"
                                final x10.core.Rail t$1031 = ((x10.core.Rail[])t$1030.value)[(int)i$1033];
                                
                                //#line 126 "PixelBlurPar_v2.x10"
                                final long t$1032 = ((x10.core.Rail<x10.core.Double>)t$1031).size;
                                
                                //#line 126 "PixelBlurPar_v2.x10"
                                x10.core.Rail.<x10.core.Double> asyncCopy__0$1x10$lang$Rail$$T$2__2$1x10$lang$Rail$$T$2(x10.rtt.Types.DOUBLE, ((x10.lang.GlobalRail)(t$1027)), (long)(0L), ((x10.core.Rail)(t$1029)), (long)(0L), (long)(t$1032));
                                
                                //#line 125 "PixelBlurPar_v2.x10"
                                final long t$1034 = i$1036;
                                
                                //#line 125 "PixelBlurPar_v2.x10"
                                final long t$1035 = ((t$1034) + (((long)(1L))));
                                
                                //#line 125 "PixelBlurPar_v2.x10"
                                i$1036 = t$1035;
                            }
                        }
                    }}catch (java.lang.Throwable ct$1112) {
                        
                        //#line 125 "PixelBlurPar_v2.x10"
                        x10.xrx.Runtime.pushException(((java.lang.Throwable)(ct$1112)));
                        
                        //#line 125 "PixelBlurPar_v2.x10"
                        throw new java.lang.RuntimeException();
                    }finally {{
                         
                         //#line 125 "PixelBlurPar_v2.x10"
                         x10.xrx.Runtime.stopFinish(((x10.xrx.FinishState)(fs$1114)));
                     }}
                    }
                
                //#line 129 "PixelBlurPar_v2.x10"
                final x10.io.Printer t$1045 = ((x10.io.Printer)(x10.io.Console.get$OUT()));
                
                //#line 129 "PixelBlurPar_v2.x10"
                final java.lang.String t$1046 = ((this.p$1039) + (" "));
                
                //#line 129 "PixelBlurPar_v2.x10"
                final x10.core.Rail t$1047 = ((x10.core.Rail)(pixel$1041.recv));
                
                //#line 129 "PixelBlurPar_v2.x10"
                final java.lang.String t$1048 = ((x10.core.Rail<x10.core.Rail<x10.core.Double>>)t$1047).toString();
                
                //#line 129 "PixelBlurPar_v2.x10"
                final java.lang.String t$1049 = ((t$1046) + (t$1048));
                
                //#line 129 "PixelBlurPar_v2.x10"
                t$1045.println(((java.lang.Object)(t$1049)));
                }}catch (java.lang.Error __lowerer__var__0__) {
                    
                    //#line 122 "PixelBlurPar_v2.x10"
                    throw __lowerer__var__0__;
                }catch (java.lang.Throwable __lowerer__var__1__) {
                    
                    //#line 122 "PixelBlurPar_v2.x10"
                    throw x10.rtt.Types.EXCEPTION.isInstance(__lowerer__var__1__) ? (java.lang.RuntimeException)(__lowerer__var__1__) : new x10.lang.WrappedThrowable(__lowerer__var__1__);
                }
            }
        
        public PixelBlurPar_v2 out$$;
        public x10.lang.PlaceLocalHandle<PixelBlurPar_v2.Pixel> pixelplh;
        public x10.lang.Place p$1039;
        
        public $Closure$7(final PixelBlurPar_v2 out$$, final x10.lang.PlaceLocalHandle<PixelBlurPar_v2.Pixel> pixelplh, final x10.lang.Place p$1039, __1$1PixelBlurPar_v2$Pixel$2 $dummy) {
             {
                this.out$$ = out$$;
                this.pixelplh = ((x10.lang.PlaceLocalHandle)(pixelplh));
                this.p$1039 = ((x10.lang.Place)(p$1039));
            }
        }
        
        }
        
    }
    
    