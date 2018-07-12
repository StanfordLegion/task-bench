
@x10.runtime.impl.java.X10Generated
public class PixelBlurPar extends x10.core.Ref implements x10.serialization.X10JavaSerializable
{
    public static final x10.rtt.RuntimeType<PixelBlurPar> $RTT = 
        x10.rtt.NamedType.<PixelBlurPar> make("PixelBlurPar",
                                              PixelBlurPar.class);
    
    public x10.rtt.RuntimeType<?> $getRTT() { return $RTT; }
    
    public x10.rtt.Type<?> $getParam(int i) { return null; }
    
    private Object writeReplace() throws java.io.ObjectStreamException {
        return new x10.serialization.SerializationProxy(this);
    }
    
    public static x10.serialization.X10JavaSerializable $_deserialize_body(PixelBlurPar $_obj, x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
        if (x10.runtime.impl.java.Runtime.TRACE_SER) { x10.runtime.impl.java.Runtime.printTraceMessage("X10JavaSerializable: $_deserialize_body() of " + PixelBlurPar.class + " calling"); } 
        return $_obj;
    }
    
    public static x10.serialization.X10JavaSerializable $_deserializer(x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
        PixelBlurPar $_obj = new PixelBlurPar((java.lang.System[]) null);
        $deserializer.record_reference($_obj);
        return $_deserialize_body($_obj, $deserializer);
    }
    
    public void $_serialize(x10.serialization.X10JavaSerializer $serializer) throws java.io.IOException {
        
    }
    
    // constructor just for allocation
    public PixelBlurPar(final java.lang.System[] $dummy) {
        
    }
    
    

    
    
