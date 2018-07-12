
/**
 * The classic hello world program, with a twist - prints a message
 * from the command line at every Place. 
 * The messages from each Place may appear in any order, but the
 * finish ensures that the last message printed will be "Goodbye"
 * <pre>
 * Typical output:
 * [dgrove@linchen samples]$ ./HelloWholeWorld 'best wishes'
 * Place(1) says hello and best wishes
 * Place(2) says hello and best wishes
 * Place(3) says hello and best wishes
 * Place(0) says hello and best wishes
 * Goodbye 
 * [dgrove@linchen samples]$
 * </pre>
 */
@x10.runtime.impl.java.X10Generated
public class HelloWholeWorld extends x10.core.Ref implements x10.serialization.X10JavaSerializable
{
    public static final x10.rtt.RuntimeType<HelloWholeWorld> $RTT = 
        x10.rtt.NamedType.<HelloWholeWorld> make("HelloWholeWorld",
                                                 HelloWholeWorld.class);
    
    public x10.rtt.RuntimeType<?> $getRTT() { return $RTT; }
    
    public x10.rtt.Type<?> $getParam(int i) { return null; }
    
    private Object writeReplace() throws java.io.ObjectStreamException {
        return new x10.serialization.SerializationProxy(this);
    }
    
    public static x10.serialization.X10JavaSerializable $_deserialize_body(HelloWholeWorld $_obj, x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
        if (x10.runtime.impl.java.Runtime.TRACE_SER) { x10.runtime.impl.java.Runtime.printTraceMessage("X10JavaSerializable: $_deserialize_body() of " + HelloWholeWorld.class + " calling"); } 
        return $_obj;
    }
    
    public static x10.serialization.X10JavaSerializable $_deserializer(x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
        HelloWholeWorld $_obj = new HelloWholeWorld((java.lang.System[]) null);
        $deserializer.record_reference($_obj);
        return $_deserialize_body($_obj, $deserializer);
    }
    
    public void $_serialize(x10.serialization.X10JavaSerializer $serializer) throws java.io.IOException {
        
    }
    
    // constructor just for allocation
    public HelloWholeWorld(final java.lang.System[] $dummy) {
        
    }
    
    

    
    
