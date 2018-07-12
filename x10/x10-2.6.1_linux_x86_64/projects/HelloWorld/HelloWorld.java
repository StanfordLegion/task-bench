
@x10.runtime.impl.java.X10Generated
public class HelloWorld extends x10.core.Ref implements x10.serialization.X10JavaSerializable
{
    public static final x10.rtt.RuntimeType<HelloWorld> $RTT = 
        x10.rtt.NamedType.<HelloWorld> make("HelloWorld",
                                            HelloWorld.class);
    
    public x10.rtt.RuntimeType<?> $getRTT() { return $RTT; }
    
    public x10.rtt.Type<?> $getParam(int i) { return null; }
    
    private Object writeReplace() throws java.io.ObjectStreamException {
        return new x10.serialization.SerializationProxy(this);
    }
    
    public static x10.serialization.X10JavaSerializable $_deserialize_body(HelloWorld $_obj, x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
        if (x10.runtime.impl.java.Runtime.TRACE_SER) { x10.runtime.impl.java.Runtime.printTraceMessage("X10JavaSerializable: $_deserialize_body() of " + HelloWorld.class + " calling"); } 
        return $_obj;
    }
    
    public static x10.serialization.X10JavaSerializable $_deserializer(x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
        HelloWorld $_obj = new HelloWorld((java.lang.System[]) null);
        $deserializer.record_reference($_obj);
        return $_deserialize_body($_obj, $deserializer);
    }
    
    public void $_serialize(x10.serialization.X10JavaSerializer $serializer) throws java.io.IOException {
        
    }
    
    // constructor just for allocation
    public HelloWorld(final java.lang.System[] $dummy) {
        
    }
    
    

    
    
    //#line 4 "HelloWorld.x10"
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
            HelloWorld.main(args);
        }
    }
    
    // the original app-main method
    public static void main(final x10.core.Rail<java.lang.String> id$0) {
        
        //#line 5 "HelloWorld.x10"
        final x10.io.Printer t$10 = ((x10.io.Printer)(x10.io.Console.get$OUT()));
        
        //#line 5 "HelloWorld.x10"
        t$10.println(((java.lang.Object)("Hello World!")));
    }
    
    
    //#line 3 "HelloWorld.x10"
    final public HelloWorld HelloWorld$$this$HelloWorld() {
        
        //#line 3 "HelloWorld.x10"
        return HelloWorld.this;
    }
    
    
    //#line 3 "HelloWorld.x10"
    // creation method for java code (1-phase java constructor)
    public HelloWorld() {
        this((java.lang.System[]) null);
        HelloWorld$$init$S();
    }
    
    // constructor for non-virtual call
    final public HelloWorld HelloWorld$$init$S() {
         {
            
            //#line 3 "HelloWorld.x10"
            
            
            //#line 3 "HelloWorld.x10"
            this.__fieldInitializers_HelloWorld();
        }
        return this;
    }
    
    
    
    //#line 3 "HelloWorld.x10"
    final public void __fieldInitializers_HelloWorld() {
        
    }
}

