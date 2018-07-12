
@x10.runtime.impl.java.X10Generated
public class ParPi extends x10.core.Ref implements x10.serialization.X10JavaSerializable
{
    public static final x10.rtt.RuntimeType<ParPi> $RTT = 
        x10.rtt.NamedType.<ParPi> make("ParPi",
                                       ParPi.class);
    
    public x10.rtt.RuntimeType<?> $getRTT() { return $RTT; }
    
    public x10.rtt.Type<?> $getParam(int i) { return null; }
    
    private Object writeReplace() throws java.io.ObjectStreamException {
        return new x10.serialization.SerializationProxy(this);
    }
    
    public static x10.serialization.X10JavaSerializable $_deserialize_body(ParPi $_obj, x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
        if (x10.runtime.impl.java.Runtime.TRACE_SER) { x10.runtime.impl.java.Runtime.printTraceMessage("X10JavaSerializable: $_deserialize_body() of " + ParPi.class + " calling"); } 
        return $_obj;
    }
    
    public static x10.serialization.X10JavaSerializable $_deserializer(x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
        ParPi $_obj = new ParPi((java.lang.System[]) null);
        $deserializer.record_reference($_obj);
        return $_deserialize_body($_obj, $deserializer);
    }
    
    public void $_serialize(x10.serialization.X10JavaSerializer $serializer) throws java.io.IOException {
        
    }
    
    // constructor just for allocation
    public ParPi(final java.lang.System[] $dummy) {
        
    }
    
    

    
    