    //#line 31 "HelloWholeWorld.x10"
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
            HelloWholeWorld.main(args);
        }
    }
    
    // the original app-main method
    public static void main(final x10.core.Rail<java.lang.String> args) {
        
        //#line 32 "HelloWholeWorld.x10"
        final long t$182 = ((x10.core.Rail<java.lang.String>)args).size;
        
        //#line 32 "HelloWholeWorld.x10"
        final boolean t$184 = ((t$182) < (((long)(1L))));
        
        //#line 32 "HelloWholeWorld.x10"
        if (t$184) {
            
            //#line 33 "HelloWholeWorld.x10"
            final x10.io.Printer t$183 = ((x10.io.Printer)(x10.io.Console.get$OUT()));
            
            //#line 33 "HelloWholeWorld.x10"
            t$183.println(((java.lang.Object)("Usage: HelloWholeWorld message")));
            
            //#line 34 "HelloWholeWorld.x10"
            return;
        }
        {
            
            //#line 37 "HelloWholeWorld.x10"
            x10.xrx.Runtime.ensureNotInAtomic();
            
            //#line 37 "HelloWholeWorld.x10"
            final x10.xrx.FinishState fs$204 = x10.xrx.Runtime.startFinish();
            
            //#line 37 "HelloWholeWorld.x10"
            try {{
                {
                    
                    //#line 37 "HelloWholeWorld.x10"
                    final x10.lang.PlaceGroup t$186 = ((x10.lang.PlaceGroup)(x10.lang.Place.places()));
                    
                    //#line 37 "HelloWholeWorld.x10"
                    final x10.lang.Iterator p$181 = ((x10.lang.Iterable<x10.lang.Place>)t$186).iterator();
                    
                    //#line 37 "HelloWholeWorld.x10"
                    for (;
                         true;
                         ) {
                        
                        //#line 37 "HelloWholeWorld.x10"
                        final boolean t$191 = ((x10.lang.Iterator<x10.lang.Place>)p$181).hasNext$O();
                        
                        //#line 37 "HelloWholeWorld.x10"
                        if (!(t$191)) {
                            
                            //#line 37 "HelloWholeWorld.x10"
                            break;
                        }
                        
                        //#line 37 "HelloWholeWorld.x10"
                        final x10.lang.Place p$193 = ((x10.lang.Place)(((x10.lang.Iterator<x10.lang.Place>)p$181).next$G()));
                        
                        //#line 38 "HelloWholeWorld.x10"
                        x10.xrx.Runtime.runAsync(((x10.lang.Place)(p$193)), ((x10.core.fun.VoidFun_0_0)(new HelloWholeWorld.$Closure$0(args, (HelloWholeWorld.$Closure$0.__0$1x10$lang$String$2) null))), ((x10.xrx.Runtime.Profile)(null)));
                    }
                }
            }}catch (java.lang.Throwable ct$202) {
                
                //#line 37 "HelloWholeWorld.x10"
                x10.xrx.Runtime.pushException(((java.lang.Throwable)(ct$202)));
                
                //#line 37 "HelloWholeWorld.x10"
                throw new java.lang.RuntimeException();
            }finally {{
                 
                 //#line 37 "HelloWholeWorld.x10"
                 x10.xrx.Runtime.stopFinish(((x10.xrx.FinishState)(fs$204)));
             }}
            }
        
        //#line 40 "HelloWholeWorld.x10"
        final x10.io.Printer t$192 = ((x10.io.Printer)(x10.io.Console.get$OUT()));
        
        //#line 40 "HelloWholeWorld.x10"
        t$192.println(((java.lang.Object)("Goodbye")));
        }
    
    
    //#line 30 "HelloWholeWorld.x10"
    final public HelloWholeWorld HelloWholeWorld$$this$HelloWholeWorld() {
        
        //#line 30 "HelloWholeWorld.x10"
        return HelloWholeWorld.this;
    }
    
    
    //#line 30 "HelloWholeWorld.x10"
    // creation method for java code (1-phase java constructor)
    public HelloWholeWorld() {
        this((java.lang.System[]) null);
        HelloWholeWorld$$init$S();
    }
    
    // constructor for non-virtual call
    final public HelloWholeWorld HelloWholeWorld$$init$S() {
         {
            
            //#line 30 "HelloWholeWorld.x10"
            
            
            //#line 30 "HelloWholeWorld.x10"
            this.__fieldInitializers_HelloWholeWorld();
        }
        return this;
    }
    
    
    
    //#line 30 "HelloWholeWorld.x10"
    final public void __fieldInitializers_HelloWholeWorld() {
        
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
        
        public static x10.serialization.X10JavaSerializable $_deserialize_body(HelloWholeWorld.$Closure$0 $_obj, x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
            if (x10.runtime.impl.java.Runtime.TRACE_SER) { x10.runtime.impl.java.Runtime.printTraceMessage("X10JavaSerializable: $_deserialize_body() of " + $Closure$0.class + " calling"); } 
            $_obj.args = $deserializer.readObject();
            return $_obj;
        }
        
        public static x10.serialization.X10JavaSerializable $_deserializer(x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
            HelloWholeWorld.$Closure$0 $_obj = new HelloWholeWorld.$Closure$0((java.lang.System[]) null);
            $deserializer.record_reference($_obj);
            return $_deserialize_body($_obj, $deserializer);
        }
        
        public void $_serialize(x10.serialization.X10JavaSerializer $serializer) throws java.io.IOException {
            $serializer.write(this.args);
            
        }
        
        // constructor just for allocation
        public $Closure$0(final java.lang.System[] $dummy) {
            
        }
        
        // synthetic type for parameter mangling
        public static final class __0$1x10$lang$String$2 {}
        
    
        
        public void $apply() {
            
            //#line 38 "HelloWholeWorld.x10"
            try {{
                
                //#line 38 "HelloWholeWorld.x10"
                final x10.io.Printer t$194 = ((x10.io.Printer)(x10.io.Console.get$OUT()));
                
                //#line 38 "HelloWholeWorld.x10"
                final java.lang.String t$195 = ((x10.x10rt.X10RT.here()) + (" says hello and "));
                
                //#line 38 "HelloWholeWorld.x10"
                final java.lang.String t$196 = ((java.lang.String[])this.args.value)[(int)0L];
                
                //#line 38 "HelloWholeWorld.x10"
                final java.lang.String t$197 = ((t$195) + (t$196));
                
                //#line 38 "HelloWholeWorld.x10"
                t$194.println(((java.lang.Object)(t$197)));
            }}catch (java.lang.Error __lowerer__var__0__) {
                
                //#line 38 "HelloWholeWorld.x10"
                throw __lowerer__var__0__;
            }catch (java.lang.Throwable __lowerer__var__1__) {
                
                //#line 38 "HelloWholeWorld.x10"
                throw x10.rtt.Types.EXCEPTION.isInstance(__lowerer__var__1__) ? (java.lang.RuntimeException)(__lowerer__var__1__) : new x10.lang.WrappedThrowable(__lowerer__var__1__);
            }
        }
        
        public x10.core.Rail<java.lang.String> args;
        
        public $Closure$0(final x10.core.Rail<java.lang.String> args, __0$1x10$lang$String$2 $dummy) {
             {
                this.args = ((x10.core.Rail)(args));
            }
        }
        
    }
    
    }
    
    