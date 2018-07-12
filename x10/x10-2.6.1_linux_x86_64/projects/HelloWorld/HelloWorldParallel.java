
/**
 * Hello World program that uses asynchronization to say "Hello World!" multiple times.
*/
@x10.runtime.impl.java.X10Generated
public class HelloWorldParallel extends x10.core.Ref implements x10.serialization.X10JavaSerializable
{
    public static final x10.rtt.RuntimeType<HelloWorldParallel> $RTT = 
        x10.rtt.NamedType.<HelloWorldParallel> make("HelloWorldParallel",
                                                    HelloWorldParallel.class);
    
    public x10.rtt.RuntimeType<?> $getRTT() { return $RTT; }
    
    public x10.rtt.Type<?> $getParam(int i) { return null; }
    
    private Object writeReplace() throws java.io.ObjectStreamException {
        return new x10.serialization.SerializationProxy(this);
    }
    
    public static x10.serialization.X10JavaSerializable $_deserialize_body(HelloWorldParallel $_obj, x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
        if (x10.runtime.impl.java.Runtime.TRACE_SER) { x10.runtime.impl.java.Runtime.printTraceMessage("X10JavaSerializable: $_deserialize_body() of " + HelloWorldParallel.class + " calling"); } 
        return $_obj;
    }
    
    public static x10.serialization.X10JavaSerializable $_deserializer(x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
        HelloWorldParallel $_obj = new HelloWorldParallel((java.lang.System[]) null);
        $deserializer.record_reference($_obj);
        return $_deserialize_body($_obj, $deserializer);
    }
    
    public void $_serialize(x10.serialization.X10JavaSerializer $serializer) throws java.io.IOException {
        
    }
    
    // constructor just for allocation
    public HelloWorldParallel(final java.lang.System[] $dummy) {
        
    }
    
    

    
    
    //#line 8 "HelloWorldParallel.x10"
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
            HelloWorldParallel.main(args);
        }
    }
    
    // the original app-main method
    public static void main(final x10.core.Rail<java.lang.String> args) {
        {
            
            //#line 9 "HelloWorldParallel.x10"
            x10.xrx.Runtime.ensureNotInAtomic();
            
            //#line 9 "HelloWorldParallel.x10"
            final x10.xrx.FinishState fs$93 = x10.xrx.Runtime.startFinish();
            
            //#line 9 "HelloWorldParallel.x10"
            try {{
                {
                    
                    //#line 9 "HelloWorldParallel.x10"
                    final long i$58min$59 = 0L;
                    
                    //#line 9 "HelloWorldParallel.x10"
                    final long i$58max$60 = 2L;
                    
                    //#line 9 "HelloWorldParallel.x10"
                    long i$86 = i$58min$59;
                    
                    //#line 9 "HelloWorldParallel.x10"
                    for (;
                         true;
                         ) {
                        
                        //#line 9 "HelloWorldParallel.x10"
                        final long t$87 = i$86;
                        
                        //#line 9 "HelloWorldParallel.x10"
                        final boolean t$88 = ((t$87) <= (((long)(i$58max$60))));
                        
                        //#line 9 "HelloWorldParallel.x10"
                        if (!(t$88)) {
                            
                            //#line 9 "HelloWorldParallel.x10"
                            break;
                        }
                        
                        //#line 9 "HelloWorldParallel.x10"
                        final long i$83 = i$86;
                        
                        //#line 10 "HelloWorldParallel.x10"
                        x10.xrx.Runtime.runAsync(((x10.core.fun.VoidFun_0_0)(new HelloWorldParallel.$Closure$0())));
                        
                        //#line 9 "HelloWorldParallel.x10"
                        final long t$84 = i$86;
                        
                        //#line 9 "HelloWorldParallel.x10"
                        final long t$85 = ((t$84) + (((long)(1L))));
                        
                        //#line 9 "HelloWorldParallel.x10"
                        i$86 = t$85;
                    }
                }
            }}catch (java.lang.Throwable ct$91) {
                
                //#line 9 "HelloWorldParallel.x10"
                x10.xrx.Runtime.pushException(((java.lang.Throwable)(ct$91)));
                
                //#line 9 "HelloWorldParallel.x10"
                throw new java.lang.RuntimeException();
            }finally {{
                 
                 //#line 9 "HelloWorldParallel.x10"
                 x10.xrx.Runtime.stopFinish(((x10.xrx.FinishState)(fs$93)));
             }}
            }
        
        //#line 12 "HelloWorldParallel.x10"
        final x10.io.Printer t$81 = ((x10.io.Printer)(x10.io.Console.get$OUT()));
        
        //#line 12 "HelloWorldParallel.x10"
        t$81.println(((java.lang.Object)("Goodby World!")));
        }
    
    
    //#line 7 "HelloWorldParallel.x10"
    final public HelloWorldParallel HelloWorldParallel$$this$HelloWorldParallel() {
        
        //#line 7 "HelloWorldParallel.x10"
        return HelloWorldParallel.this;
    }
    
    
    //#line 7 "HelloWorldParallel.x10"
    // creation method for java code (1-phase java constructor)
    public HelloWorldParallel() {
        this((java.lang.System[]) null);
        HelloWorldParallel$$init$S();
    }
    
    // constructor for non-virtual call
    final public HelloWorldParallel HelloWorldParallel$$init$S() {
         {
            
            //#line 7 "HelloWorldParallel.x10"
            
            
            //#line 7 "HelloWorldParallel.x10"
            this.__fieldInitializers_HelloWorldParallel();
        }
        return this;
    }
    
    
    
    //#line 7 "HelloWorldParallel.x10"
    final public void __fieldInitializers_HelloWorldParallel() {
        
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
        
        public static x10.serialization.X10JavaSerializable $_deserialize_body(HelloWorldParallel.$Closure$0 $_obj, x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
            if (x10.runtime.impl.java.Runtime.TRACE_SER) { x10.runtime.impl.java.Runtime.printTraceMessage("X10JavaSerializable: $_deserialize_body() of " + $Closure$0.class + " calling"); } 
            return $_obj;
        }
        
        public static x10.serialization.X10JavaSerializable $_deserializer(x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
            HelloWorldParallel.$Closure$0 $_obj = new HelloWorldParallel.$Closure$0((java.lang.System[]) null);
            $deserializer.record_reference($_obj);
            return $_deserialize_body($_obj, $deserializer);
        }
        
        public void $_serialize(x10.serialization.X10JavaSerializer $serializer) throws java.io.IOException {
            
        }
        
        // constructor just for allocation
        public $Closure$0(final java.lang.System[] $dummy) {
            
        }
        
        
    
        
        public void $apply() {
            
            //#line 10 "HelloWorldParallel.x10"
            try {{
                
                //#line 10 "HelloWorldParallel.x10"
                final x10.io.Printer t$82 = ((x10.io.Printer)(x10.io.Console.get$OUT()));
                
                //#line 10 "HelloWorldParallel.x10"
                t$82.println(((java.lang.Object)("Hello World!")));
            }}catch (java.lang.Error __lowerer__var__0__) {
                
                //#line 10 "HelloWorldParallel.x10"
                throw __lowerer__var__0__;
            }catch (java.lang.Throwable __lowerer__var__1__) {
                
                //#line 10 "HelloWorldParallel.x10"
                throw x10.rtt.Types.EXCEPTION.isInstance(__lowerer__var__1__) ? (java.lang.RuntimeException)(__lowerer__var__1__) : new x10.lang.WrappedThrowable(__lowerer__var__1__);
            }
        }
        
        public $Closure$0() {
             {
                
            }
        }
        
    }
    
    }
    
    