    //#line 5 "ParPi.x10"
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
            ParPi.main(args);
        }
    }
    
    // the original app-main method
    public static void main(final x10.core.Rail<java.lang.String> args) {
        
        //#line 6 "ParPi.x10"
        final java.lang.String t$318 = ((java.lang.String[])args.value)[(int)0L];
        
        //#line 6 "ParPi.x10"
        final int N = java.lang.Integer.parseInt(t$318);
        
        //#line 7 "ParPi.x10"
        final java.lang.String t$319 = ((java.lang.String[])args.value)[(int)1L];
        
        //#line 7 "ParPi.x10"
        final int P = java.lang.Integer.parseInt(t$319);
        
        //#line 8 "ParPi.x10"
        double C = ((double)(long)(((long)(0L))));
        {
            
            //#line 9 "ParPi.x10"
            x10.xrx.Runtime.ensureNotInAtomic();
            
            //#line 9 "ParPi.x10"
            final x10.xrx.FinishState fs$378 = x10.xrx.Runtime.startFinish();
            {
                
                //#line 9 "ParPi.x10"
                final double[] $C$380 = new double[1];
                
                //#line 9 "ParPi.x10"
                $C$380[(int)0]=C;
                
                //#line 9 "ParPi.x10"
                try {{
                    {
                        
                        //#line 9 "ParPi.x10"
                        final long i$301min$302 = 1L;
                        
                        //#line 9 "ParPi.x10"
                        final long i$301max$303 = ((long)(((int)(P))));
                        
                        //#line 9 "ParPi.x10"
                        long i$371 = i$301min$302;
                        
                        //#line 9 "ParPi.x10"
                        for (;
                             true;
                             ) {
                            
                            //#line 9 "ParPi.x10"
                            final long t$372 = i$371;
                            
                            //#line 9 "ParPi.x10"
                            final boolean t$373 = ((t$372) <= (((long)(i$301max$303))));
                            
                            //#line 9 "ParPi.x10"
                            if (!(t$373)) {
                                
                                //#line 9 "ParPi.x10"
                                break;
                            }
                            
                            //#line 9 "ParPi.x10"
                            x10.xrx.Runtime.runAsync(((x10.core.fun.VoidFun_0_0)(new ParPi.$Closure$0(N, P, $C$380))));
                            
                            //#line 9 "ParPi.x10"
                            final long t$369 = i$371;
                            
                            //#line 9 "ParPi.x10"
                            final long t$370 = ((t$369) + (((long)(1L))));
                            
                            //#line 9 "ParPi.x10"
                            i$371 = t$370;
                        }
                    }
                }}catch (java.lang.Throwable ct$376) {
                    
                    //#line 9 "ParPi.x10"
                    x10.xrx.Runtime.pushException(((java.lang.Throwable)(ct$376)));
                    
                    //#line 9 "ParPi.x10"
                    throw new java.lang.RuntimeException();
                }finally {{
                     
                     //#line 9 "ParPi.x10"
                     x10.xrx.Runtime.stopFinish(((x10.xrx.FinishState)(fs$378)));
                 }}
                
                //#line 9 "ParPi.x10"
                C = ((double)$C$380[(int)0]);
                }
            }
        
        //#line 19 "ParPi.x10"
        final double t$341 = ((double)(long)(((long)(4L))));
        
        //#line 19 "ParPi.x10"
        final double t$342 = C;
        
        //#line 19 "ParPi.x10"
        final double t$343 = ((t$341) * (((double)(t$342))));
        
        //#line 19 "ParPi.x10"
        final double t$344 = ((double)(int)(((int)(N))));
        
        //#line 19 "ParPi.x10"
        final double pi = ((t$343) / (((double)(t$344))));
        
        //#line 20 "ParPi.x10"
        final x10.io.Printer t$345 = ((x10.io.Printer)(x10.io.Console.get$OUT()));
        
        //#line 20 "ParPi.x10"
        final java.lang.String t$346 = (("PI = ") + ((x10.core.Double.$box(pi))));
        
        //#line 20 "ParPi.x10"
        t$345.println(((java.lang.Object)(t$346)));
        }
    
    
    //#line 4 "ParPi.x10"
    final public ParPi ParPi$$this$ParPi() {
        
        //#line 4 "ParPi.x10"
        return ParPi.this;
    }
    
    
    //#line 4 "ParPi.x10"
    // creation method for java code (1-phase java constructor)
    public ParPi() {
        this((java.lang.System[]) null);
        ParPi$$init$S();
    }
    
    // constructor for non-virtual call
    final public ParPi ParPi$$init$S() {
         {
            
            //#line 4 "ParPi.x10"
            
            
            //#line 4 "ParPi.x10"
            this.__fieldInitializers_ParPi();
        }
        return this;
    }
    
    
    
    //#line 4 "ParPi.x10"
    final public void __fieldInitializers_ParPi() {
        
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
        
        public static x10.serialization.X10JavaSerializable $_deserialize_body(ParPi.$Closure$0 $_obj, x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
            if (x10.runtime.impl.java.Runtime.TRACE_SER) { x10.runtime.impl.java.Runtime.printTraceMessage("X10JavaSerializable: $_deserialize_body() of " + $Closure$0.class + " calling"); } 
            $_obj.$C$380 = $deserializer.readObject();
            $_obj.N = $deserializer.readInt();
            $_obj.P = $deserializer.readInt();
            return $_obj;
        }
        
        public static x10.serialization.X10JavaSerializable $_deserializer(x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
            ParPi.$Closure$0 $_obj = new ParPi.$Closure$0((java.lang.System[]) null);
            $deserializer.record_reference($_obj);
            return $_deserialize_body($_obj, $deserializer);
        }
        
        public void $_serialize(x10.serialization.X10JavaSerializer $serializer) throws java.io.IOException {
            $serializer.write(this.$C$380);
            $serializer.write(this.N);
            $serializer.write(this.P);
            
        }
        
        // constructor just for allocation
        public $Closure$0(final java.lang.System[] $dummy) {
            
        }
        
        
    
        
        public void $apply() {
            
            //#line 9 "ParPi.x10"
            try {{
                
                //#line 10 "ParPi.x10"
                final x10.util.Random rand$364 = ((x10.util.Random)(new x10.util.Random((java.lang.System[]) null).x10$util$Random$$init$S()));
                
                //#line 11 "ParPi.x10"
                double c$365 = ((double)(long)(((long)(0L))));
                
                //#line 12 "ParPi.x10"
                final long i$283min$361 = 1L;
                
                //#line 12 "ParPi.x10"
                final int t$362 = ((this.N) / (((int)(this.P))));
                
                //#line 12 "ParPi.x10"
                final long i$283max$363 = ((long)(((int)(t$362))));
                
                //#line 12 "ParPi.x10"
                long i$358 = i$283min$361;
                
                //#line 12 "ParPi.x10"
                for (;
                     true;
                     ) {
                    
                    //#line 12 "ParPi.x10"
                    final long t$359 = i$358;
                    
                    //#line 12 "ParPi.x10"
                    final boolean t$360 = ((t$359) <= (((long)(i$283max$363))));
                    
                    //#line 12 "ParPi.x10"
                    if (!(t$360)) {
                        
                        //#line 12 "ParPi.x10"
                        break;
                    }
                    
                    //#line 13 "ParPi.x10"
                    final double x$347 = rand$364.nextDouble$O();
                    
                    //#line 14 "ParPi.x10"
                    final double y$348 = rand$364.nextDouble$O();
                    
                    //#line 15 "ParPi.x10"
                    final double t$349 = ((x$347) * (((double)(x$347))));
                    
                    //#line 15 "ParPi.x10"
                    final double t$350 = ((y$348) * (((double)(y$348))));
                    
                    //#line 15 "ParPi.x10"
                    final double t$351 = ((t$349) + (((double)(t$350))));
                    
                    //#line 15 "ParPi.x10"
                    final double t$352 = ((double)(long)(((long)(1L))));
                    
                    //#line 15 "ParPi.x10"
                    final boolean t$353 = ((t$351) <= (((double)(t$352))));
                    
                    //#line 15 "ParPi.x10"
                    if (t$353) {
                        
                        //#line 15 "ParPi.x10"
                        final double t$354 = c$365;
                        
                        //#line 15 "ParPi.x10"
                        final double t$355 = ((t$354) + (((double)(1.0))));
                        
                        //#line 15 "ParPi.x10"
                        c$365 = t$355;
                    }
                    
                    //#line 12 "ParPi.x10"
                    final long t$356 = i$358;
                    
                    //#line 12 "ParPi.x10"
                    final long t$357 = ((t$356) + (((long)(1L))));
                    
                    //#line 12 "ParPi.x10"
                    i$358 = t$357;
                }
                
                //#line 17 "ParPi.x10"
                try {{
                    
                    //#line 17 "ParPi.x10"
                    x10.xrx.Runtime.enterAtomic();
                    {
                        
                        //#line 17 "ParPi.x10"
                        final double t$366 = ((double)this.$C$380[(int)0]);
                        
                        //#line 17 "ParPi.x10"
                        final double t$367 = c$365;
                        
                        //#line 17 "ParPi.x10"
                        final double t$368 = ((t$366) + (((double)(t$367))));
                        
                        //#line 17 "ParPi.x10"
                        this.$C$380[(int)0]=t$368;
                    }
                }}finally {{
                      
                      //#line 17 "ParPi.x10"
                      x10.xrx.Runtime.exitAtomic();
                  }}
                }}catch (java.lang.Error __lowerer__var__0__) {
                    
                    //#line 9 "ParPi.x10"
                    throw __lowerer__var__0__;
                }catch (java.lang.Throwable __lowerer__var__1__) {
                    
                    //#line 9 "ParPi.x10"
                    throw x10.rtt.Types.EXCEPTION.isInstance(__lowerer__var__1__) ? (java.lang.RuntimeException)(__lowerer__var__1__) : new x10.lang.WrappedThrowable(__lowerer__var__1__);
                }
            }
        
        public int N;
        public int P;
        public double[] $C$380;
        
        public $Closure$0(final int N, final int P, final double[] $C$380) {
             {
                this.N = N;
                this.P = P;
                this.$C$380 = $C$380;
            }
        }
        
        }
        
    }
    
    