    //#line 5 "PixelBlurPar.x10"
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
            PixelBlurPar.main(args);
        }
    }
    
    // the original app-main method
    public static void main(final x10.core.Rail<java.lang.String> args) {
        
        //#line 6 "PixelBlurPar.x10"
        final long t$1057 = ((x10.core.Rail<java.lang.String>)args).size;
        
        //#line 6 "PixelBlurPar.x10"
        final x10.core.Rail pixels = new x10.core.Rail<x10.core.Double>(x10.rtt.Types.DOUBLE, ((long)(t$1057)));
        
        //#line 7 "PixelBlurPar.x10"
        final long i$1016min$1159 = 0L;
        
        //#line 7 "PixelBlurPar.x10"
        final long t$1160 = ((x10.core.Rail<java.lang.String>)args).size;
        
        //#line 7 "PixelBlurPar.x10"
        final long i$1016max$1161 = ((t$1160) - (((long)(1L))));
        
        //#line 7 "PixelBlurPar.x10"
        long i$1156 = i$1016min$1159;
        {
            
            //#line 7 "PixelBlurPar.x10"
            final java.lang.String[] args$value$1408 = ((java.lang.String[])args.value);
            
            //#line 7 "PixelBlurPar.x10"
            final double[] pixels$value$1409 = ((double[])pixels.value);
            
            //#line 7 "PixelBlurPar.x10"
            for (;
                 true;
                 ) {
                
                //#line 7 "PixelBlurPar.x10"
                final long t$1157 = i$1156;
                
                //#line 7 "PixelBlurPar.x10"
                final boolean t$1158 = ((t$1157) <= (((long)(i$1016max$1161))));
                
                //#line 7 "PixelBlurPar.x10"
                if (!(t$1158)) {
                    
                    //#line 7 "PixelBlurPar.x10"
                    break;
                }
                
                //#line 7 "PixelBlurPar.x10"
                final long i$1153 = i$1156;
                
                //#line 8 "PixelBlurPar.x10"
                final java.lang.String t$1151 = ((java.lang.String)args$value$1408[(int)i$1153]);
                
                //#line 8 "PixelBlurPar.x10"
                final double t$1152 = java.lang.Double.parseDouble(t$1151);
                
                //#line 8 "PixelBlurPar.x10"
                pixels$value$1409[(int)i$1153]=t$1152;
                
                //#line 7 "PixelBlurPar.x10"
                final long t$1154 = i$1156;
                
                //#line 7 "PixelBlurPar.x10"
                final long t$1155 = ((t$1154) + (((long)(1L))));
                
                //#line 7 "PixelBlurPar.x10"
                i$1156 = t$1155;
            }
        }
        
        //#line 10 "PixelBlurPar.x10"
        final x10.core.Rail blurredPixels = PixelBlurPar.pixelBlur__0$1x10$lang$Double$2(((x10.core.Rail)(pixels)));
        
        //#line 11 "PixelBlurPar.x10"
        final x10.io.Printer t$1066 = ((x10.io.Printer)(x10.io.Console.get$OUT()));
        
        //#line 11 "PixelBlurPar.x10"
        final java.lang.String t$1067 = ((x10.core.Rail<x10.core.Double>)blurredPixels).toString();
        
        //#line 11 "PixelBlurPar.x10"
        t$1066.println(((java.lang.Object)(t$1067)));
    }
    
    
    //#line 14 "PixelBlurPar.x10"
    private static x10.core.Rail pixelBlur__0$1x10$lang$Double$2(final x10.core.Rail<x10.core.Double> pixels) {
        
        //#line 15 "PixelBlurPar.x10"
        final long t$1068 = ((x10.core.Rail<x10.core.Double>)pixels).size;
        
        //#line 15 "PixelBlurPar.x10"
        x10.core.Rail blurredPixels = new x10.core.Rail<x10.core.Double>(x10.rtt.Types.DOUBLE, ((long)(t$1068)));
        
        //#line 16 "PixelBlurPar.x10"
        final x10.core.Rail t$1069 = ((x10.core.Rail)(blurredPixels));
        
        //#line 16 "PixelBlurPar.x10"
        final x10.core.GlobalRef blurredPixelsRef = new x10.core.GlobalRef<x10.core.Rail<x10.core.Double>>(x10.rtt.ParameterizedType.make(x10.core.Rail.$RTT, x10.rtt.Types.DOUBLE), t$1069, (x10.core.GlobalRef.__0x10$lang$GlobalRef$$T) null);
        
        //#line 17 "PixelBlurPar.x10"
        final long t$1070 = ((x10.core.Rail<x10.core.Double>)pixels).size;
        
        //#line 17 "PixelBlurPar.x10"
        x10.core.Rail pixelRails = new x10.core.Rail<x10.core.Rail<x10.core.Double>>(x10.rtt.ParameterizedType.make(x10.core.Rail.$RTT, x10.rtt.Types.DOUBLE), ((long)(t$1070)));
        
        //#line 18 "PixelBlurPar.x10"
        final x10.core.Rail t$1071 = ((x10.core.Rail)(pixelRails));
        
        //#line 18 "PixelBlurPar.x10"
        final x10.core.GlobalRef pixelRailsRef = new x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>>(x10.rtt.ParameterizedType.make(x10.core.Rail.$RTT, x10.rtt.ParameterizedType.make(x10.core.Rail.$RTT, x10.rtt.Types.DOUBLE)), t$1071, (x10.core.GlobalRef.__0x10$lang$GlobalRef$$T) null);
        
        //#line 19 "PixelBlurPar.x10"
        final long t$1072 = ((x10.core.Rail<x10.core.Double>)pixels).size;
        
        //#line 19 "PixelBlurPar.x10"
        x10.core.Rail clocks = new x10.core.Rail<x10.core.Rail<x10.lang.Clock>>(x10.rtt.ParameterizedType.make(x10.core.Rail.$RTT, x10.lang.Clock.$RTT), ((long)(t$1072)));
        
        //#line 20 "PixelBlurPar.x10"
        final x10.core.Rail t$1073 = ((x10.core.Rail)(clocks));
        
        //#line 20 "PixelBlurPar.x10"
        final x10.core.GlobalRef clocksRef = new x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.lang.Clock>>>(x10.rtt.ParameterizedType.make(x10.core.Rail.$RTT, x10.rtt.ParameterizedType.make(x10.core.Rail.$RTT, x10.lang.Clock.$RTT)), t$1073, (x10.core.GlobalRef.__0x10$lang$GlobalRef$$T) null);
        {
            
            //#line 22 "PixelBlurPar.x10"
            x10.xrx.Runtime.ensureNotInAtomic();
            
            //#line 22 "PixelBlurPar.x10"
            final x10.xrx.FinishState fs$1310 = x10.xrx.Runtime.startFinish();
            
            //#line 22 "PixelBlurPar.x10"
            try {{
                {
                    
                    //#line 22 "PixelBlurPar.x10"
                    final x10.lang.PlaceGroup t$1075 = ((x10.lang.PlaceGroup)(x10.lang.Place.places()));
                    
                    //#line 22 "PixelBlurPar.x10"
                    final x10.lang.Iterator p$1054 = ((x10.lang.Iterable<x10.lang.Place>)t$1075).iterator();
                    
                    //#line 22 "PixelBlurPar.x10"
                    for (;
                         true;
                         ) {
                        
                        //#line 22 "PixelBlurPar.x10"
                        final boolean t$1084 = ((x10.lang.Iterator<x10.lang.Place>)p$1054).hasNext$O();
                        
                        //#line 22 "PixelBlurPar.x10"
                        if (!(t$1084)) {
                            
                            //#line 22 "PixelBlurPar.x10"
                            break;
                        }
                        
                        //#line 22 "PixelBlurPar.x10"
                        final x10.lang.Place p$1173 = ((x10.lang.Place)(((x10.lang.Iterator<x10.lang.Place>)p$1054).next$G()));
                        
                        //#line 23 "PixelBlurPar.x10"
                        final x10.core.Rail t$1174 = ((x10.core.Rail)(pixelRails));
                        
                        //#line 23 "PixelBlurPar.x10"
                        final long t$1175 = p$1173.id;
                        
                        //#line 23 "PixelBlurPar.x10"
                        final x10.core.Rail t$1176 = ((x10.core.Rail)(x10.xrx.Runtime.<x10.core.Rail<x10.core.Double>> evalAt__1$1x10$xrx$Runtime$$T$2$G(x10.rtt.ParameterizedType.make(x10.core.Rail.$RTT, x10.rtt.Types.DOUBLE), ((x10.lang.Place)(p$1173)), ((x10.core.fun.Fun_0_0)(new PixelBlurPar.$Closure$0())), ((x10.xrx.Runtime.Profile)(null)))));
                        
                        //#line 23 "PixelBlurPar.x10"
                        ((x10.core.Rail[])t$1174.value)[(int)t$1175] = t$1176;
                        
                        //#line 24 "PixelBlurPar.x10"
                        final x10.core.Rail clockRail$1178 = ((x10.core.Rail)(x10.xrx.Runtime.<x10.core.Rail<x10.lang.Clock>> evalAt__1$1x10$xrx$Runtime$$T$2$G(x10.rtt.ParameterizedType.make(x10.core.Rail.$RTT, x10.lang.Clock.$RTT), ((x10.lang.Place)(p$1173)), ((x10.core.fun.Fun_0_0)(new PixelBlurPar.$Closure$1())), ((x10.xrx.Runtime.Profile)(null)))));
                        
                        //#line 25 "PixelBlurPar.x10"
                        final long i$1034min$1170 = 0L;
                        
                        //#line 25 "PixelBlurPar.x10"
                        final long t$1171 = ((x10.core.Rail<x10.lang.Clock>)clockRail$1178).size;
                        
                        //#line 25 "PixelBlurPar.x10"
                        final long i$1034max$1172 = ((t$1171) - (((long)(1L))));
                        
                        //#line 25 "PixelBlurPar.x10"
                        long i$1167 = i$1034min$1170;
                        {
                            
                            //#line 25 "PixelBlurPar.x10"
                            final x10.lang.Clock[] clockRail$1178$value$1410 = ((x10.lang.Clock[])clockRail$1178.value);
                            
                            //#line 25 "PixelBlurPar.x10"
                            for (;
                                 true;
                                 ) {
                                
                                //#line 25 "PixelBlurPar.x10"
                                final long t$1168 = i$1167;
                                
                                //#line 25 "PixelBlurPar.x10"
                                final boolean t$1169 = ((t$1168) <= (((long)(i$1034max$1172))));
                                
                                //#line 25 "PixelBlurPar.x10"
                                if (!(t$1169)) {
                                    
                                    //#line 25 "PixelBlurPar.x10"
                                    break;
                                }
                                
                                //#line 25 "PixelBlurPar.x10"
                                final long i$1164 = i$1167;
                                
                                //#line 26 "PixelBlurPar.x10"
                                final x10.lang.Clock t$1162 = x10.xrx.Runtime.<x10.lang.Clock> evalAt__1$1x10$xrx$Runtime$$T$2$G(x10.lang.Clock.$RTT, ((x10.lang.Place)(p$1173)), ((x10.core.fun.Fun_0_0)(new PixelBlurPar.$Closure$2())), ((x10.xrx.Runtime.Profile)(null)));
                                
                                //#line 26 "PixelBlurPar.x10"
                                clockRail$1178$value$1410[(int)i$1164]=t$1162;
                                
                                //#line 25 "PixelBlurPar.x10"
                                final long t$1165 = i$1167;
                                
                                //#line 25 "PixelBlurPar.x10"
                                final long t$1166 = ((t$1165) + (((long)(1L))));
                                
                                //#line 25 "PixelBlurPar.x10"
                                i$1167 = t$1166;
                            }
                        }
                        
                        //#line 28 "PixelBlurPar.x10"
                        final x10.core.Rail t$1180 = ((x10.core.Rail)(clocks));
                        
                        //#line 28 "PixelBlurPar.x10"
                        final long t$1181 = p$1173.id;
                        
                        //#line 28 "PixelBlurPar.x10"
                        ((x10.core.Rail[])t$1180.value)[(int)t$1181] = clockRail$1178;
                    }
                }
            }}catch (java.lang.Throwable ct$1308) {
                
                //#line 22 "PixelBlurPar.x10"
                x10.xrx.Runtime.pushException(((java.lang.Throwable)(ct$1308)));
                
                //#line 22 "PixelBlurPar.x10"
                throw new java.lang.RuntimeException();
            }finally {{
                 
                 //#line 22 "PixelBlurPar.x10"
                 x10.xrx.Runtime.stopFinish(((x10.xrx.FinishState)(fs$1310)));
             }}
            }
        {
            
            //#line 31 "PixelBlurPar.x10"
            x10.xrx.Runtime.ensureNotInAtomic();
            
            //#line 31 "PixelBlurPar.x10"
            final x10.xrx.FinishState fs$1373 = x10.xrx.Runtime.startFinish();
            
            //#line 31 "PixelBlurPar.x10"
            try {{
                {
                    
                    //#line 31 "PixelBlurPar.x10"
                    final x10.lang.PlaceGroup t$1086 = ((x10.lang.PlaceGroup)(x10.lang.Place.places()));
                    
                    //#line 31 "PixelBlurPar.x10"
                    final x10.lang.Iterator p$1056 = ((x10.lang.Iterable<x10.lang.Place>)t$1086).iterator();
                    {
                        
                        //#line 31 "PixelBlurPar.x10"
                        final double[] pixels$value$1411 = ((double[])pixels.value);
                        
                        //#line 31 "PixelBlurPar.x10"
                        for (;
                             true;
                             ) {
                            
                            //#line 31 "PixelBlurPar.x10"
                            final boolean t$1101 = ((x10.lang.Iterator<x10.lang.Place>)p$1056).hasNext$O();
                            
                            //#line 31 "PixelBlurPar.x10"
                            if (!(t$1101)) {
                                
                                //#line 31 "PixelBlurPar.x10"
                                break;
                            }
                            
                            //#line 31 "PixelBlurPar.x10"
                            final x10.lang.Place p$1182 = ((x10.lang.Place)(((x10.lang.Iterator<x10.lang.Place>)p$1056).next$G()));
                            
                            //#line 33 "PixelBlurPar.x10"
                            final x10.lang.Place t$1183 = ((x10.lang.Place)((clocksRef).home));
                            
                            //#line 33 "PixelBlurPar.x10"
                            final x10.lang.Clock selfClock$1184 = x10.xrx.Runtime.<x10.lang.Clock> evalAt__1$1x10$xrx$Runtime$$T$2$G(x10.lang.Clock.$RTT, ((x10.lang.Place)(t$1183)), ((x10.core.fun.Fun_0_0)(new PixelBlurPar.$Closure$3(clocksRef, p$1182, (PixelBlurPar.$Closure$3.__0$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Clock$2$2$2) null))), ((x10.xrx.Runtime.Profile)(null)));
                            
                            //#line 34 "PixelBlurPar.x10"
                            final long t$1189 = p$1182.id;
                            
                            //#line 34 "PixelBlurPar.x10"
                            final long t$1190 = ((x10.core.Rail<x10.core.Double>)pixels).size;
                            
                            //#line 34 "PixelBlurPar.x10"
                            final long t$1191 = ((t$1190) - (((long)(1L))));
                            
                            //#line 34 "PixelBlurPar.x10"
                            final boolean t$1192 = ((t$1189) < (((long)(t$1191))));
                            
                            //#line 34 "PixelBlurPar.x10"
                            x10.lang.Clock t$1193 =  null;
                            
                            //#line 34 "PixelBlurPar.x10"
                            if (t$1192) {
                                
                                //#line 34 "PixelBlurPar.x10"
                                final x10.lang.Place t$1194 = ((x10.lang.Place)((clocksRef).home));
                                
                                //#line 34 "PixelBlurPar.x10"
                                final x10.lang.Clock t$1195 = x10.xrx.Runtime.<x10.lang.Clock> evalAt__1$1x10$xrx$Runtime$$T$2$G(x10.lang.Clock.$RTT, ((x10.lang.Place)(t$1194)), ((x10.core.fun.Fun_0_0)(new PixelBlurPar.$Closure$4(clocksRef, p$1182, (PixelBlurPar.$Closure$4.__0$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Clock$2$2$2) null))), ((x10.xrx.Runtime.Profile)(null)));
                                
                                //#line 34 "PixelBlurPar.x10"
                                t$1193 = t$1195;
                            } else {
                                
                                //#line 34 "PixelBlurPar.x10"
                                t$1193 = null;
                            }
                            
                            //#line 34 "PixelBlurPar.x10"
                            final x10.lang.Clock sendRightClock$1201 = t$1193;
                            
                            //#line 35 "PixelBlurPar.x10"
                            final long t$1202 = p$1182.id;
                            
                            //#line 35 "PixelBlurPar.x10"
                            final boolean t$1203 = ((t$1202) > (((long)(0L))));
                            
                            //#line 35 "PixelBlurPar.x10"
                            x10.lang.Clock t$1204 =  null;
                            
                            //#line 35 "PixelBlurPar.x10"
                            if (t$1203) {
                                
                                //#line 35 "PixelBlurPar.x10"
                                final x10.lang.Place t$1205 = ((x10.lang.Place)((clocksRef).home));
                                
                                //#line 35 "PixelBlurPar.x10"
                                final x10.lang.Clock t$1206 = x10.xrx.Runtime.<x10.lang.Clock> evalAt__1$1x10$xrx$Runtime$$T$2$G(x10.lang.Clock.$RTT, ((x10.lang.Place)(t$1205)), ((x10.core.fun.Fun_0_0)(new PixelBlurPar.$Closure$5(clocksRef, p$1182, (PixelBlurPar.$Closure$5.__0$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Clock$2$2$2) null))), ((x10.xrx.Runtime.Profile)(null)));
                                
                                //#line 35 "PixelBlurPar.x10"
                                t$1204 = t$1206;
                            } else {
                                
                                //#line 35 "PixelBlurPar.x10"
                                t$1204 = null;
                            }
                            
                            //#line 35 "PixelBlurPar.x10"
                            final x10.lang.Clock sendLeftClock$1212 = t$1204;
                            
                            //#line 36 "PixelBlurPar.x10"
                            final long t$1213 = p$1182.id;
                            
                            //#line 36 "PixelBlurPar.x10"
                            final boolean t$1214 = ((t$1213) > (((long)(0L))));
                            
                            //#line 36 "PixelBlurPar.x10"
                            x10.lang.Clock t$1215 =  null;
                            
                            //#line 36 "PixelBlurPar.x10"
                            if (t$1214) {
                                
                                //#line 36 "PixelBlurPar.x10"
                                final x10.lang.Place t$1216 = ((x10.lang.Place)((clocksRef).home));
                                
                                //#line 36 "PixelBlurPar.x10"
                                final x10.lang.Clock t$1217 = x10.xrx.Runtime.<x10.lang.Clock> evalAt__1$1x10$xrx$Runtime$$T$2$G(x10.lang.Clock.$RTT, ((x10.lang.Place)(t$1216)), ((x10.core.fun.Fun_0_0)(new PixelBlurPar.$Closure$6(clocksRef, p$1182, (PixelBlurPar.$Closure$6.__0$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Clock$2$2$2) null))), ((x10.xrx.Runtime.Profile)(null)));
                                
                                //#line 36 "PixelBlurPar.x10"
                                t$1215 = t$1217;
                            } else {
                                
                                //#line 36 "PixelBlurPar.x10"
                                t$1215 = null;
                            }
                            
                            //#line 36 "PixelBlurPar.x10"
                            final x10.lang.Clock receiveLeftClock$1222 = t$1215;
                            
                            //#line 37 "PixelBlurPar.x10"
                            final long t$1223 = p$1182.id;
                            
                            //#line 37 "PixelBlurPar.x10"
                            final long t$1224 = ((x10.core.Rail<x10.core.Double>)pixels).size;
                            
                            //#line 37 "PixelBlurPar.x10"
                            final long t$1225 = ((t$1224) - (((long)(1L))));
                            
                            //#line 37 "PixelBlurPar.x10"
                            final boolean t$1226 = ((t$1223) < (((long)(t$1225))));
                            
                            //#line 37 "PixelBlurPar.x10"
                            x10.lang.Clock t$1227 =  null;
                            
                            //#line 37 "PixelBlurPar.x10"
                            if (t$1226) {
                                
                                //#line 37 "PixelBlurPar.x10"
                                final x10.lang.Place t$1228 = ((x10.lang.Place)((clocksRef).home));
                                
                                //#line 37 "PixelBlurPar.x10"
                                final x10.lang.Clock t$1229 = x10.xrx.Runtime.<x10.lang.Clock> evalAt__1$1x10$xrx$Runtime$$T$2$G(x10.lang.Clock.$RTT, ((x10.lang.Place)(t$1228)), ((x10.core.fun.Fun_0_0)(new PixelBlurPar.$Closure$7(clocksRef, p$1182, (PixelBlurPar.$Closure$7.__0$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Clock$2$2$2) null))), ((x10.xrx.Runtime.Profile)(null)));
                                
                                //#line 37 "PixelBlurPar.x10"
                                t$1227 = t$1229;
                            } else {
                                
                                //#line 37 "PixelBlurPar.x10"
                                t$1227 = null;
                            }
                            
                            //#line 37 "PixelBlurPar.x10"
                            final x10.lang.Clock receiveRightClock$1234 = t$1227;
                            
                            //#line 38 "PixelBlurPar.x10"
                            final long t$1235 = p$1182.id;
                            
                            //#line 38 "PixelBlurPar.x10"
                            final double myPixel$1236 = ((double)pixels$value$1411[(int)t$1235]);
                            
                            //#line 40 "PixelBlurPar.x10"
                            final long t$1237 = p$1182.id;
                            
                            //#line 40 "PixelBlurPar.x10"
                            final long t$1238 = ((x10.core.Rail<x10.core.Double>)pixels).size;
                            
                            //#line 40 "PixelBlurPar.x10"
                            final long t$1239 = ((t$1238) - (((long)(1L))));
                            
                            //#line 40 "PixelBlurPar.x10"
                            final boolean t$1240 = ((long) t$1237) == ((long) t$1239);
                            
                            //#line 40 "PixelBlurPar.x10"
                            if (t$1240) {
                                
                                //#line 40 "PixelBlurPar.x10"
                                x10.xrx.Runtime.runAsync__1$1x10$lang$Clock$2(((x10.lang.Place)(p$1182)), ((x10.core.Rail)(x10.runtime.impl.java.ArrayUtils.<x10.lang.Clock> makeRailFromJavaArray(x10.lang.Clock.$RTT, new x10.lang.Clock[] {selfClock$1184, receiveLeftClock$1222, sendLeftClock$1212}))), ((x10.core.fun.VoidFun_0_0)(new PixelBlurPar.$Closure$10(p$1182, myPixel$1236, blurredPixelsRef, pixelRailsRef, selfClock$1184, receiveLeftClock$1222, receiveRightClock$1234, sendLeftClock$1212, sendRightClock$1201, (PixelBlurPar.$Closure$10.__2$1x10$lang$Rail$1x10$lang$Double$2$2__3$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2) null))), ((x10.xrx.Runtime.Profile)(null)));
                            } else {
                                
                                //#line 50 "PixelBlurPar.x10"
                                final long t$1257 = p$1182.id;
                                
                                //#line 50 "PixelBlurPar.x10"
                                final boolean t$1258 = ((long) t$1257) == ((long) 0L);
                                
                                //#line 50 "PixelBlurPar.x10"
                                if (t$1258) {
                                    
                                    //#line 50 "PixelBlurPar.x10"
                                    x10.xrx.Runtime.runAsync__1$1x10$lang$Clock$2(((x10.lang.Place)(p$1182)), ((x10.core.Rail)(x10.runtime.impl.java.ArrayUtils.<x10.lang.Clock> makeRailFromJavaArray(x10.lang.Clock.$RTT, new x10.lang.Clock[] {selfClock$1184, receiveRightClock$1234, sendRightClock$1201}))), ((x10.core.fun.VoidFun_0_0)(new PixelBlurPar.$Closure$13(p$1182, myPixel$1236, blurredPixelsRef, pixelRailsRef, selfClock$1184, receiveLeftClock$1222, receiveRightClock$1234, sendLeftClock$1212, sendRightClock$1201, (PixelBlurPar.$Closure$13.__2$1x10$lang$Rail$1x10$lang$Double$2$2__3$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2) null))), ((x10.xrx.Runtime.Profile)(null)));
                                } else {
                                    
                                    //#line 60 "PixelBlurPar.x10"
                                    x10.xrx.Runtime.runAsync__1$1x10$lang$Clock$2(((x10.lang.Place)(p$1182)), ((x10.core.Rail)(x10.runtime.impl.java.ArrayUtils.<x10.lang.Clock> makeRailFromJavaArray(x10.lang.Clock.$RTT, new x10.lang.Clock[] {selfClock$1184, receiveLeftClock$1222, receiveRightClock$1234, sendLeftClock$1212, sendRightClock$1201}))), ((x10.core.fun.VoidFun_0_0)(new PixelBlurPar.$Closure$16(p$1182, myPixel$1236, blurredPixelsRef, pixelRailsRef, selfClock$1184, receiveLeftClock$1222, receiveRightClock$1234, sendLeftClock$1212, sendRightClock$1201, (PixelBlurPar.$Closure$16.__2$1x10$lang$Rail$1x10$lang$Double$2$2__3$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2) null))), ((x10.xrx.Runtime.Profile)(null)));
                                }
                            }
                        }
                    }
                }
            }}catch (java.lang.Throwable ct$1371) {
                
                //#line 31 "PixelBlurPar.x10"
                x10.xrx.Runtime.pushException(((java.lang.Throwable)(ct$1371)));
                
                //#line 31 "PixelBlurPar.x10"
                throw new java.lang.RuntimeException();
            }finally {{
                 
                 //#line 31 "PixelBlurPar.x10"
                 x10.xrx.Runtime.stopFinish(((x10.xrx.FinishState)(fs$1373)));
             }}
            }
        
        //#line 72 "PixelBlurPar.x10"
        final x10.lang.Place t$1105 = ((x10.lang.Place)((pixelRailsRef).home));
        {
            
            //#line 72 "PixelBlurPar.x10"
            x10.xrx.Runtime.runAt(((x10.lang.Place)(t$1105)), ((x10.core.fun.VoidFun_0_0)(new PixelBlurPar.$Closure$17(pixelRailsRef, (PixelBlurPar.$Closure$17.__0$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2) null))), ((x10.xrx.Runtime.Profile)(null)));
        }
        
        //#line 74 "PixelBlurPar.x10"
        final x10.core.Rail t$1106 = ((x10.core.Rail)(blurredPixels));
        
        //#line 74 "PixelBlurPar.x10"
        return t$1106;
        }
        
        public static x10.core.Rail pixelBlur$P__0$1x10$lang$Double$2(final x10.core.Rail<x10.core.Double> pixels) {
            return PixelBlurPar.pixelBlur__0$1x10$lang$Double$2(((x10.core.Rail)(pixels)));
        }
        
        
        //#line 77 "PixelBlurPar.x10"
        private static void sendAndReceiveValues__2$1x10$lang$Rail$1x10$lang$Double$2$2__3$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2(final x10.lang.Place p, final double myPixel, final x10.core.GlobalRef<x10.core.Rail<x10.core.Double>> blurredPixelsRef, final x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>> pixelRailsRef, final x10.lang.Clock selfClock, final x10.lang.Clock receiveLeftClock, final x10.lang.Clock receiveRightClock, final x10.lang.Clock sendLeftClock, final x10.lang.Clock sendRightClock) {
            
            //#line 80 "PixelBlurPar.x10"
            x10.xrx.Runtime.runAsync__0$1x10$lang$Clock$2(((x10.core.Rail)(x10.runtime.impl.java.ArrayUtils.<x10.lang.Clock> makeRailFromJavaArray(x10.lang.Clock.$RTT, new x10.lang.Clock[] {selfClock}))), ((x10.core.fun.VoidFun_0_0)(new PixelBlurPar.$Closure$19(p, pixelRailsRef, myPixel, selfClock, (PixelBlurPar.$Closure$19.__1$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2) null))));
            
            //#line 85 "PixelBlurPar.x10"
            final boolean t$1123 = ((sendRightClock) != (null));
            
            //#line 85 "PixelBlurPar.x10"
            if (t$1123) {
                
                //#line 86 "PixelBlurPar.x10"
                final long t$1113 = p.id;
                
                //#line 86 "PixelBlurPar.x10"
                final long t$1114 = ((t$1113) + (((long)(1L))));
                
                //#line 86 "PixelBlurPar.x10"
                final x10.lang.Place t$1122 = ((x10.lang.Place)(new x10.lang.Place((java.lang.System[]) null).x10$lang$Place$$init$S(t$1114)));
                
                //#line 86 "PixelBlurPar.x10"
                x10.xrx.Runtime.runAsync__1$1x10$lang$Clock$2(((x10.lang.Place)(t$1122)), ((x10.core.Rail)(x10.runtime.impl.java.ArrayUtils.<x10.lang.Clock> makeRailFromJavaArray(x10.lang.Clock.$RTT, new x10.lang.Clock[] {sendRightClock}))), ((x10.core.fun.VoidFun_0_0)(new PixelBlurPar.$Closure$21(p, pixelRailsRef, myPixel, sendRightClock, (PixelBlurPar.$Closure$21.__1$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2) null))), ((x10.xrx.Runtime.Profile)(null)));
            }
            
            //#line 92 "PixelBlurPar.x10"
            final boolean t$1134 = ((sendLeftClock) != (null));
            
            //#line 92 "PixelBlurPar.x10"
            if (t$1134) {
                
                //#line 93 "PixelBlurPar.x10"
                final long t$1124 = p.id;
                
                //#line 93 "PixelBlurPar.x10"
                final long t$1125 = ((t$1124) - (((long)(1L))));
                
                //#line 93 "PixelBlurPar.x10"
                final x10.lang.Place t$1133 = ((x10.lang.Place)(new x10.lang.Place((java.lang.System[]) null).x10$lang$Place$$init$S(t$1125)));
                
                //#line 93 "PixelBlurPar.x10"
                x10.xrx.Runtime.runAsync__1$1x10$lang$Clock$2(((x10.lang.Place)(t$1133)), ((x10.core.Rail)(x10.runtime.impl.java.ArrayUtils.<x10.lang.Clock> makeRailFromJavaArray(x10.lang.Clock.$RTT, new x10.lang.Clock[] {sendLeftClock}))), ((x10.core.fun.VoidFun_0_0)(new PixelBlurPar.$Closure$23(p, pixelRailsRef, myPixel, sendLeftClock, (PixelBlurPar.$Closure$23.__1$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2) null))), ((x10.xrx.Runtime.Profile)(null)));
            }
            {
                
                //#line 100 "PixelBlurPar.x10"
                x10.xrx.Runtime.ensureNotInAtomic();
                
                //#line 100 "PixelBlurPar.x10"
                final x10.xrx.FinishState fs$1406 = x10.xrx.Runtime.startFinish();
                
                //#line 100 "PixelBlurPar.x10"
                try {{
                    {
                        
                        //#line 101 "PixelBlurPar.x10"
                        final boolean t$1135 = ((receiveRightClock) != (null));
                        
                        //#line 101 "PixelBlurPar.x10"
                        if (t$1135) {
                            
                            //#line 101 "PixelBlurPar.x10"
                            receiveRightClock.resume();
                        }
                        
                        //#line 102 "PixelBlurPar.x10"
                        final x10.io.Printer t$1136 = ((x10.io.Printer)(x10.io.Console.get$OUT()));
                        
                        //#line 102 "PixelBlurPar.x10"
                        final java.lang.String t$1137 = ((p) + (" RECEIVED FROM RIGHT"));
                        
                        //#line 102 "PixelBlurPar.x10"
                        t$1136.println(((java.lang.Object)(t$1137)));
                        
                        //#line 103 "PixelBlurPar.x10"
                        selfClock.resume();
                        
                        //#line 104 "PixelBlurPar.x10"
                        final x10.io.Printer t$1138 = ((x10.io.Printer)(x10.io.Console.get$OUT()));
                        
                        //#line 104 "PixelBlurPar.x10"
                        final java.lang.String t$1139 = ((p) + (" RECEIVED FROM SELF"));
                        
                        //#line 104 "PixelBlurPar.x10"
                        t$1138.println(((java.lang.Object)(t$1139)));
                        
                        //#line 105 "PixelBlurPar.x10"
                        final boolean t$1140 = ((receiveLeftClock) != (null));
                        
                        //#line 105 "PixelBlurPar.x10"
                        if (t$1140) {
                            
                            //#line 105 "PixelBlurPar.x10"
                            receiveLeftClock.resume();
                        }
                        
                        //#line 106 "PixelBlurPar.x10"
                        final x10.io.Printer t$1141 = ((x10.io.Printer)(x10.io.Console.get$OUT()));
                        
                        //#line 106 "PixelBlurPar.x10"
                        final java.lang.String t$1142 = ((p) + (" RECEVED FROM LEFT"));
                        
                        //#line 106 "PixelBlurPar.x10"
                        t$1141.println(((java.lang.Object)(t$1142)));
                        
                        //#line 107 "PixelBlurPar.x10"
                        final boolean t$1143 = ((receiveRightClock) != (null));
                        
                        //#line 107 "PixelBlurPar.x10"
                        if (t$1143) {
                            
                            //#line 107 "PixelBlurPar.x10"
                            receiveRightClock.advance();
                        }
                        
                        //#line 108 "PixelBlurPar.x10"
                        final x10.io.Printer t$1144 = ((x10.io.Printer)(x10.io.Console.get$OUT()));
                        
                        //#line 108 "PixelBlurPar.x10"
                        final java.lang.String t$1145 = ((p) + (" RECEIVED FROM RIGHT"));
                        
                        //#line 108 "PixelBlurPar.x10"
                        t$1144.println(((java.lang.Object)(t$1145)));
                        
                        //#line 109 "PixelBlurPar.x10"
                        selfClock.advance();
                        
                        //#line 110 "PixelBlurPar.x10"
                        final x10.io.Printer t$1146 = ((x10.io.Printer)(x10.io.Console.get$OUT()));
                        
                        //#line 110 "PixelBlurPar.x10"
                        final java.lang.String t$1147 = ((p) + (" RECEIVED FROM SELF"));
                        
                        //#line 110 "PixelBlurPar.x10"
                        t$1146.println(((java.lang.Object)(t$1147)));
                        
                        //#line 111 "PixelBlurPar.x10"
                        final boolean t$1148 = ((receiveLeftClock) != (null));
                        
                        //#line 111 "PixelBlurPar.x10"
                        if (t$1148) {
                            
                            //#line 111 "PixelBlurPar.x10"
                            receiveLeftClock.advance();
                        }
                        
                        //#line 112 "PixelBlurPar.x10"
                        final x10.io.Printer t$1149 = ((x10.io.Printer)(x10.io.Console.get$OUT()));
                        
                        //#line 112 "PixelBlurPar.x10"
                        final java.lang.String t$1150 = ((p) + (" RECEVED FROM LEFT"));
                        
                        //#line 112 "PixelBlurPar.x10"
                        t$1149.println(((java.lang.Object)(t$1150)));
                    }
                }}catch (java.lang.Throwable ct$1404) {
                    
                    //#line 100 "PixelBlurPar.x10"
                    x10.xrx.Runtime.pushException(((java.lang.Throwable)(ct$1404)));
                    
                    //#line 100 "PixelBlurPar.x10"
                    throw new java.lang.RuntimeException();
                }finally {{
                     
                     //#line 100 "PixelBlurPar.x10"
                     x10.xrx.Runtime.stopFinish(((x10.xrx.FinishState)(fs$1406)));
                 }}
                }
            }
        
        public static void sendAndReceiveValues$P__2$1x10$lang$Rail$1x10$lang$Double$2$2__3$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2(final x10.lang.Place p, final double myPixel, final x10.core.GlobalRef<x10.core.Rail<x10.core.Double>> blurredPixelsRef, final x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>> pixelRailsRef, final x10.lang.Clock selfClock, final x10.lang.Clock receiveLeftClock, final x10.lang.Clock receiveRightClock, final x10.lang.Clock sendLeftClock, final x10.lang.Clock sendRightClock) {
            PixelBlurPar.sendAndReceiveValues__2$1x10$lang$Rail$1x10$lang$Double$2$2__3$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2(((x10.lang.Place)(p)), (double)(myPixel), ((x10.core.GlobalRef)(blurredPixelsRef)), ((x10.core.GlobalRef)(pixelRailsRef)), ((x10.lang.Clock)(selfClock)), ((x10.lang.Clock)(receiveLeftClock)), ((x10.lang.Clock)(receiveRightClock)), ((x10.lang.Clock)(sendLeftClock)), ((x10.lang.Clock)(sendRightClock)));
        }
        
        
        //#line 3 "PixelBlurPar.x10"
        final public PixelBlurPar PixelBlurPar$$this$PixelBlurPar() {
            
            //#line 3 "PixelBlurPar.x10"
            return PixelBlurPar.this;
        }
        
        
        //#line 3 "PixelBlurPar.x10"
        // creation method for java code (1-phase java constructor)
        public PixelBlurPar() {
            this((java.lang.System[]) null);
            PixelBlurPar$$init$S();
        }
        
        // constructor for non-virtual call
        final public PixelBlurPar PixelBlurPar$$init$S() {
             {
                
                //#line 3 "PixelBlurPar.x10"
                
                
                //#line 3 "PixelBlurPar.x10"
                this.__fieldInitializers_PixelBlurPar();
            }
            return this;
        }
        
        
        
        //#line 3 "PixelBlurPar.x10"
        final public void __fieldInitializers_PixelBlurPar() {
            
        }
        
        @x10.runtime.impl.java.X10Generated
        final public static class $Closure$0 extends x10.core.Ref implements x10.core.fun.Fun_0_0, x10.serialization.X10JavaSerializable
        {
            public static final x10.rtt.RuntimeType<$Closure$0> $RTT = 
                x10.rtt.StaticFunType.<$Closure$0> make($Closure$0.class,
                                                        new x10.rtt.Type[] {
                                                            x10.rtt.ParameterizedType.make(x10.core.fun.Fun_0_0.$RTT, x10.rtt.ParameterizedType.make(x10.core.Rail.$RTT, x10.rtt.Types.DOUBLE))
                                                        });
            
            public x10.rtt.RuntimeType<?> $getRTT() { return $RTT; }
            
            public x10.rtt.Type<?> $getParam(int i) { return null; }
            
            private Object writeReplace() throws java.io.ObjectStreamException {
                return new x10.serialization.SerializationProxy(this);
            }
            
            public static x10.serialization.X10JavaSerializable $_deserialize_body(PixelBlurPar.$Closure$0 $_obj, x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
                if (x10.runtime.impl.java.Runtime.TRACE_SER) { x10.runtime.impl.java.Runtime.printTraceMessage("X10JavaSerializable: $_deserialize_body() of " + $Closure$0.class + " calling"); } 
                return $_obj;
            }
            
            public static x10.serialization.X10JavaSerializable $_deserializer(x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
                PixelBlurPar.$Closure$0 $_obj = new PixelBlurPar.$Closure$0((java.lang.System[]) null);
                $deserializer.record_reference($_obj);
                return $_deserialize_body($_obj, $deserializer);
            }
            
            public void $_serialize(x10.serialization.X10JavaSerializer $serializer) throws java.io.IOException {
                
            }
            
            // constructor just for allocation
            public $Closure$0(final java.lang.System[] $dummy) {
                
            }
            
            // bridge for method abstract public ()=>U.operator()():U
            public x10.core.Rail $apply$G() {
                return $apply();
            }
            
            
        
            
            public x10.core.Rail $apply() {
                
                //#line 23 "PixelBlurPar.x10"
                try {{
                    
                    //#line 23 "PixelBlurPar.x10"
                    final x10.core.Rail t$1177 = ((x10.core.Rail)(new x10.core.Rail<x10.core.Double>(x10.rtt.Types.DOUBLE, ((long)(3L)))));
                    
                    //#line 23 "PixelBlurPar.x10"
                    return t$1177;
                }}catch (java.lang.Throwable __lowerer__var__0__) {
                    
                    //#line 23 "PixelBlurPar.x10"
                    x10.core.Rail __lowerer__var__1__ = ((x10.core.Rail)(x10.xrx.Runtime.<x10.core.Rail<x10.core.Double>> wrapAtChecked$G(x10.rtt.ParameterizedType.make(x10.core.Rail.$RTT, x10.rtt.Types.DOUBLE), ((java.lang.Throwable)(__lowerer__var__0__)))));
                    
                    //#line 23 "PixelBlurPar.x10"
                    return __lowerer__var__1__;
                }
            }
            
            public $Closure$0() {
                 {
                    
                }
            }
            
        }
        
        @x10.runtime.impl.java.X10Generated
        final public static class $Closure$1 extends x10.core.Ref implements x10.core.fun.Fun_0_0, x10.serialization.X10JavaSerializable
        {
            public static final x10.rtt.RuntimeType<$Closure$1> $RTT = 
                x10.rtt.StaticFunType.<$Closure$1> make($Closure$1.class,
                                                        new x10.rtt.Type[] {
                                                            x10.rtt.ParameterizedType.make(x10.core.fun.Fun_0_0.$RTT, x10.rtt.ParameterizedType.make(x10.core.Rail.$RTT, x10.lang.Clock.$RTT))
                                                        });
            
            public x10.rtt.RuntimeType<?> $getRTT() { return $RTT; }
            
            public x10.rtt.Type<?> $getParam(int i) { return null; }
            
            private Object writeReplace() throws java.io.ObjectStreamException {
                return new x10.serialization.SerializationProxy(this);
            }
            
            public static x10.serialization.X10JavaSerializable $_deserialize_body(PixelBlurPar.$Closure$1 $_obj, x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
                if (x10.runtime.impl.java.Runtime.TRACE_SER) { x10.runtime.impl.java.Runtime.printTraceMessage("X10JavaSerializable: $_deserialize_body() of " + $Closure$1.class + " calling"); } 
                return $_obj;
            }
            
            public static x10.serialization.X10JavaSerializable $_deserializer(x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
                PixelBlurPar.$Closure$1 $_obj = new PixelBlurPar.$Closure$1((java.lang.System[]) null);
                $deserializer.record_reference($_obj);
                return $_deserialize_body($_obj, $deserializer);
            }
            
            public void $_serialize(x10.serialization.X10JavaSerializer $serializer) throws java.io.IOException {
                
            }
            
            // constructor just for allocation
            public $Closure$1(final java.lang.System[] $dummy) {
                
            }
            
            // bridge for method abstract public ()=>U.operator()():U
            public x10.core.Rail $apply$G() {
                return $apply();
            }
            
            
        
            
            public x10.core.Rail $apply() {
                
                //#line 24 "PixelBlurPar.x10"
                try {{
                    
                    //#line 24 "PixelBlurPar.x10"
                    final x10.core.Rail t$1179 = ((x10.core.Rail)(new x10.core.Rail<x10.lang.Clock>(x10.lang.Clock.$RTT, ((long)(3L)))));
                    
                    //#line 24 "PixelBlurPar.x10"
                    return t$1179;
                }}catch (java.lang.Throwable __lowerer__var__2__) {
                    
                    //#line 24 "PixelBlurPar.x10"
                    x10.core.Rail __lowerer__var__3__ = ((x10.core.Rail)(x10.xrx.Runtime.<x10.core.Rail<x10.lang.Clock>> wrapAtChecked$G(x10.rtt.ParameterizedType.make(x10.core.Rail.$RTT, x10.lang.Clock.$RTT), ((java.lang.Throwable)(__lowerer__var__2__)))));
                    
                    //#line 24 "PixelBlurPar.x10"
                    return __lowerer__var__3__;
                }
            }
            
            public $Closure$1() {
                 {
                    
                }
            }
            
        }
        
        @x10.runtime.impl.java.X10Generated
        final public static class $Closure$2 extends x10.core.Ref implements x10.core.fun.Fun_0_0, x10.serialization.X10JavaSerializable
        {
            public static final x10.rtt.RuntimeType<$Closure$2> $RTT = 
                x10.rtt.StaticFunType.<$Closure$2> make($Closure$2.class,
                                                        new x10.rtt.Type[] {
                                                            x10.rtt.ParameterizedType.make(x10.core.fun.Fun_0_0.$RTT, x10.lang.Clock.$RTT)
                                                        });
            
            public x10.rtt.RuntimeType<?> $getRTT() { return $RTT; }
            
            public x10.rtt.Type<?> $getParam(int i) { return null; }
            
            private Object writeReplace() throws java.io.ObjectStreamException {
                return new x10.serialization.SerializationProxy(this);
            }
            
            public static x10.serialization.X10JavaSerializable $_deserialize_body(PixelBlurPar.$Closure$2 $_obj, x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
                if (x10.runtime.impl.java.Runtime.TRACE_SER) { x10.runtime.impl.java.Runtime.printTraceMessage("X10JavaSerializable: $_deserialize_body() of " + $Closure$2.class + " calling"); } 
                return $_obj;
            }
            
            public static x10.serialization.X10JavaSerializable $_deserializer(x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
                PixelBlurPar.$Closure$2 $_obj = new PixelBlurPar.$Closure$2((java.lang.System[]) null);
                $deserializer.record_reference($_obj);
                return $_deserialize_body($_obj, $deserializer);
            }
            
            public void $_serialize(x10.serialization.X10JavaSerializer $serializer) throws java.io.IOException {
                
            }
            
            // constructor just for allocation
            public $Closure$2(final java.lang.System[] $dummy) {
                
            }
            
            // bridge for method abstract public ()=>U.operator()():U
            public x10.lang.Clock $apply$G() {
                return $apply();
            }
            
            
        
            
            public x10.lang.Clock $apply() {
                
                //#line 26 "PixelBlurPar.x10"
                try {{
                    
                    //#line 26 "PixelBlurPar.x10"
                    final x10.lang.Clock t$1163 = x10.lang.Clock.make();
                    
                    //#line 26 "PixelBlurPar.x10"
                    return t$1163;
                }}catch (java.lang.Throwable __lowerer__var__4__) {
                    
                    //#line 26 "PixelBlurPar.x10"
                    x10.lang.Clock __lowerer__var__5__ = ((x10.lang.Clock)(x10.xrx.Runtime.<x10.lang.Clock> wrapAtChecked$G(x10.lang.Clock.$RTT, ((java.lang.Throwable)(__lowerer__var__4__)))));
                    
                    //#line 26 "PixelBlurPar.x10"
                    return __lowerer__var__5__;
                }
            }
            
            public $Closure$2() {
                 {
                    
                }
            }
            
        }
        
        @x10.runtime.impl.java.X10Generated
        final public static class $Closure$3 extends x10.core.Ref implements x10.core.fun.Fun_0_0, x10.serialization.X10JavaSerializable
        {
            public static final x10.rtt.RuntimeType<$Closure$3> $RTT = 
                x10.rtt.StaticFunType.<$Closure$3> make($Closure$3.class,
                                                        new x10.rtt.Type[] {
                                                            x10.rtt.ParameterizedType.make(x10.core.fun.Fun_0_0.$RTT, x10.lang.Clock.$RTT)
                                                        });
            
            public x10.rtt.RuntimeType<?> $getRTT() { return $RTT; }
            
            public x10.rtt.Type<?> $getParam(int i) { return null; }
            
            private Object writeReplace() throws java.io.ObjectStreamException {
                return new x10.serialization.SerializationProxy(this);
            }
            
            public static x10.serialization.X10JavaSerializable $_deserialize_body(PixelBlurPar.$Closure$3 $_obj, x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
                if (x10.runtime.impl.java.Runtime.TRACE_SER) { x10.runtime.impl.java.Runtime.printTraceMessage("X10JavaSerializable: $_deserialize_body() of " + $Closure$3.class + " calling"); } 
                $_obj.clocksRef = $deserializer.readObject();
                $_obj.p$1182 = $deserializer.readObject();
                return $_obj;
            }
            
            public static x10.serialization.X10JavaSerializable $_deserializer(x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
                PixelBlurPar.$Closure$3 $_obj = new PixelBlurPar.$Closure$3((java.lang.System[]) null);
                $deserializer.record_reference($_obj);
                return $_deserialize_body($_obj, $deserializer);
            }
            
            public void $_serialize(x10.serialization.X10JavaSerializer $serializer) throws java.io.IOException {
                $serializer.write(this.clocksRef);
                $serializer.write(this.p$1182);
                
            }
            
            // constructor just for allocation
            public $Closure$3(final java.lang.System[] $dummy) {
                
            }
            
            // bridge for method abstract public ()=>U.operator()():U
            public x10.lang.Clock $apply$G() {
                return $apply();
            }
            
            // synthetic type for parameter mangling
            public static final class __0$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Clock$2$2$2 {}
            
        
            
            public x10.lang.Clock $apply() {
                
                //#line 33 "PixelBlurPar.x10"
                try {{
                    
                    //#line 33 "PixelBlurPar.x10"
                    final x10.core.Rail t$1185 = (((x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.lang.Clock>>>)(this.clocksRef))).$apply$G();
                    
                    //#line 33 "PixelBlurPar.x10"
                    final long t$1186 = this.p$1182.id;
                    
                    //#line 33 "PixelBlurPar.x10"
                    final x10.core.Rail t$1187 = ((x10.core.Rail[])t$1185.value)[(int)t$1186];
                    
                    //#line 33 "PixelBlurPar.x10"
                    final x10.lang.Clock t$1188 = ((x10.lang.Clock[])t$1187.value)[(int)1L];
                    
                    //#line 33 "PixelBlurPar.x10"
                    return t$1188;
                }}catch (java.lang.Throwable __lowerer__var__0__) {
                    
                    //#line 33 "PixelBlurPar.x10"
                    x10.lang.Clock __lowerer__var__1__ = ((x10.lang.Clock)(x10.xrx.Runtime.<x10.lang.Clock> wrapAtChecked$G(x10.lang.Clock.$RTT, ((java.lang.Throwable)(__lowerer__var__0__)))));
                    
                    //#line 33 "PixelBlurPar.x10"
                    return __lowerer__var__1__;
                }
            }
            
            public x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.lang.Clock>>> clocksRef;
            public x10.lang.Place p$1182;
            
            public $Closure$3(final x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.lang.Clock>>> clocksRef, final x10.lang.Place p$1182, __0$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Clock$2$2$2 $dummy) {
                 {
                    this.clocksRef = ((x10.core.GlobalRef)(clocksRef));
                    this.p$1182 = ((x10.lang.Place)(p$1182));
                }
            }
            
        }
        
        @x10.runtime.impl.java.X10Generated
        final public static class $Closure$4 extends x10.core.Ref implements x10.core.fun.Fun_0_0, x10.serialization.X10JavaSerializable
        {
            public static final x10.rtt.RuntimeType<$Closure$4> $RTT = 
                x10.rtt.StaticFunType.<$Closure$4> make($Closure$4.class,
                                                        new x10.rtt.Type[] {
                                                            x10.rtt.ParameterizedType.make(x10.core.fun.Fun_0_0.$RTT, x10.lang.Clock.$RTT)
                                                        });
            
            public x10.rtt.RuntimeType<?> $getRTT() { return $RTT; }
            
            public x10.rtt.Type<?> $getParam(int i) { return null; }
            
            private Object writeReplace() throws java.io.ObjectStreamException {
                return new x10.serialization.SerializationProxy(this);
            }
            
            public static x10.serialization.X10JavaSerializable $_deserialize_body(PixelBlurPar.$Closure$4 $_obj, x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
                if (x10.runtime.impl.java.Runtime.TRACE_SER) { x10.runtime.impl.java.Runtime.printTraceMessage("X10JavaSerializable: $_deserialize_body() of " + $Closure$4.class + " calling"); } 
                $_obj.clocksRef = $deserializer.readObject();
                $_obj.p$1182 = $deserializer.readObject();
                return $_obj;
            }
            
            public static x10.serialization.X10JavaSerializable $_deserializer(x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
                PixelBlurPar.$Closure$4 $_obj = new PixelBlurPar.$Closure$4((java.lang.System[]) null);
                $deserializer.record_reference($_obj);
                return $_deserialize_body($_obj, $deserializer);
            }
            
            public void $_serialize(x10.serialization.X10JavaSerializer $serializer) throws java.io.IOException {
                $serializer.write(this.clocksRef);
                $serializer.write(this.p$1182);
                
            }
            
            // constructor just for allocation
            public $Closure$4(final java.lang.System[] $dummy) {
                
            }
            
            // bridge for method abstract public ()=>U.operator()():U
            public x10.lang.Clock $apply$G() {
                return $apply();
            }
            
            // synthetic type for parameter mangling
            public static final class __0$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Clock$2$2$2 {}
            
        
            
            public x10.lang.Clock $apply() {
                
                //#line 34 "PixelBlurPar.x10"
                try {{
                    
                    //#line 34 "PixelBlurPar.x10"
                    final x10.core.Rail t$1196 = (((x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.lang.Clock>>>)(this.clocksRef))).$apply$G();
                    
                    //#line 34 "PixelBlurPar.x10"
                    final long t$1197 = this.p$1182.id;
                    
                    //#line 34 "PixelBlurPar.x10"
                    final long t$1198 = ((t$1197) + (((long)(1L))));
                    
                    //#line 34 "PixelBlurPar.x10"
                    final x10.core.Rail t$1199 = ((x10.core.Rail[])t$1196.value)[(int)t$1198];
                    
                    //#line 34 "PixelBlurPar.x10"
                    final x10.lang.Clock t$1200 = ((x10.lang.Clock[])t$1199.value)[(int)0L];
                    
                    //#line 34 "PixelBlurPar.x10"
                    return t$1200;
                }}catch (java.lang.Throwable __lowerer__var__2__) {
                    
                    //#line 34 "PixelBlurPar.x10"
                    x10.lang.Clock __lowerer__var__3__ = ((x10.lang.Clock)(x10.xrx.Runtime.<x10.lang.Clock> wrapAtChecked$G(x10.lang.Clock.$RTT, ((java.lang.Throwable)(__lowerer__var__2__)))));
                    
                    //#line 34 "PixelBlurPar.x10"
                    return __lowerer__var__3__;
                }
            }
            
            public x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.lang.Clock>>> clocksRef;
            public x10.lang.Place p$1182;
            
            public $Closure$4(final x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.lang.Clock>>> clocksRef, final x10.lang.Place p$1182, __0$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Clock$2$2$2 $dummy) {
                 {
                    this.clocksRef = ((x10.core.GlobalRef)(clocksRef));
                    this.p$1182 = ((x10.lang.Place)(p$1182));
                }
            }
            
        }
        
        @x10.runtime.impl.java.X10Generated
        final public static class $Closure$5 extends x10.core.Ref implements x10.core.fun.Fun_0_0, x10.serialization.X10JavaSerializable
        {
            public static final x10.rtt.RuntimeType<$Closure$5> $RTT = 
                x10.rtt.StaticFunType.<$Closure$5> make($Closure$5.class,
                                                        new x10.rtt.Type[] {
                                                            x10.rtt.ParameterizedType.make(x10.core.fun.Fun_0_0.$RTT, x10.lang.Clock.$RTT)
                                                        });
            
            public x10.rtt.RuntimeType<?> $getRTT() { return $RTT; }
            
            public x10.rtt.Type<?> $getParam(int i) { return null; }
            
            private Object writeReplace() throws java.io.ObjectStreamException {
                return new x10.serialization.SerializationProxy(this);
            }
            
            public static x10.serialization.X10JavaSerializable $_deserialize_body(PixelBlurPar.$Closure$5 $_obj, x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
                if (x10.runtime.impl.java.Runtime.TRACE_SER) { x10.runtime.impl.java.Runtime.printTraceMessage("X10JavaSerializable: $_deserialize_body() of " + $Closure$5.class + " calling"); } 
                $_obj.clocksRef = $deserializer.readObject();
                $_obj.p$1182 = $deserializer.readObject();
                return $_obj;
            }
            
            public static x10.serialization.X10JavaSerializable $_deserializer(x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
                PixelBlurPar.$Closure$5 $_obj = new PixelBlurPar.$Closure$5((java.lang.System[]) null);
                $deserializer.record_reference($_obj);
                return $_deserialize_body($_obj, $deserializer);
            }
            
            public void $_serialize(x10.serialization.X10JavaSerializer $serializer) throws java.io.IOException {
                $serializer.write(this.clocksRef);
                $serializer.write(this.p$1182);
                
            }
            
            // constructor just for allocation
            public $Closure$5(final java.lang.System[] $dummy) {
                
            }
            
            // bridge for method abstract public ()=>U.operator()():U
            public x10.lang.Clock $apply$G() {
                return $apply();
            }
            
            // synthetic type for parameter mangling
            public static final class __0$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Clock$2$2$2 {}
            
        
            
            public x10.lang.Clock $apply() {
                
                //#line 35 "PixelBlurPar.x10"
                try {{
                    
                    //#line 35 "PixelBlurPar.x10"
                    final x10.core.Rail t$1207 = (((x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.lang.Clock>>>)(this.clocksRef))).$apply$G();
                    
                    //#line 35 "PixelBlurPar.x10"
                    final long t$1208 = this.p$1182.id;
                    
                    //#line 35 "PixelBlurPar.x10"
                    final long t$1209 = ((t$1208) - (((long)(1L))));
                    
                    //#line 35 "PixelBlurPar.x10"
                    final x10.core.Rail t$1210 = ((x10.core.Rail[])t$1207.value)[(int)t$1209];
                    
                    //#line 35 "PixelBlurPar.x10"
                    final x10.lang.Clock t$1211 = ((x10.lang.Clock[])t$1210.value)[(int)2L];
                    
                    //#line 35 "PixelBlurPar.x10"
                    return t$1211;
                }}catch (java.lang.Throwable __lowerer__var__2__) {
                    
                    //#line 35 "PixelBlurPar.x10"
                    x10.lang.Clock __lowerer__var__3__ = ((x10.lang.Clock)(x10.xrx.Runtime.<x10.lang.Clock> wrapAtChecked$G(x10.lang.Clock.$RTT, ((java.lang.Throwable)(__lowerer__var__2__)))));
                    
                    //#line 35 "PixelBlurPar.x10"
                    return __lowerer__var__3__;
                }
            }
            
            public x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.lang.Clock>>> clocksRef;
            public x10.lang.Place p$1182;
            
            public $Closure$5(final x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.lang.Clock>>> clocksRef, final x10.lang.Place p$1182, __0$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Clock$2$2$2 $dummy) {
                 {
                    this.clocksRef = ((x10.core.GlobalRef)(clocksRef));
                    this.p$1182 = ((x10.lang.Place)(p$1182));
                }
            }
            
        }
        
        @x10.runtime.impl.java.X10Generated
        final public static class $Closure$6 extends x10.core.Ref implements x10.core.fun.Fun_0_0, x10.serialization.X10JavaSerializable
        {
            public static final x10.rtt.RuntimeType<$Closure$6> $RTT = 
                x10.rtt.StaticFunType.<$Closure$6> make($Closure$6.class,
                                                        new x10.rtt.Type[] {
                                                            x10.rtt.ParameterizedType.make(x10.core.fun.Fun_0_0.$RTT, x10.lang.Clock.$RTT)
                                                        });
            
            public x10.rtt.RuntimeType<?> $getRTT() { return $RTT; }
            
            public x10.rtt.Type<?> $getParam(int i) { return null; }
            
            private Object writeReplace() throws java.io.ObjectStreamException {
                return new x10.serialization.SerializationProxy(this);
            }
            
            public static x10.serialization.X10JavaSerializable $_deserialize_body(PixelBlurPar.$Closure$6 $_obj, x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
                if (x10.runtime.impl.java.Runtime.TRACE_SER) { x10.runtime.impl.java.Runtime.printTraceMessage("X10JavaSerializable: $_deserialize_body() of " + $Closure$6.class + " calling"); } 
                $_obj.clocksRef = $deserializer.readObject();
                $_obj.p$1182 = $deserializer.readObject();
                return $_obj;
            }
            
            public static x10.serialization.X10JavaSerializable $_deserializer(x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
                PixelBlurPar.$Closure$6 $_obj = new PixelBlurPar.$Closure$6((java.lang.System[]) null);
                $deserializer.record_reference($_obj);
                return $_deserialize_body($_obj, $deserializer);
            }
            
            public void $_serialize(x10.serialization.X10JavaSerializer $serializer) throws java.io.IOException {
                $serializer.write(this.clocksRef);
                $serializer.write(this.p$1182);
                
            }
            
            // constructor just for allocation
            public $Closure$6(final java.lang.System[] $dummy) {
                
            }
            
            // bridge for method abstract public ()=>U.operator()():U
            public x10.lang.Clock $apply$G() {
                return $apply();
            }
            
            // synthetic type for parameter mangling
            public static final class __0$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Clock$2$2$2 {}
            
        
            
            public x10.lang.Clock $apply() {
                
                //#line 36 "PixelBlurPar.x10"
                try {{
                    
                    //#line 36 "PixelBlurPar.x10"
                    final x10.core.Rail t$1218 = (((x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.lang.Clock>>>)(this.clocksRef))).$apply$G();
                    
                    //#line 36 "PixelBlurPar.x10"
                    final long t$1219 = this.p$1182.id;
                    
                    //#line 36 "PixelBlurPar.x10"
                    final x10.core.Rail t$1220 = ((x10.core.Rail[])t$1218.value)[(int)t$1219];
                    
                    //#line 36 "PixelBlurPar.x10"
                    final x10.lang.Clock t$1221 = ((x10.lang.Clock[])t$1220.value)[(int)0L];
                    
                    //#line 36 "PixelBlurPar.x10"
                    return t$1221;
                }}catch (java.lang.Throwable __lowerer__var__2__) {
                    
                    //#line 36 "PixelBlurPar.x10"
                    x10.lang.Clock __lowerer__var__3__ = ((x10.lang.Clock)(x10.xrx.Runtime.<x10.lang.Clock> wrapAtChecked$G(x10.lang.Clock.$RTT, ((java.lang.Throwable)(__lowerer__var__2__)))));
                    
                    //#line 36 "PixelBlurPar.x10"
                    return __lowerer__var__3__;
                }
            }
            
            public x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.lang.Clock>>> clocksRef;
            public x10.lang.Place p$1182;
            
            public $Closure$6(final x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.lang.Clock>>> clocksRef, final x10.lang.Place p$1182, __0$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Clock$2$2$2 $dummy) {
                 {
                    this.clocksRef = ((x10.core.GlobalRef)(clocksRef));
                    this.p$1182 = ((x10.lang.Place)(p$1182));
                }
            }
            
        }
        
        @x10.runtime.impl.java.X10Generated
        final public static class $Closure$7 extends x10.core.Ref implements x10.core.fun.Fun_0_0, x10.serialization.X10JavaSerializable
        {
            public static final x10.rtt.RuntimeType<$Closure$7> $RTT = 
                x10.rtt.StaticFunType.<$Closure$7> make($Closure$7.class,
                                                        new x10.rtt.Type[] {
                                                            x10.rtt.ParameterizedType.make(x10.core.fun.Fun_0_0.$RTT, x10.lang.Clock.$RTT)
                                                        });
            
            public x10.rtt.RuntimeType<?> $getRTT() { return $RTT; }
            
            public x10.rtt.Type<?> $getParam(int i) { return null; }
            
            private Object writeReplace() throws java.io.ObjectStreamException {
                return new x10.serialization.SerializationProxy(this);
            }
            
            public static x10.serialization.X10JavaSerializable $_deserialize_body(PixelBlurPar.$Closure$7 $_obj, x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
                if (x10.runtime.impl.java.Runtime.TRACE_SER) { x10.runtime.impl.java.Runtime.printTraceMessage("X10JavaSerializable: $_deserialize_body() of " + $Closure$7.class + " calling"); } 
                $_obj.clocksRef = $deserializer.readObject();
                $_obj.p$1182 = $deserializer.readObject();
                return $_obj;
            }
            
            public static x10.serialization.X10JavaSerializable $_deserializer(x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
                PixelBlurPar.$Closure$7 $_obj = new PixelBlurPar.$Closure$7((java.lang.System[]) null);
                $deserializer.record_reference($_obj);
                return $_deserialize_body($_obj, $deserializer);
            }
            
            public void $_serialize(x10.serialization.X10JavaSerializer $serializer) throws java.io.IOException {
                $serializer.write(this.clocksRef);
                $serializer.write(this.p$1182);
                
            }
            
            // constructor just for allocation
            public $Closure$7(final java.lang.System[] $dummy) {
                
            }
            
            // bridge for method abstract public ()=>U.operator()():U
            public x10.lang.Clock $apply$G() {
                return $apply();
            }
            
            // synthetic type for parameter mangling
            public static final class __0$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Clock$2$2$2 {}
            
        
            
            public x10.lang.Clock $apply() {
                
                //#line 37 "PixelBlurPar.x10"
                try {{
                    
                    //#line 37 "PixelBlurPar.x10"
                    final x10.core.Rail t$1230 = (((x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.lang.Clock>>>)(this.clocksRef))).$apply$G();
                    
                    //#line 37 "PixelBlurPar.x10"
                    final long t$1231 = this.p$1182.id;
                    
                    //#line 37 "PixelBlurPar.x10"
                    final x10.core.Rail t$1232 = ((x10.core.Rail[])t$1230.value)[(int)t$1231];
                    
                    //#line 37 "PixelBlurPar.x10"
                    final x10.lang.Clock t$1233 = ((x10.lang.Clock[])t$1232.value)[(int)2L];
                    
                    //#line 37 "PixelBlurPar.x10"
                    return t$1233;
                }}catch (java.lang.Throwable __lowerer__var__2__) {
                    
                    //#line 37 "PixelBlurPar.x10"
                    x10.lang.Clock __lowerer__var__3__ = ((x10.lang.Clock)(x10.xrx.Runtime.<x10.lang.Clock> wrapAtChecked$G(x10.lang.Clock.$RTT, ((java.lang.Throwable)(__lowerer__var__2__)))));
                    
                    //#line 37 "PixelBlurPar.x10"
                    return __lowerer__var__3__;
                }
            }
            
            public x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.lang.Clock>>> clocksRef;
            public x10.lang.Place p$1182;
            
            public $Closure$7(final x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.lang.Clock>>> clocksRef, final x10.lang.Place p$1182, __0$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Clock$2$2$2 $dummy) {
                 {
                    this.clocksRef = ((x10.core.GlobalRef)(clocksRef));
                    this.p$1182 = ((x10.lang.Place)(p$1182));
                }
            }
            
        }
        
        @x10.runtime.impl.java.X10Generated
        final public static class $Closure$8 extends x10.core.Ref implements x10.core.fun.Fun_0_0, x10.serialization.X10JavaSerializable
        {
            public static final x10.rtt.RuntimeType<$Closure$8> $RTT = 
                x10.rtt.StaticFunType.<$Closure$8> make($Closure$8.class,
                                                        new x10.rtt.Type[] {
                                                            x10.rtt.ParameterizedType.make(x10.core.fun.Fun_0_0.$RTT, x10.rtt.Types.DOUBLE)
                                                        });
            
            public x10.rtt.RuntimeType<?> $getRTT() { return $RTT; }
            
            public x10.rtt.Type<?> $getParam(int i) { return null; }
            
            private Object writeReplace() throws java.io.ObjectStreamException {
                return new x10.serialization.SerializationProxy(this);
            }
            
            public static x10.serialization.X10JavaSerializable $_deserialize_body(PixelBlurPar.$Closure$8 $_obj, x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
                if (x10.runtime.impl.java.Runtime.TRACE_SER) { x10.runtime.impl.java.Runtime.printTraceMessage("X10JavaSerializable: $_deserialize_body() of " + $Closure$8.class + " calling"); } 
                $_obj.p$1182 = $deserializer.readObject();
                $_obj.pixelRailsRef = $deserializer.readObject();
                return $_obj;
            }
            
            public static x10.serialization.X10JavaSerializable $_deserializer(x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
                PixelBlurPar.$Closure$8 $_obj = new PixelBlurPar.$Closure$8((java.lang.System[]) null);
                $deserializer.record_reference($_obj);
                return $_deserialize_body($_obj, $deserializer);
            }
            
            public void $_serialize(x10.serialization.X10JavaSerializer $serializer) throws java.io.IOException {
                $serializer.write(this.p$1182);
                $serializer.write(this.pixelRailsRef);
                
            }
            
            // constructor just for allocation
            public $Closure$8(final java.lang.System[] $dummy) {
                
            }
            
            // bridge for method abstract public ()=>U.operator()():U
            public x10.core.Double $apply$G() {
                return x10.core.Double.$box($apply$O());
            }
            
            // synthetic type for parameter mangling
            public static final class __0$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2 {}
            
        
            
            public double $apply$O() {
                
                //#line 46 "PixelBlurPar.x10"
                try {{
                    
                    //#line 46 "PixelBlurPar.x10"
                    final x10.core.Rail t$1246 = (((x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>>)(this.pixelRailsRef))).$apply$G();
                    
                    //#line 46 "PixelBlurPar.x10"
                    final long t$1247 = this.p$1182.id;
                    
                    //#line 46 "PixelBlurPar.x10"
                    final x10.core.Rail t$1248 = ((x10.core.Rail[])t$1246.value)[(int)t$1247];
                    
                    //#line 46 "PixelBlurPar.x10"
                    final double t$1249 = ((double[])t$1248.value)[(int)0L];
                    
                    //#line 46 "PixelBlurPar.x10"
                    final x10.core.Rail t$1250 = (((x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>>)(this.pixelRailsRef))).$apply$G();
                    
                    //#line 46 "PixelBlurPar.x10"
                    final long t$1251 = this.p$1182.id;
                    
                    //#line 46 "PixelBlurPar.x10"
                    final x10.core.Rail t$1252 = ((x10.core.Rail[])t$1250.value)[(int)t$1251];
                    
                    //#line 46 "PixelBlurPar.x10"
                    final double t$1253 = ((double[])t$1252.value)[(int)1L];
                    
                    //#line 46 "PixelBlurPar.x10"
                    final double t$1254 = ((t$1249) + (((double)(t$1253))));
                    
                    //#line 46 "PixelBlurPar.x10"
                    final double t$1255 = ((double)(long)(((long)(2L))));
                    
                    //#line 46 "PixelBlurPar.x10"
                    final double t$1256 = ((t$1254) / (((double)(t$1255))));
                    
                    //#line 46 "PixelBlurPar.x10"
                    return t$1256;
                }}catch (java.lang.Throwable __lowerer__var__2__) {
                    
                    //#line 46 "PixelBlurPar.x10"
                    double __lowerer__var__3__ = (x10.core.Double.$unbox(x10.xrx.Runtime.<x10.core.Double> wrapAtChecked$G(x10.rtt.Types.DOUBLE, ((java.lang.Throwable)(__lowerer__var__2__)))));
                    
                    //#line 46 "PixelBlurPar.x10"
                    return __lowerer__var__3__;
                }
            }
            
            public x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>> pixelRailsRef;
            public x10.lang.Place p$1182;
            
            public $Closure$8(final x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>> pixelRailsRef, final x10.lang.Place p$1182, __0$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2 $dummy) {
                 {
                    this.pixelRailsRef = ((x10.core.GlobalRef)(pixelRailsRef));
                    this.p$1182 = ((x10.lang.Place)(p$1182));
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
            
            public static x10.serialization.X10JavaSerializable $_deserialize_body(PixelBlurPar.$Closure$9 $_obj, x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
                if (x10.runtime.impl.java.Runtime.TRACE_SER) { x10.runtime.impl.java.Runtime.printTraceMessage("X10JavaSerializable: $_deserialize_body() of " + $Closure$9.class + " calling"); } 
                $_obj.blurredPixelsRef = $deserializer.readObject();
                $_obj.p$1182 = $deserializer.readObject();
                $_obj.pixelRailsRef = $deserializer.readObject();
                return $_obj;
            }
            
            public static x10.serialization.X10JavaSerializable $_deserializer(x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
                PixelBlurPar.$Closure$9 $_obj = new PixelBlurPar.$Closure$9((java.lang.System[]) null);
                $deserializer.record_reference($_obj);
                return $_deserialize_body($_obj, $deserializer);
            }
            
            public void $_serialize(x10.serialization.X10JavaSerializer $serializer) throws java.io.IOException {
                $serializer.write(this.blurredPixelsRef);
                $serializer.write(this.p$1182);
                $serializer.write(this.pixelRailsRef);
                
            }
            
            // constructor just for allocation
            public $Closure$9(final java.lang.System[] $dummy) {
                
            }
            
            // synthetic type for parameter mangling
            public static final class __0$1x10$lang$Rail$1x10$lang$Double$2$2__2$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2 {}
            
        
            
            public void $apply() {
                
                //#line 45 "PixelBlurPar.x10"
                try {{
                    
                    //#line 45 "PixelBlurPar.x10"
                    final x10.core.Rail t$1242 = (((x10.core.GlobalRef<x10.core.Rail<x10.core.Double>>)(this.blurredPixelsRef))).$apply$G();
                    
                    //#line 45 "PixelBlurPar.x10"
                    final long t$1243 = this.p$1182.id;
                    
                    //#line 46 "PixelBlurPar.x10"
                    final x10.lang.Place t$1244 = ((x10.lang.Place)((this.pixelRailsRef).home));
                    
                    //#line 46 "PixelBlurPar.x10"
                    final double t$1245 = x10.core.Double.$unbox(x10.xrx.Runtime.<x10.core.Double> evalAt__1$1x10$xrx$Runtime$$T$2$G(x10.rtt.Types.DOUBLE, ((x10.lang.Place)(t$1244)), ((x10.core.fun.Fun_0_0)(new PixelBlurPar.$Closure$8(((x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>>)(this.pixelRailsRef)), ((x10.lang.Place)(this.p$1182)), (PixelBlurPar.$Closure$8.__0$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2) null))), ((x10.xrx.Runtime.Profile)(null))));
                    
                    //#line 45 "PixelBlurPar.x10"
                    ((double[])t$1242.value)[(int)t$1243] = t$1245;
                }}catch (java.lang.Throwable __lowerer__var__2__) {
                    
                    //#line 45 "PixelBlurPar.x10"
                    int __lowerer__var__3__ = (x10.core.Int.$unbox(x10.xrx.Runtime.<x10.core.Int> wrapAtChecked$G(x10.rtt.Types.INT, ((java.lang.Throwable)(__lowerer__var__2__)))));
                }
            }
            
            public x10.core.GlobalRef<x10.core.Rail<x10.core.Double>> blurredPixelsRef;
            public x10.lang.Place p$1182;
            public x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>> pixelRailsRef;
            
            public $Closure$9(final x10.core.GlobalRef<x10.core.Rail<x10.core.Double>> blurredPixelsRef, final x10.lang.Place p$1182, final x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>> pixelRailsRef, __0$1x10$lang$Rail$1x10$lang$Double$2$2__2$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2 $dummy) {
                 {
                    this.blurredPixelsRef = ((x10.core.GlobalRef)(blurredPixelsRef));
                    this.p$1182 = ((x10.lang.Place)(p$1182));
                    this.pixelRailsRef = ((x10.core.GlobalRef)(pixelRailsRef));
                }
            }
            
        }
        
        @x10.runtime.impl.java.X10Generated
        final public static class $Closure$10 extends x10.core.Ref implements x10.core.fun.VoidFun_0_0, x10.serialization.X10JavaSerializable
        {
            public static final x10.rtt.RuntimeType<$Closure$10> $RTT = 
                x10.rtt.StaticVoidFunType.<$Closure$10> make($Closure$10.class,
                                                             new x10.rtt.Type[] {
                                                                 x10.core.fun.VoidFun_0_0.$RTT
                                                             });
            
            public x10.rtt.RuntimeType<?> $getRTT() { return $RTT; }
            
            public x10.rtt.Type<?> $getParam(int i) { return null; }
            
            private Object writeReplace() throws java.io.ObjectStreamException {
                return new x10.serialization.SerializationProxy(this);
            }
            
            public static x10.serialization.X10JavaSerializable $_deserialize_body(PixelBlurPar.$Closure$10 $_obj, x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
                if (x10.runtime.impl.java.Runtime.TRACE_SER) { x10.runtime.impl.java.Runtime.printTraceMessage("X10JavaSerializable: $_deserialize_body() of " + $Closure$10.class + " calling"); } 
                $_obj.blurredPixelsRef = $deserializer.readObject();
                $_obj.myPixel$1236 = $deserializer.readDouble();
                $_obj.p$1182 = $deserializer.readObject();
                $_obj.pixelRailsRef = $deserializer.readObject();
                $_obj.receiveLeftClock$1222 = $deserializer.readObject();
                $_obj.receiveRightClock$1234 = $deserializer.readObject();
                $_obj.selfClock$1184 = $deserializer.readObject();
                $_obj.sendLeftClock$1212 = $deserializer.readObject();
                $_obj.sendRightClock$1201 = $deserializer.readObject();
                return $_obj;
            }
            
            public static x10.serialization.X10JavaSerializable $_deserializer(x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
                PixelBlurPar.$Closure$10 $_obj = new PixelBlurPar.$Closure$10((java.lang.System[]) null);
                $deserializer.record_reference($_obj);
                return $_deserialize_body($_obj, $deserializer);
            }
            
            public void $_serialize(x10.serialization.X10JavaSerializer $serializer) throws java.io.IOException {
                $serializer.write(this.blurredPixelsRef);
                $serializer.write(this.myPixel$1236);
                $serializer.write(this.p$1182);
                $serializer.write(this.pixelRailsRef);
                $serializer.write(this.receiveLeftClock$1222);
                $serializer.write(this.receiveRightClock$1234);
                $serializer.write(this.selfClock$1184);
                $serializer.write(this.sendLeftClock$1212);
                $serializer.write(this.sendRightClock$1201);
                
            }
            
            // constructor just for allocation
            public $Closure$10(final java.lang.System[] $dummy) {
                
            }
            
            // synthetic type for parameter mangling
            public static final class __2$1x10$lang$Rail$1x10$lang$Double$2$2__3$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2 {}
            
        
            
            public void $apply() {
                
                //#line 40 "PixelBlurPar.x10"
                try {{
                    
                    //#line 42 "PixelBlurPar.x10"
                    PixelBlurPar.sendAndReceiveValues__2$1x10$lang$Rail$1x10$lang$Double$2$2__3$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2(((x10.lang.Place)(this.p$1182)), (double)(this.myPixel$1236), ((x10.core.GlobalRef)(this.blurredPixelsRef)), ((x10.core.GlobalRef)(this.pixelRailsRef)), ((x10.lang.Clock)(this.selfClock$1184)), ((x10.lang.Clock)(this.receiveLeftClock$1222)), ((x10.lang.Clock)(this.receiveRightClock$1234)), ((x10.lang.Clock)(this.sendLeftClock$1212)), ((x10.lang.Clock)(this.sendRightClock$1201)));
                    
                    //#line 45 "PixelBlurPar.x10"
                    final x10.lang.Place t$1241 = ((x10.lang.Place)((this.blurredPixelsRef).home));
                    {
                        
                        //#line 45 "PixelBlurPar.x10"
                        x10.xrx.Runtime.runAt(((x10.lang.Place)(t$1241)), ((x10.core.fun.VoidFun_0_0)(new PixelBlurPar.$Closure$9(((x10.core.GlobalRef<x10.core.Rail<x10.core.Double>>)(this.blurredPixelsRef)), ((x10.lang.Place)(this.p$1182)), ((x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>>)(this.pixelRailsRef)), (PixelBlurPar.$Closure$9.__0$1x10$lang$Rail$1x10$lang$Double$2$2__2$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2) null))), ((x10.xrx.Runtime.Profile)(null)));
                    }
                }}catch (java.lang.Error __lowerer__var__2__) {
                    
                    //#line 40 "PixelBlurPar.x10"
                    throw __lowerer__var__2__;
                }catch (java.lang.Throwable __lowerer__var__3__) {
                    
                    //#line 40 "PixelBlurPar.x10"
                    throw x10.rtt.Types.EXCEPTION.isInstance(__lowerer__var__3__) ? (java.lang.RuntimeException)(__lowerer__var__3__) : new x10.lang.WrappedThrowable(__lowerer__var__3__);
                }
            }
            
            public x10.lang.Place p$1182;
            public double myPixel$1236;
            public x10.core.GlobalRef<x10.core.Rail<x10.core.Double>> blurredPixelsRef;
            public x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>> pixelRailsRef;
            public x10.lang.Clock selfClock$1184;
            public x10.lang.Clock receiveLeftClock$1222;
            public x10.lang.Clock receiveRightClock$1234;
            public x10.lang.Clock sendLeftClock$1212;
            public x10.lang.Clock sendRightClock$1201;
            
            public $Closure$10(final x10.lang.Place p$1182, final double myPixel$1236, final x10.core.GlobalRef<x10.core.Rail<x10.core.Double>> blurredPixelsRef, final x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>> pixelRailsRef, final x10.lang.Clock selfClock$1184, final x10.lang.Clock receiveLeftClock$1222, final x10.lang.Clock receiveRightClock$1234, final x10.lang.Clock sendLeftClock$1212, final x10.lang.Clock sendRightClock$1201, __2$1x10$lang$Rail$1x10$lang$Double$2$2__3$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2 $dummy) {
                 {
                    this.p$1182 = ((x10.lang.Place)(p$1182));
                    this.myPixel$1236 = myPixel$1236;
                    this.blurredPixelsRef = ((x10.core.GlobalRef)(blurredPixelsRef));
                    this.pixelRailsRef = ((x10.core.GlobalRef)(pixelRailsRef));
                    this.selfClock$1184 = ((x10.lang.Clock)(selfClock$1184));
                    this.receiveLeftClock$1222 = ((x10.lang.Clock)(receiveLeftClock$1222));
                    this.receiveRightClock$1234 = ((x10.lang.Clock)(receiveRightClock$1234));
                    this.sendLeftClock$1212 = ((x10.lang.Clock)(sendLeftClock$1212));
                    this.sendRightClock$1201 = ((x10.lang.Clock)(sendRightClock$1201));
                }
            }
            
        }
        
        @x10.runtime.impl.java.X10Generated
        final public static class $Closure$11 extends x10.core.Ref implements x10.core.fun.Fun_0_0, x10.serialization.X10JavaSerializable
        {
            public static final x10.rtt.RuntimeType<$Closure$11> $RTT = 
                x10.rtt.StaticFunType.<$Closure$11> make($Closure$11.class,
                                                         new x10.rtt.Type[] {
                                                             x10.rtt.ParameterizedType.make(x10.core.fun.Fun_0_0.$RTT, x10.rtt.Types.DOUBLE)
                                                         });
            
            public x10.rtt.RuntimeType<?> $getRTT() { return $RTT; }
            
            public x10.rtt.Type<?> $getParam(int i) { return null; }
            
            private Object writeReplace() throws java.io.ObjectStreamException {
                return new x10.serialization.SerializationProxy(this);
            }
            
            public static x10.serialization.X10JavaSerializable $_deserialize_body(PixelBlurPar.$Closure$11 $_obj, x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
                if (x10.runtime.impl.java.Runtime.TRACE_SER) { x10.runtime.impl.java.Runtime.printTraceMessage("X10JavaSerializable: $_deserialize_body() of " + $Closure$11.class + " calling"); } 
                $_obj.p$1182 = $deserializer.readObject();
                $_obj.pixelRailsRef = $deserializer.readObject();
                return $_obj;
            }
            
            public static x10.serialization.X10JavaSerializable $_deserializer(x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
                PixelBlurPar.$Closure$11 $_obj = new PixelBlurPar.$Closure$11((java.lang.System[]) null);
                $deserializer.record_reference($_obj);
                return $_deserialize_body($_obj, $deserializer);
            }
            
            public void $_serialize(x10.serialization.X10JavaSerializer $serializer) throws java.io.IOException {
                $serializer.write(this.p$1182);
                $serializer.write(this.pixelRailsRef);
                
            }
            
            // constructor just for allocation
            public $Closure$11(final java.lang.System[] $dummy) {
                
            }
            
            // bridge for method abstract public ()=>U.operator()():U
            public x10.core.Double $apply$G() {
                return x10.core.Double.$box($apply$O());
            }
            
            // synthetic type for parameter mangling
            public static final class __0$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2 {}
            
        
            
            public double $apply$O() {
                
                //#line 56 "PixelBlurPar.x10"
                try {{
                    
                    //#line 56 "PixelBlurPar.x10"
                    final x10.core.Rail t$1264 = (((x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>>)(this.pixelRailsRef))).$apply$G();
                    
                    //#line 56 "PixelBlurPar.x10"
                    final long t$1265 = this.p$1182.id;
                    
                    //#line 56 "PixelBlurPar.x10"
                    final x10.core.Rail t$1266 = ((x10.core.Rail[])t$1264.value)[(int)t$1265];
                    
                    //#line 56 "PixelBlurPar.x10"
                    final double t$1267 = ((double[])t$1266.value)[(int)1L];
                    
                    //#line 56 "PixelBlurPar.x10"
                    final x10.core.Rail t$1268 = (((x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>>)(this.pixelRailsRef))).$apply$G();
                    
                    //#line 56 "PixelBlurPar.x10"
                    final long t$1269 = this.p$1182.id;
                    
                    //#line 56 "PixelBlurPar.x10"
                    final x10.core.Rail t$1270 = ((x10.core.Rail[])t$1268.value)[(int)t$1269];
                    
                    //#line 56 "PixelBlurPar.x10"
                    final double t$1271 = ((double[])t$1270.value)[(int)2L];
                    
                    //#line 56 "PixelBlurPar.x10"
                    final double t$1272 = ((t$1267) + (((double)(t$1271))));
                    
                    //#line 56 "PixelBlurPar.x10"
                    final double t$1273 = ((double)(long)(((long)(2L))));
                    
                    //#line 56 "PixelBlurPar.x10"
                    final double t$1274 = ((t$1272) / (((double)(t$1273))));
                    
                    //#line 56 "PixelBlurPar.x10"
                    return t$1274;
                }}catch (java.lang.Throwable __lowerer__var__2__) {
                    
                    //#line 56 "PixelBlurPar.x10"
                    double __lowerer__var__3__ = (x10.core.Double.$unbox(x10.xrx.Runtime.<x10.core.Double> wrapAtChecked$G(x10.rtt.Types.DOUBLE, ((java.lang.Throwable)(__lowerer__var__2__)))));
                    
                    //#line 56 "PixelBlurPar.x10"
                    return __lowerer__var__3__;
                }
            }
            
            public x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>> pixelRailsRef;
            public x10.lang.Place p$1182;
            
            public $Closure$11(final x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>> pixelRailsRef, final x10.lang.Place p$1182, __0$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2 $dummy) {
                 {
                    this.pixelRailsRef = ((x10.core.GlobalRef)(pixelRailsRef));
                    this.p$1182 = ((x10.lang.Place)(p$1182));
                }
            }
            
        }
        
        @x10.runtime.impl.java.X10Generated
        final public static class $Closure$12 extends x10.core.Ref implements x10.core.fun.VoidFun_0_0, x10.serialization.X10JavaSerializable
        {
            public static final x10.rtt.RuntimeType<$Closure$12> $RTT = 
                x10.rtt.StaticVoidFunType.<$Closure$12> make($Closure$12.class,
                                                             new x10.rtt.Type[] {
                                                                 x10.core.fun.VoidFun_0_0.$RTT
                                                             });
            
            public x10.rtt.RuntimeType<?> $getRTT() { return $RTT; }
            
            public x10.rtt.Type<?> $getParam(int i) { return null; }
            
            private Object writeReplace() throws java.io.ObjectStreamException {
                return new x10.serialization.SerializationProxy(this);
            }
            
            public static x10.serialization.X10JavaSerializable $_deserialize_body(PixelBlurPar.$Closure$12 $_obj, x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
                if (x10.runtime.impl.java.Runtime.TRACE_SER) { x10.runtime.impl.java.Runtime.printTraceMessage("X10JavaSerializable: $_deserialize_body() of " + $Closure$12.class + " calling"); } 
                $_obj.blurredPixelsRef = $deserializer.readObject();
                $_obj.p$1182 = $deserializer.readObject();
                $_obj.pixelRailsRef = $deserializer.readObject();
                return $_obj;
            }
            
            public static x10.serialization.X10JavaSerializable $_deserializer(x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
                PixelBlurPar.$Closure$12 $_obj = new PixelBlurPar.$Closure$12((java.lang.System[]) null);
                $deserializer.record_reference($_obj);
                return $_deserialize_body($_obj, $deserializer);
            }
            
            public void $_serialize(x10.serialization.X10JavaSerializer $serializer) throws java.io.IOException {
                $serializer.write(this.blurredPixelsRef);
                $serializer.write(this.p$1182);
                $serializer.write(this.pixelRailsRef);
                
            }
            
            // constructor just for allocation
            public $Closure$12(final java.lang.System[] $dummy) {
                
            }
            
            // synthetic type for parameter mangling
            public static final class __0$1x10$lang$Rail$1x10$lang$Double$2$2__2$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2 {}
            
        
            
            public void $apply() {
                
                //#line 55 "PixelBlurPar.x10"
                try {{
                    
                    //#line 55 "PixelBlurPar.x10"
                    final x10.core.Rail t$1260 = (((x10.core.GlobalRef<x10.core.Rail<x10.core.Double>>)(this.blurredPixelsRef))).$apply$G();
                    
                    //#line 55 "PixelBlurPar.x10"
                    final long t$1261 = this.p$1182.id;
                    
                    //#line 56 "PixelBlurPar.x10"
                    final x10.lang.Place t$1262 = ((x10.lang.Place)((this.pixelRailsRef).home));
                    
                    //#line 56 "PixelBlurPar.x10"
                    final double t$1263 = x10.core.Double.$unbox(x10.xrx.Runtime.<x10.core.Double> evalAt__1$1x10$xrx$Runtime$$T$2$G(x10.rtt.Types.DOUBLE, ((x10.lang.Place)(t$1262)), ((x10.core.fun.Fun_0_0)(new PixelBlurPar.$Closure$11(((x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>>)(this.pixelRailsRef)), ((x10.lang.Place)(this.p$1182)), (PixelBlurPar.$Closure$11.__0$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2) null))), ((x10.xrx.Runtime.Profile)(null))));
                    
                    //#line 55 "PixelBlurPar.x10"
                    ((double[])t$1260.value)[(int)t$1261] = t$1263;
                }}catch (java.lang.Throwable __lowerer__var__2__) {
                    
                    //#line 55 "PixelBlurPar.x10"
                    int __lowerer__var__3__ = (x10.core.Int.$unbox(x10.xrx.Runtime.<x10.core.Int> wrapAtChecked$G(x10.rtt.Types.INT, ((java.lang.Throwable)(__lowerer__var__2__)))));
                }
            }
            
            public x10.core.GlobalRef<x10.core.Rail<x10.core.Double>> blurredPixelsRef;
            public x10.lang.Place p$1182;
            public x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>> pixelRailsRef;
            
            public $Closure$12(final x10.core.GlobalRef<x10.core.Rail<x10.core.Double>> blurredPixelsRef, final x10.lang.Place p$1182, final x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>> pixelRailsRef, __0$1x10$lang$Rail$1x10$lang$Double$2$2__2$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2 $dummy) {
                 {
                    this.blurredPixelsRef = ((x10.core.GlobalRef)(blurredPixelsRef));
                    this.p$1182 = ((x10.lang.Place)(p$1182));
                    this.pixelRailsRef = ((x10.core.GlobalRef)(pixelRailsRef));
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
            
            public static x10.serialization.X10JavaSerializable $_deserialize_body(PixelBlurPar.$Closure$13 $_obj, x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
                if (x10.runtime.impl.java.Runtime.TRACE_SER) { x10.runtime.impl.java.Runtime.printTraceMessage("X10JavaSerializable: $_deserialize_body() of " + $Closure$13.class + " calling"); } 
                $_obj.blurredPixelsRef = $deserializer.readObject();
                $_obj.myPixel$1236 = $deserializer.readDouble();
                $_obj.p$1182 = $deserializer.readObject();
                $_obj.pixelRailsRef = $deserializer.readObject();
                $_obj.receiveLeftClock$1222 = $deserializer.readObject();
                $_obj.receiveRightClock$1234 = $deserializer.readObject();
                $_obj.selfClock$1184 = $deserializer.readObject();
                $_obj.sendLeftClock$1212 = $deserializer.readObject();
                $_obj.sendRightClock$1201 = $deserializer.readObject();
                return $_obj;
            }
            
            public static x10.serialization.X10JavaSerializable $_deserializer(x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
                PixelBlurPar.$Closure$13 $_obj = new PixelBlurPar.$Closure$13((java.lang.System[]) null);
                $deserializer.record_reference($_obj);
                return $_deserialize_body($_obj, $deserializer);
            }
            
            public void $_serialize(x10.serialization.X10JavaSerializer $serializer) throws java.io.IOException {
                $serializer.write(this.blurredPixelsRef);
                $serializer.write(this.myPixel$1236);
                $serializer.write(this.p$1182);
                $serializer.write(this.pixelRailsRef);
                $serializer.write(this.receiveLeftClock$1222);
                $serializer.write(this.receiveRightClock$1234);
                $serializer.write(this.selfClock$1184);
                $serializer.write(this.sendLeftClock$1212);
                $serializer.write(this.sendRightClock$1201);
                
            }
            
            // constructor just for allocation
            public $Closure$13(final java.lang.System[] $dummy) {
                
            }
            
            // synthetic type for parameter mangling
            public static final class __2$1x10$lang$Rail$1x10$lang$Double$2$2__3$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2 {}
            
        
            
            public void $apply() {
                
                //#line 50 "PixelBlurPar.x10"
                try {{
                    
                    //#line 52 "PixelBlurPar.x10"
                    PixelBlurPar.sendAndReceiveValues__2$1x10$lang$Rail$1x10$lang$Double$2$2__3$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2(((x10.lang.Place)(this.p$1182)), (double)(this.myPixel$1236), ((x10.core.GlobalRef)(this.blurredPixelsRef)), ((x10.core.GlobalRef)(this.pixelRailsRef)), ((x10.lang.Clock)(this.selfClock$1184)), ((x10.lang.Clock)(this.receiveLeftClock$1222)), ((x10.lang.Clock)(this.receiveRightClock$1234)), ((x10.lang.Clock)(this.sendLeftClock$1212)), ((x10.lang.Clock)(this.sendRightClock$1201)));
                    
                    //#line 55 "PixelBlurPar.x10"
                    final x10.lang.Place t$1259 = ((x10.lang.Place)((this.blurredPixelsRef).home));
                    {
                        
                        //#line 55 "PixelBlurPar.x10"
                        x10.xrx.Runtime.runAt(((x10.lang.Place)(t$1259)), ((x10.core.fun.VoidFun_0_0)(new PixelBlurPar.$Closure$12(((x10.core.GlobalRef<x10.core.Rail<x10.core.Double>>)(this.blurredPixelsRef)), ((x10.lang.Place)(this.p$1182)), ((x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>>)(this.pixelRailsRef)), (PixelBlurPar.$Closure$12.__0$1x10$lang$Rail$1x10$lang$Double$2$2__2$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2) null))), ((x10.xrx.Runtime.Profile)(null)));
                    }
                }}catch (java.lang.Error __lowerer__var__2__) {
                    
                    //#line 50 "PixelBlurPar.x10"
                    throw __lowerer__var__2__;
                }catch (java.lang.Throwable __lowerer__var__3__) {
                    
                    //#line 50 "PixelBlurPar.x10"
                    throw x10.rtt.Types.EXCEPTION.isInstance(__lowerer__var__3__) ? (java.lang.RuntimeException)(__lowerer__var__3__) : new x10.lang.WrappedThrowable(__lowerer__var__3__);
                }
            }
            
            public x10.lang.Place p$1182;
            public double myPixel$1236;
            public x10.core.GlobalRef<x10.core.Rail<x10.core.Double>> blurredPixelsRef;
            public x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>> pixelRailsRef;
            public x10.lang.Clock selfClock$1184;
            public x10.lang.Clock receiveLeftClock$1222;
            public x10.lang.Clock receiveRightClock$1234;
            public x10.lang.Clock sendLeftClock$1212;
            public x10.lang.Clock sendRightClock$1201;
            
            public $Closure$13(final x10.lang.Place p$1182, final double myPixel$1236, final x10.core.GlobalRef<x10.core.Rail<x10.core.Double>> blurredPixelsRef, final x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>> pixelRailsRef, final x10.lang.Clock selfClock$1184, final x10.lang.Clock receiveLeftClock$1222, final x10.lang.Clock receiveRightClock$1234, final x10.lang.Clock sendLeftClock$1212, final x10.lang.Clock sendRightClock$1201, __2$1x10$lang$Rail$1x10$lang$Double$2$2__3$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2 $dummy) {
                 {
                    this.p$1182 = ((x10.lang.Place)(p$1182));
                    this.myPixel$1236 = myPixel$1236;
                    this.blurredPixelsRef = ((x10.core.GlobalRef)(blurredPixelsRef));
                    this.pixelRailsRef = ((x10.core.GlobalRef)(pixelRailsRef));
                    this.selfClock$1184 = ((x10.lang.Clock)(selfClock$1184));
                    this.receiveLeftClock$1222 = ((x10.lang.Clock)(receiveLeftClock$1222));
                    this.receiveRightClock$1234 = ((x10.lang.Clock)(receiveRightClock$1234));
                    this.sendLeftClock$1212 = ((x10.lang.Clock)(sendLeftClock$1212));
                    this.sendRightClock$1201 = ((x10.lang.Clock)(sendRightClock$1201));
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
            
            public static x10.serialization.X10JavaSerializable $_deserialize_body(PixelBlurPar.$Closure$14 $_obj, x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
                if (x10.runtime.impl.java.Runtime.TRACE_SER) { x10.runtime.impl.java.Runtime.printTraceMessage("X10JavaSerializable: $_deserialize_body() of " + $Closure$14.class + " calling"); } 
                $_obj.p$1182 = $deserializer.readObject();
                $_obj.pixelRailsRef = $deserializer.readObject();
                return $_obj;
            }
            
            public static x10.serialization.X10JavaSerializable $_deserializer(x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
                PixelBlurPar.$Closure$14 $_obj = new PixelBlurPar.$Closure$14((java.lang.System[]) null);
                $deserializer.record_reference($_obj);
                return $_deserialize_body($_obj, $deserializer);
            }
            
            public void $_serialize(x10.serialization.X10JavaSerializer $serializer) throws java.io.IOException {
                $serializer.write(this.p$1182);
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
                
                //#line 66 "PixelBlurPar.x10"
                try {{
                    
                    //#line 66 "PixelBlurPar.x10"
                    final x10.core.Rail t$1280 = (((x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>>)(this.pixelRailsRef))).$apply$G();
                    
                    //#line 66 "PixelBlurPar.x10"
                    final long t$1281 = this.p$1182.id;
                    
                    //#line 66 "PixelBlurPar.x10"
                    final x10.core.Rail t$1282 = ((x10.core.Rail[])t$1280.value)[(int)t$1281];
                    
                    //#line 66 "PixelBlurPar.x10"
                    final double t$1283 = ((double[])t$1282.value)[(int)0L];
                    
                    //#line 66 "PixelBlurPar.x10"
                    final x10.core.Rail t$1284 = (((x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>>)(this.pixelRailsRef))).$apply$G();
                    
                    //#line 66 "PixelBlurPar.x10"
                    final long t$1285 = this.p$1182.id;
                    
                    //#line 66 "PixelBlurPar.x10"
                    final x10.core.Rail t$1286 = ((x10.core.Rail[])t$1284.value)[(int)t$1285];
                    
                    //#line 66 "PixelBlurPar.x10"
                    final double t$1287 = ((double[])t$1286.value)[(int)1L];
                    
                    //#line 66 "PixelBlurPar.x10"
                    final double t$1288 = ((t$1283) + (((double)(t$1287))));
                    
                    //#line 66 "PixelBlurPar.x10"
                    final x10.core.Rail t$1289 = (((x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>>)(this.pixelRailsRef))).$apply$G();
                    
                    //#line 66 "PixelBlurPar.x10"
                    final long t$1290 = this.p$1182.id;
                    
                    //#line 66 "PixelBlurPar.x10"
                    final x10.core.Rail t$1291 = ((x10.core.Rail[])t$1289.value)[(int)t$1290];
                    
                    //#line 66 "PixelBlurPar.x10"
                    final double t$1292 = ((double[])t$1291.value)[(int)2L];
                    
                    //#line 66 "PixelBlurPar.x10"
                    final double t$1293 = ((t$1288) + (((double)(t$1292))));
                    
                    //#line 66 "PixelBlurPar.x10"
                    final double t$1294 = ((double)(long)(((long)(3L))));
                    
                    //#line 66 "PixelBlurPar.x10"
                    final double t$1295 = ((t$1293) / (((double)(t$1294))));
                    
                    //#line 66 "PixelBlurPar.x10"
                    return t$1295;
                }}catch (java.lang.Throwable __lowerer__var__2__) {
                    
                    //#line 66 "PixelBlurPar.x10"
                    double __lowerer__var__3__ = (x10.core.Double.$unbox(x10.xrx.Runtime.<x10.core.Double> wrapAtChecked$G(x10.rtt.Types.DOUBLE, ((java.lang.Throwable)(__lowerer__var__2__)))));
                    
                    //#line 66 "PixelBlurPar.x10"
                    return __lowerer__var__3__;
                }
            }
            
            public x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>> pixelRailsRef;
            public x10.lang.Place p$1182;
            
            public $Closure$14(final x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>> pixelRailsRef, final x10.lang.Place p$1182, __0$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2 $dummy) {
                 {
                    this.pixelRailsRef = ((x10.core.GlobalRef)(pixelRailsRef));
                    this.p$1182 = ((x10.lang.Place)(p$1182));
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
            
            public static x10.serialization.X10JavaSerializable $_deserialize_body(PixelBlurPar.$Closure$15 $_obj, x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
                if (x10.runtime.impl.java.Runtime.TRACE_SER) { x10.runtime.impl.java.Runtime.printTraceMessage("X10JavaSerializable: $_deserialize_body() of " + $Closure$15.class + " calling"); } 
                $_obj.blurredPixelsRef = $deserializer.readObject();
                $_obj.p$1182 = $deserializer.readObject();
                $_obj.pixelRailsRef = $deserializer.readObject();
                return $_obj;
            }
            
            public static x10.serialization.X10JavaSerializable $_deserializer(x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
                PixelBlurPar.$Closure$15 $_obj = new PixelBlurPar.$Closure$15((java.lang.System[]) null);
                $deserializer.record_reference($_obj);
                return $_deserialize_body($_obj, $deserializer);
            }
            
            public void $_serialize(x10.serialization.X10JavaSerializer $serializer) throws java.io.IOException {
                $serializer.write(this.blurredPixelsRef);
                $serializer.write(this.p$1182);
                $serializer.write(this.pixelRailsRef);
                
            }
            
            // constructor just for allocation
            public $Closure$15(final java.lang.System[] $dummy) {
                
            }
            
            // synthetic type for parameter mangling
            public static final class __0$1x10$lang$Rail$1x10$lang$Double$2$2__2$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2 {}
            
        
            
            public void $apply() {
                
                //#line 65 "PixelBlurPar.x10"
                try {{
                    
                    //#line 65 "PixelBlurPar.x10"
                    final x10.core.Rail t$1276 = (((x10.core.GlobalRef<x10.core.Rail<x10.core.Double>>)(this.blurredPixelsRef))).$apply$G();
                    
                    //#line 65 "PixelBlurPar.x10"
                    final long t$1277 = this.p$1182.id;
                    
                    //#line 66 "PixelBlurPar.x10"
                    final x10.lang.Place t$1278 = ((x10.lang.Place)((this.pixelRailsRef).home));
                    
                    //#line 66 "PixelBlurPar.x10"
                    final double t$1279 = x10.core.Double.$unbox(x10.xrx.Runtime.<x10.core.Double> evalAt__1$1x10$xrx$Runtime$$T$2$G(x10.rtt.Types.DOUBLE, ((x10.lang.Place)(t$1278)), ((x10.core.fun.Fun_0_0)(new PixelBlurPar.$Closure$14(((x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>>)(this.pixelRailsRef)), ((x10.lang.Place)(this.p$1182)), (PixelBlurPar.$Closure$14.__0$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2) null))), ((x10.xrx.Runtime.Profile)(null))));
                    
                    //#line 65 "PixelBlurPar.x10"
                    ((double[])t$1276.value)[(int)t$1277] = t$1279;
                }}catch (java.lang.Throwable __lowerer__var__2__) {
                    
                    //#line 65 "PixelBlurPar.x10"
                    int __lowerer__var__3__ = (x10.core.Int.$unbox(x10.xrx.Runtime.<x10.core.Int> wrapAtChecked$G(x10.rtt.Types.INT, ((java.lang.Throwable)(__lowerer__var__2__)))));
                }
            }
            
            public x10.core.GlobalRef<x10.core.Rail<x10.core.Double>> blurredPixelsRef;
            public x10.lang.Place p$1182;
            public x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>> pixelRailsRef;
            
            public $Closure$15(final x10.core.GlobalRef<x10.core.Rail<x10.core.Double>> blurredPixelsRef, final x10.lang.Place p$1182, final x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>> pixelRailsRef, __0$1x10$lang$Rail$1x10$lang$Double$2$2__2$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2 $dummy) {
                 {
                    this.blurredPixelsRef = ((x10.core.GlobalRef)(blurredPixelsRef));
                    this.p$1182 = ((x10.lang.Place)(p$1182));
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
            
            public static x10.serialization.X10JavaSerializable $_deserialize_body(PixelBlurPar.$Closure$16 $_obj, x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
                if (x10.runtime.impl.java.Runtime.TRACE_SER) { x10.runtime.impl.java.Runtime.printTraceMessage("X10JavaSerializable: $_deserialize_body() of " + $Closure$16.class + " calling"); } 
                $_obj.blurredPixelsRef = $deserializer.readObject();
                $_obj.myPixel$1236 = $deserializer.readDouble();
                $_obj.p$1182 = $deserializer.readObject();
                $_obj.pixelRailsRef = $deserializer.readObject();
                $_obj.receiveLeftClock$1222 = $deserializer.readObject();
                $_obj.receiveRightClock$1234 = $deserializer.readObject();
                $_obj.selfClock$1184 = $deserializer.readObject();
                $_obj.sendLeftClock$1212 = $deserializer.readObject();
                $_obj.sendRightClock$1201 = $deserializer.readObject();
                return $_obj;
            }
            
            public static x10.serialization.X10JavaSerializable $_deserializer(x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
                PixelBlurPar.$Closure$16 $_obj = new PixelBlurPar.$Closure$16((java.lang.System[]) null);
                $deserializer.record_reference($_obj);
                return $_deserialize_body($_obj, $deserializer);
            }
            
            public void $_serialize(x10.serialization.X10JavaSerializer $serializer) throws java.io.IOException {
                $serializer.write(this.blurredPixelsRef);
                $serializer.write(this.myPixel$1236);
                $serializer.write(this.p$1182);
                $serializer.write(this.pixelRailsRef);
                $serializer.write(this.receiveLeftClock$1222);
                $serializer.write(this.receiveRightClock$1234);
                $serializer.write(this.selfClock$1184);
                $serializer.write(this.sendLeftClock$1212);
                $serializer.write(this.sendRightClock$1201);
                
            }
            
            // constructor just for allocation
            public $Closure$16(final java.lang.System[] $dummy) {
                
            }
            
            // synthetic type for parameter mangling
            public static final class __2$1x10$lang$Rail$1x10$lang$Double$2$2__3$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2 {}
            
        
            
            public void $apply() {
                
                //#line 60 "PixelBlurPar.x10"
                try {{
                    
                    //#line 62 "PixelBlurPar.x10"
                    PixelBlurPar.sendAndReceiveValues__2$1x10$lang$Rail$1x10$lang$Double$2$2__3$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2(((x10.lang.Place)(this.p$1182)), (double)(this.myPixel$1236), ((x10.core.GlobalRef)(this.blurredPixelsRef)), ((x10.core.GlobalRef)(this.pixelRailsRef)), ((x10.lang.Clock)(this.selfClock$1184)), ((x10.lang.Clock)(this.receiveLeftClock$1222)), ((x10.lang.Clock)(this.receiveRightClock$1234)), ((x10.lang.Clock)(this.sendLeftClock$1212)), ((x10.lang.Clock)(this.sendRightClock$1201)));
                    
                    //#line 65 "PixelBlurPar.x10"
                    final x10.lang.Place t$1275 = ((x10.lang.Place)((this.blurredPixelsRef).home));
                    {
                        
                        //#line 65 "PixelBlurPar.x10"
                        x10.xrx.Runtime.runAt(((x10.lang.Place)(t$1275)), ((x10.core.fun.VoidFun_0_0)(new PixelBlurPar.$Closure$15(((x10.core.GlobalRef<x10.core.Rail<x10.core.Double>>)(this.blurredPixelsRef)), ((x10.lang.Place)(this.p$1182)), ((x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>>)(this.pixelRailsRef)), (PixelBlurPar.$Closure$15.__0$1x10$lang$Rail$1x10$lang$Double$2$2__2$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2) null))), ((x10.xrx.Runtime.Profile)(null)));
                    }
                }}catch (java.lang.Error __lowerer__var__2__) {
                    
                    //#line 60 "PixelBlurPar.x10"
                    throw __lowerer__var__2__;
                }catch (java.lang.Throwable __lowerer__var__3__) {
                    
                    //#line 60 "PixelBlurPar.x10"
                    throw x10.rtt.Types.EXCEPTION.isInstance(__lowerer__var__3__) ? (java.lang.RuntimeException)(__lowerer__var__3__) : new x10.lang.WrappedThrowable(__lowerer__var__3__);
                }
            }
            
            public x10.lang.Place p$1182;
            public double myPixel$1236;
            public x10.core.GlobalRef<x10.core.Rail<x10.core.Double>> blurredPixelsRef;
            public x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>> pixelRailsRef;
            public x10.lang.Clock selfClock$1184;
            public x10.lang.Clock receiveLeftClock$1222;
            public x10.lang.Clock receiveRightClock$1234;
            public x10.lang.Clock sendLeftClock$1212;
            public x10.lang.Clock sendRightClock$1201;
            
            public $Closure$16(final x10.lang.Place p$1182, final double myPixel$1236, final x10.core.GlobalRef<x10.core.Rail<x10.core.Double>> blurredPixelsRef, final x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>> pixelRailsRef, final x10.lang.Clock selfClock$1184, final x10.lang.Clock receiveLeftClock$1222, final x10.lang.Clock receiveRightClock$1234, final x10.lang.Clock sendLeftClock$1212, final x10.lang.Clock sendRightClock$1201, __2$1x10$lang$Rail$1x10$lang$Double$2$2__3$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2 $dummy) {
                 {
                    this.p$1182 = ((x10.lang.Place)(p$1182));
                    this.myPixel$1236 = myPixel$1236;
                    this.blurredPixelsRef = ((x10.core.GlobalRef)(blurredPixelsRef));
                    this.pixelRailsRef = ((x10.core.GlobalRef)(pixelRailsRef));
                    this.selfClock$1184 = ((x10.lang.Clock)(selfClock$1184));
                    this.receiveLeftClock$1222 = ((x10.lang.Clock)(receiveLeftClock$1222));
                    this.receiveRightClock$1234 = ((x10.lang.Clock)(receiveRightClock$1234));
                    this.sendLeftClock$1212 = ((x10.lang.Clock)(sendLeftClock$1212));
                    this.sendRightClock$1201 = ((x10.lang.Clock)(sendRightClock$1201));
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
            
            public static x10.serialization.X10JavaSerializable $_deserialize_body(PixelBlurPar.$Closure$17 $_obj, x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
                if (x10.runtime.impl.java.Runtime.TRACE_SER) { x10.runtime.impl.java.Runtime.printTraceMessage("X10JavaSerializable: $_deserialize_body() of " + $Closure$17.class + " calling"); } 
                $_obj.pixelRailsRef = $deserializer.readObject();
                return $_obj;
            }
            
            public static x10.serialization.X10JavaSerializable $_deserializer(x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
                PixelBlurPar.$Closure$17 $_obj = new PixelBlurPar.$Closure$17((java.lang.System[]) null);
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
                
                //#line 72 "PixelBlurPar.x10"
                try {{
                    
                    //#line 72 "PixelBlurPar.x10"
                    final x10.io.Printer t$1103 = ((x10.io.Printer)(x10.io.Console.get$OUT()));
                    
                    //#line 72 "PixelBlurPar.x10"
                    final x10.core.Rail t$1102 = (((x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>>)(this.pixelRailsRef))).$apply$G();
                    
                    //#line 72 "PixelBlurPar.x10"
                    final java.lang.String t$1104 = ((x10.core.Rail<x10.core.Rail<x10.core.Double>>)t$1102).toString();
                    
                    //#line 72 "PixelBlurPar.x10"
                    t$1103.println(((java.lang.Object)(t$1104)));
                }}catch (java.lang.Throwable __lowerer__var__0__) {
                    
                    //#line 72 "PixelBlurPar.x10"
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
        
        @x10.runtime.impl.java.X10Generated
        final public static class $Closure$18 extends x10.core.Ref implements x10.core.fun.VoidFun_0_0, x10.serialization.X10JavaSerializable
        {
            public static final x10.rtt.RuntimeType<$Closure$18> $RTT = 
                x10.rtt.StaticVoidFunType.<$Closure$18> make($Closure$18.class,
                                                             new x10.rtt.Type[] {
                                                                 x10.core.fun.VoidFun_0_0.$RTT
                                                             });
            
            public x10.rtt.RuntimeType<?> $getRTT() { return $RTT; }
            
            public x10.rtt.Type<?> $getParam(int i) { return null; }
            
            private Object writeReplace() throws java.io.ObjectStreamException {
                return new x10.serialization.SerializationProxy(this);
            }
            
            public static x10.serialization.X10JavaSerializable $_deserialize_body(PixelBlurPar.$Closure$18 $_obj, x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
                if (x10.runtime.impl.java.Runtime.TRACE_SER) { x10.runtime.impl.java.Runtime.printTraceMessage("X10JavaSerializable: $_deserialize_body() of " + $Closure$18.class + " calling"); } 
                $_obj.myPixel = $deserializer.readDouble();
                $_obj.p = $deserializer.readObject();
                $_obj.pixelRailsRef = $deserializer.readObject();
                return $_obj;
            }
            
            public static x10.serialization.X10JavaSerializable $_deserializer(x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
                PixelBlurPar.$Closure$18 $_obj = new PixelBlurPar.$Closure$18((java.lang.System[]) null);
                $deserializer.record_reference($_obj);
                return $_deserialize_body($_obj, $deserializer);
            }
            
            public void $_serialize(x10.serialization.X10JavaSerializer $serializer) throws java.io.IOException {
                $serializer.write(this.myPixel);
                $serializer.write(this.p);
                $serializer.write(this.pixelRailsRef);
                
            }
            
            // constructor just for allocation
            public $Closure$18(final java.lang.System[] $dummy) {
                
            }
            
            // synthetic type for parameter mangling
            public static final class __0$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2 {}
            
        
            
            public void $apply() {
                
                //#line 82 "PixelBlurPar.x10"
                try {{
                    
                    //#line 82 "PixelBlurPar.x10"
                    final x10.core.Rail t$1109 = (((x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>>)(this.pixelRailsRef))).$apply$G();
                    
                    //#line 82 "PixelBlurPar.x10"
                    final long t$1110 = this.p.id;
                    
                    //#line 82 "PixelBlurPar.x10"
                    final x10.core.Rail t$1111 = ((x10.core.Rail[])t$1109.value)[(int)t$1110];
                    
                    //#line 82 "PixelBlurPar.x10"
                    ((double[])t$1111.value)[(int)1L] = this.myPixel;
                }}catch (java.lang.Throwable __lowerer__var__0__) {
                    
                    //#line 82 "PixelBlurPar.x10"
                    int __lowerer__var__1__ = (x10.core.Int.$unbox(x10.xrx.Runtime.<x10.core.Int> wrapAtChecked$G(x10.rtt.Types.INT, ((java.lang.Throwable)(__lowerer__var__0__)))));
                }
            }
            
            public x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>> pixelRailsRef;
            public x10.lang.Place p;
            public double myPixel;
            
            public $Closure$18(final x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>> pixelRailsRef, final x10.lang.Place p, final double myPixel, __0$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2 $dummy) {
                 {
                    this.pixelRailsRef = ((x10.core.GlobalRef)(pixelRailsRef));
                    this.p = ((x10.lang.Place)(p));
                    this.myPixel = myPixel;
                }
            }
            
        }
        
        @x10.runtime.impl.java.X10Generated
        final public static class $Closure$19 extends x10.core.Ref implements x10.core.fun.VoidFun_0_0, x10.serialization.X10JavaSerializable
        {
            public static final x10.rtt.RuntimeType<$Closure$19> $RTT = 
                x10.rtt.StaticVoidFunType.<$Closure$19> make($Closure$19.class,
                                                             new x10.rtt.Type[] {
                                                                 x10.core.fun.VoidFun_0_0.$RTT
                                                             });
            
            public x10.rtt.RuntimeType<?> $getRTT() { return $RTT; }
            
            public x10.rtt.Type<?> $getParam(int i) { return null; }
            
            private Object writeReplace() throws java.io.ObjectStreamException {
                return new x10.serialization.SerializationProxy(this);
            }
            
            public static x10.serialization.X10JavaSerializable $_deserialize_body(PixelBlurPar.$Closure$19 $_obj, x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
                if (x10.runtime.impl.java.Runtime.TRACE_SER) { x10.runtime.impl.java.Runtime.printTraceMessage("X10JavaSerializable: $_deserialize_body() of " + $Closure$19.class + " calling"); } 
                $_obj.myPixel = $deserializer.readDouble();
                $_obj.p = $deserializer.readObject();
                $_obj.pixelRailsRef = $deserializer.readObject();
                $_obj.selfClock = $deserializer.readObject();
                return $_obj;
            }
            
            public static x10.serialization.X10JavaSerializable $_deserializer(x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
                PixelBlurPar.$Closure$19 $_obj = new PixelBlurPar.$Closure$19((java.lang.System[]) null);
                $deserializer.record_reference($_obj);
                return $_deserialize_body($_obj, $deserializer);
            }
            
            public void $_serialize(x10.serialization.X10JavaSerializer $serializer) throws java.io.IOException {
                $serializer.write(this.myPixel);
                $serializer.write(this.p);
                $serializer.write(this.pixelRailsRef);
                $serializer.write(this.selfClock);
                
            }
            
            // constructor just for allocation
            public $Closure$19(final java.lang.System[] $dummy) {
                
            }
            
            // synthetic type for parameter mangling
            public static final class __1$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2 {}
            
        
            
            public void $apply() {
                
                //#line 80 "PixelBlurPar.x10"
                try {{
                    
                    //#line 81 "PixelBlurPar.x10"
                    final x10.io.Printer t$1107 = ((x10.io.Printer)(x10.io.Console.get$OUT()));
                    
                    //#line 81 "PixelBlurPar.x10"
                    final java.lang.String t$1108 = ((this.p) + (" SENDING TO SELF"));
                    
                    //#line 81 "PixelBlurPar.x10"
                    t$1107.println(((java.lang.Object)(t$1108)));
                    
                    //#line 82 "PixelBlurPar.x10"
                    final x10.lang.Place t$1112 = ((x10.lang.Place)((this.pixelRailsRef).home));
                    {
                        
                        //#line 82 "PixelBlurPar.x10"
                        x10.xrx.Runtime.runAt(((x10.lang.Place)(t$1112)), ((x10.core.fun.VoidFun_0_0)(new PixelBlurPar.$Closure$18(((x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>>)(this.pixelRailsRef)), ((x10.lang.Place)(this.p)), ((double)(this.myPixel)), (PixelBlurPar.$Closure$18.__0$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2) null))), ((x10.xrx.Runtime.Profile)(null)));
                    }
                    
                    //#line 83 "PixelBlurPar.x10"
                    this.selfClock.advance();
                }}catch (java.lang.Error __lowerer__var__0__) {
                    
                    //#line 80 "PixelBlurPar.x10"
                    throw __lowerer__var__0__;
                }catch (java.lang.Throwable __lowerer__var__1__) {
                    
                    //#line 80 "PixelBlurPar.x10"
                    throw x10.rtt.Types.EXCEPTION.isInstance(__lowerer__var__1__) ? (java.lang.RuntimeException)(__lowerer__var__1__) : new x10.lang.WrappedThrowable(__lowerer__var__1__);
                }
            }
            
            public x10.lang.Place p;
            public x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>> pixelRailsRef;
            public double myPixel;
            public x10.lang.Clock selfClock;
            
            public $Closure$19(final x10.lang.Place p, final x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>> pixelRailsRef, final double myPixel, final x10.lang.Clock selfClock, __1$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2 $dummy) {
                 {
                    this.p = ((x10.lang.Place)(p));
                    this.pixelRailsRef = ((x10.core.GlobalRef)(pixelRailsRef));
                    this.myPixel = myPixel;
                    this.selfClock = ((x10.lang.Clock)(selfClock));
                }
            }
            
        }
        
        @x10.runtime.impl.java.X10Generated
        final public static class $Closure$20 extends x10.core.Ref implements x10.core.fun.VoidFun_0_0, x10.serialization.X10JavaSerializable
        {
            public static final x10.rtt.RuntimeType<$Closure$20> $RTT = 
                x10.rtt.StaticVoidFunType.<$Closure$20> make($Closure$20.class,
                                                             new x10.rtt.Type[] {
                                                                 x10.core.fun.VoidFun_0_0.$RTT
                                                             });
            
            public x10.rtt.RuntimeType<?> $getRTT() { return $RTT; }
            
            public x10.rtt.Type<?> $getParam(int i) { return null; }
            
            private Object writeReplace() throws java.io.ObjectStreamException {
                return new x10.serialization.SerializationProxy(this);
            }
            
            public static x10.serialization.X10JavaSerializable $_deserialize_body(PixelBlurPar.$Closure$20 $_obj, x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
                if (x10.runtime.impl.java.Runtime.TRACE_SER) { x10.runtime.impl.java.Runtime.printTraceMessage("X10JavaSerializable: $_deserialize_body() of " + $Closure$20.class + " calling"); } 
                $_obj.myPixel = $deserializer.readDouble();
                $_obj.p = $deserializer.readObject();
                $_obj.pixelRailsRef = $deserializer.readObject();
                return $_obj;
            }
            
            public static x10.serialization.X10JavaSerializable $_deserializer(x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
                PixelBlurPar.$Closure$20 $_obj = new PixelBlurPar.$Closure$20((java.lang.System[]) null);
                $deserializer.record_reference($_obj);
                return $_deserialize_body($_obj, $deserializer);
            }
            
            public void $_serialize(x10.serialization.X10JavaSerializer $serializer) throws java.io.IOException {
                $serializer.write(this.myPixel);
                $serializer.write(this.p);
                $serializer.write(this.pixelRailsRef);
                
            }
            
            // constructor just for allocation
            public $Closure$20(final java.lang.System[] $dummy) {
                
            }
            
            // synthetic type for parameter mangling
            public static final class __0$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2 {}
            
        
            
            public void $apply() {
                
                //#line 88 "PixelBlurPar.x10"
                try {{
                    
                    //#line 88 "PixelBlurPar.x10"
                    final x10.core.Rail t$1118 = (((x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>>)(this.pixelRailsRef))).$apply$G();
                    
                    //#line 88 "PixelBlurPar.x10"
                    final long t$1117 = this.p.id;
                    
                    //#line 88 "PixelBlurPar.x10"
                    final long t$1119 = ((t$1117) + (((long)(1L))));
                    
                    //#line 88 "PixelBlurPar.x10"
                    final x10.core.Rail t$1120 = ((x10.core.Rail[])t$1118.value)[(int)t$1119];
                    
                    //#line 88 "PixelBlurPar.x10"
                    ((double[])t$1120.value)[(int)0L] = this.myPixel;
                }}catch (java.lang.Throwable __lowerer__var__2__) {
                    
                    //#line 88 "PixelBlurPar.x10"
                    int __lowerer__var__3__ = (x10.core.Int.$unbox(x10.xrx.Runtime.<x10.core.Int> wrapAtChecked$G(x10.rtt.Types.INT, ((java.lang.Throwable)(__lowerer__var__2__)))));
                }
            }
            
            public x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>> pixelRailsRef;
            public x10.lang.Place p;
            public double myPixel;
            
            public $Closure$20(final x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>> pixelRailsRef, final x10.lang.Place p, final double myPixel, __0$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2 $dummy) {
                 {
                    this.pixelRailsRef = ((x10.core.GlobalRef)(pixelRailsRef));
                    this.p = ((x10.lang.Place)(p));
                    this.myPixel = myPixel;
                }
            }
            
        }
        
        @x10.runtime.impl.java.X10Generated
        final public static class $Closure$21 extends x10.core.Ref implements x10.core.fun.VoidFun_0_0, x10.serialization.X10JavaSerializable
        {
            public static final x10.rtt.RuntimeType<$Closure$21> $RTT = 
                x10.rtt.StaticVoidFunType.<$Closure$21> make($Closure$21.class,
                                                             new x10.rtt.Type[] {
                                                                 x10.core.fun.VoidFun_0_0.$RTT
                                                             });
            
            public x10.rtt.RuntimeType<?> $getRTT() { return $RTT; }
            
            public x10.rtt.Type<?> $getParam(int i) { return null; }
            
            private Object writeReplace() throws java.io.ObjectStreamException {
                return new x10.serialization.SerializationProxy(this);
            }
            
            public static x10.serialization.X10JavaSerializable $_deserialize_body(PixelBlurPar.$Closure$21 $_obj, x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
                if (x10.runtime.impl.java.Runtime.TRACE_SER) { x10.runtime.impl.java.Runtime.printTraceMessage("X10JavaSerializable: $_deserialize_body() of " + $Closure$21.class + " calling"); } 
                $_obj.myPixel = $deserializer.readDouble();
                $_obj.p = $deserializer.readObject();
                $_obj.pixelRailsRef = $deserializer.readObject();
                $_obj.sendRightClock = $deserializer.readObject();
                return $_obj;
            }
            
            public static x10.serialization.X10JavaSerializable $_deserializer(x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
                PixelBlurPar.$Closure$21 $_obj = new PixelBlurPar.$Closure$21((java.lang.System[]) null);
                $deserializer.record_reference($_obj);
                return $_deserialize_body($_obj, $deserializer);
            }
            
            public void $_serialize(x10.serialization.X10JavaSerializer $serializer) throws java.io.IOException {
                $serializer.write(this.myPixel);
                $serializer.write(this.p);
                $serializer.write(this.pixelRailsRef);
                $serializer.write(this.sendRightClock);
                
            }
            
            // constructor just for allocation
            public $Closure$21(final java.lang.System[] $dummy) {
                
            }
            
            // synthetic type for parameter mangling
            public static final class __1$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2 {}
            
        
            
            public void $apply() {
                
                //#line 86 "PixelBlurPar.x10"
                try {{
                    
                    //#line 87 "PixelBlurPar.x10"
                    final x10.io.Printer t$1115 = ((x10.io.Printer)(x10.io.Console.get$OUT()));
                    
                    //#line 87 "PixelBlurPar.x10"
                    final java.lang.String t$1116 = ((this.p) + (" SENDING TO RIGHT"));
                    
                    //#line 87 "PixelBlurPar.x10"
                    t$1115.println(((java.lang.Object)(t$1116)));
                    
                    //#line 88 "PixelBlurPar.x10"
                    final x10.lang.Place t$1121 = ((x10.lang.Place)((this.pixelRailsRef).home));
                    {
                        
                        //#line 88 "PixelBlurPar.x10"
                        x10.xrx.Runtime.runAt(((x10.lang.Place)(t$1121)), ((x10.core.fun.VoidFun_0_0)(new PixelBlurPar.$Closure$20(((x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>>)(this.pixelRailsRef)), ((x10.lang.Place)(this.p)), ((double)(this.myPixel)), (PixelBlurPar.$Closure$20.__0$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2) null))), ((x10.xrx.Runtime.Profile)(null)));
                    }
                    
                    //#line 89 "PixelBlurPar.x10"
                    this.sendRightClock.advance();
                }}catch (java.lang.Error __lowerer__var__2__) {
                    
                    //#line 86 "PixelBlurPar.x10"
                    throw __lowerer__var__2__;
                }catch (java.lang.Throwable __lowerer__var__3__) {
                    
                    //#line 86 "PixelBlurPar.x10"
                    throw x10.rtt.Types.EXCEPTION.isInstance(__lowerer__var__3__) ? (java.lang.RuntimeException)(__lowerer__var__3__) : new x10.lang.WrappedThrowable(__lowerer__var__3__);
                }
            }
            
            public x10.lang.Place p;
            public x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>> pixelRailsRef;
            public double myPixel;
            public x10.lang.Clock sendRightClock;
            
            public $Closure$21(final x10.lang.Place p, final x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>> pixelRailsRef, final double myPixel, final x10.lang.Clock sendRightClock, __1$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2 $dummy) {
                 {
                    this.p = ((x10.lang.Place)(p));
                    this.pixelRailsRef = ((x10.core.GlobalRef)(pixelRailsRef));
                    this.myPixel = myPixel;
                    this.sendRightClock = ((x10.lang.Clock)(sendRightClock));
                }
            }
            
        }
        
        @x10.runtime.impl.java.X10Generated
        final public static class $Closure$22 extends x10.core.Ref implements x10.core.fun.VoidFun_0_0, x10.serialization.X10JavaSerializable
        {
            public static final x10.rtt.RuntimeType<$Closure$22> $RTT = 
                x10.rtt.StaticVoidFunType.<$Closure$22> make($Closure$22.class,
                                                             new x10.rtt.Type[] {
                                                                 x10.core.fun.VoidFun_0_0.$RTT
                                                             });
            
            public x10.rtt.RuntimeType<?> $getRTT() { return $RTT; }
            
            public x10.rtt.Type<?> $getParam(int i) { return null; }
            
            private Object writeReplace() throws java.io.ObjectStreamException {
                return new x10.serialization.SerializationProxy(this);
            }
            
            public static x10.serialization.X10JavaSerializable $_deserialize_body(PixelBlurPar.$Closure$22 $_obj, x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
                if (x10.runtime.impl.java.Runtime.TRACE_SER) { x10.runtime.impl.java.Runtime.printTraceMessage("X10JavaSerializable: $_deserialize_body() of " + $Closure$22.class + " calling"); } 
                $_obj.myPixel = $deserializer.readDouble();
                $_obj.p = $deserializer.readObject();
                $_obj.pixelRailsRef = $deserializer.readObject();
                return $_obj;
            }
            
            public static x10.serialization.X10JavaSerializable $_deserializer(x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
                PixelBlurPar.$Closure$22 $_obj = new PixelBlurPar.$Closure$22((java.lang.System[]) null);
                $deserializer.record_reference($_obj);
                return $_deserialize_body($_obj, $deserializer);
            }
            
            public void $_serialize(x10.serialization.X10JavaSerializer $serializer) throws java.io.IOException {
                $serializer.write(this.myPixel);
                $serializer.write(this.p);
                $serializer.write(this.pixelRailsRef);
                
            }
            
            // constructor just for allocation
            public $Closure$22(final java.lang.System[] $dummy) {
                
            }
            
            // synthetic type for parameter mangling
            public static final class __0$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2 {}
            
        
            
            public void $apply() {
                
                //#line 95 "PixelBlurPar.x10"
                try {{
                    
                    //#line 95 "PixelBlurPar.x10"
                    final x10.core.Rail t$1129 = (((x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>>)(this.pixelRailsRef))).$apply$G();
                    
                    //#line 95 "PixelBlurPar.x10"
                    final long t$1128 = this.p.id;
                    
                    //#line 95 "PixelBlurPar.x10"
                    final long t$1130 = ((t$1128) - (((long)(1L))));
                    
                    //#line 95 "PixelBlurPar.x10"
                    final x10.core.Rail t$1131 = ((x10.core.Rail[])t$1129.value)[(int)t$1130];
                    
                    //#line 95 "PixelBlurPar.x10"
                    ((double[])t$1131.value)[(int)2L] = this.myPixel;
                }}catch (java.lang.Throwable __lowerer__var__2__) {
                    
                    //#line 95 "PixelBlurPar.x10"
                    int __lowerer__var__3__ = (x10.core.Int.$unbox(x10.xrx.Runtime.<x10.core.Int> wrapAtChecked$G(x10.rtt.Types.INT, ((java.lang.Throwable)(__lowerer__var__2__)))));
                }
            }
            
            public x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>> pixelRailsRef;
            public x10.lang.Place p;
            public double myPixel;
            
            public $Closure$22(final x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>> pixelRailsRef, final x10.lang.Place p, final double myPixel, __0$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2 $dummy) {
                 {
                    this.pixelRailsRef = ((x10.core.GlobalRef)(pixelRailsRef));
                    this.p = ((x10.lang.Place)(p));
                    this.myPixel = myPixel;
                }
            }
            
        }
        
        @x10.runtime.impl.java.X10Generated
        final public static class $Closure$23 extends x10.core.Ref implements x10.core.fun.VoidFun_0_0, x10.serialization.X10JavaSerializable
        {
            public static final x10.rtt.RuntimeType<$Closure$23> $RTT = 
                x10.rtt.StaticVoidFunType.<$Closure$23> make($Closure$23.class,
                                                             new x10.rtt.Type[] {
                                                                 x10.core.fun.VoidFun_0_0.$RTT
                                                             });
            
            public x10.rtt.RuntimeType<?> $getRTT() { return $RTT; }
            
            public x10.rtt.Type<?> $getParam(int i) { return null; }
            
            private Object writeReplace() throws java.io.ObjectStreamException {
                return new x10.serialization.SerializationProxy(this);
            }
            
            public static x10.serialization.X10JavaSerializable $_deserialize_body(PixelBlurPar.$Closure$23 $_obj, x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
                if (x10.runtime.impl.java.Runtime.TRACE_SER) { x10.runtime.impl.java.Runtime.printTraceMessage("X10JavaSerializable: $_deserialize_body() of " + $Closure$23.class + " calling"); } 
                $_obj.myPixel = $deserializer.readDouble();
                $_obj.p = $deserializer.readObject();
                $_obj.pixelRailsRef = $deserializer.readObject();
                $_obj.sendLeftClock = $deserializer.readObject();
                return $_obj;
            }
            
            public static x10.serialization.X10JavaSerializable $_deserializer(x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
                PixelBlurPar.$Closure$23 $_obj = new PixelBlurPar.$Closure$23((java.lang.System[]) null);
                $deserializer.record_reference($_obj);
                return $_deserialize_body($_obj, $deserializer);
            }
            
            public void $_serialize(x10.serialization.X10JavaSerializer $serializer) throws java.io.IOException {
                $serializer.write(this.myPixel);
                $serializer.write(this.p);
                $serializer.write(this.pixelRailsRef);
                $serializer.write(this.sendLeftClock);
                
            }
            
            // constructor just for allocation
            public $Closure$23(final java.lang.System[] $dummy) {
                
            }
            
            // synthetic type for parameter mangling
            public static final class __1$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2 {}
            
        
            
            public void $apply() {
                
                //#line 93 "PixelBlurPar.x10"
                try {{
                    
                    //#line 94 "PixelBlurPar.x10"
                    final x10.io.Printer t$1126 = ((x10.io.Printer)(x10.io.Console.get$OUT()));
                    
                    //#line 94 "PixelBlurPar.x10"
                    final java.lang.String t$1127 = ((this.p) + (" SENDING TO LEFT"));
                    
                    //#line 94 "PixelBlurPar.x10"
                    t$1126.println(((java.lang.Object)(t$1127)));
                    
                    //#line 95 "PixelBlurPar.x10"
                    final x10.lang.Place t$1132 = ((x10.lang.Place)((this.pixelRailsRef).home));
                    {
                        
                        //#line 95 "PixelBlurPar.x10"
                        x10.xrx.Runtime.runAt(((x10.lang.Place)(t$1132)), ((x10.core.fun.VoidFun_0_0)(new PixelBlurPar.$Closure$22(((x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>>)(this.pixelRailsRef)), ((x10.lang.Place)(this.p)), ((double)(this.myPixel)), (PixelBlurPar.$Closure$22.__0$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2) null))), ((x10.xrx.Runtime.Profile)(null)));
                    }
                    
                    //#line 96 "PixelBlurPar.x10"
                    this.sendLeftClock.advance();
                }}catch (java.lang.Error __lowerer__var__2__) {
                    
                    //#line 93 "PixelBlurPar.x10"
                    throw __lowerer__var__2__;
                }catch (java.lang.Throwable __lowerer__var__3__) {
                    
                    //#line 93 "PixelBlurPar.x10"
                    throw x10.rtt.Types.EXCEPTION.isInstance(__lowerer__var__3__) ? (java.lang.RuntimeException)(__lowerer__var__3__) : new x10.lang.WrappedThrowable(__lowerer__var__3__);
                }
            }
            
            public x10.lang.Place p;
            public x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>> pixelRailsRef;
            public double myPixel;
            public x10.lang.Clock sendLeftClock;
            
            public $Closure$23(final x10.lang.Place p, final x10.core.GlobalRef<x10.core.Rail<x10.core.Rail<x10.core.Double>>> pixelRailsRef, final double myPixel, final x10.lang.Clock sendLeftClock, __1$1x10$lang$Rail$1x10$lang$Rail$1x10$lang$Double$2$2$2 $dummy) {
                 {
                    this.p = ((x10.lang.Place)(p));
                    this.pixelRailsRef = ((x10.core.GlobalRef)(pixelRailsRef));
                    this.myPixel = myPixel;
                    this.sendLeftClock = ((x10.lang.Clock)(sendLeftClock));
                }
            }
            
        }
        
        }
        
        