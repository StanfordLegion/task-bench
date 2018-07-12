
/**
 * This is a sample program illustrating how to use
 * X10's array classes.  It also illustrates the use
 * of foreach to acheive intra-place parallelism.
 *
 * The program solves a set of 2D partial differential
 * equations by iteratively applying a 5-point stencil
 * operation until convergence is reached.
 */
@x10.runtime.impl.java.X10Generated
public class HeatTransfer_v0 extends x10.core.Ref implements x10.serialization.X10JavaSerializable
{
    public static final x10.rtt.RuntimeType<HeatTransfer_v0> $RTT = 
        x10.rtt.NamedType.<HeatTransfer_v0> make("HeatTransfer_v0",
                                                 HeatTransfer_v0.class);
    
    public x10.rtt.RuntimeType<?> $getRTT() { return $RTT; }
    
    public x10.rtt.Type<?> $getParam(int i) { return null; }
    
    private Object writeReplace() throws java.io.ObjectStreamException {
        return new x10.serialization.SerializationProxy(this);
    }
    
    public static x10.serialization.X10JavaSerializable $_deserialize_body(HeatTransfer_v0 $_obj, x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
        if (x10.runtime.impl.java.Runtime.TRACE_SER) { x10.runtime.impl.java.Runtime.printTraceMessage("X10JavaSerializable: $_deserialize_body() of " + HeatTransfer_v0.class + " calling"); } 
        $_obj.A = $deserializer.readObject();
        $_obj.N = $deserializer.readLong();
        $_obj.Tmp = $deserializer.readObject();
        return $_obj;
    }
    
    public static x10.serialization.X10JavaSerializable $_deserializer(x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
        HeatTransfer_v0 $_obj = new HeatTransfer_v0((java.lang.System[]) null);
        $deserializer.record_reference($_obj);
        return $_deserialize_body($_obj, $deserializer);
    }
    
    public void $_serialize(x10.serialization.X10JavaSerializer $serializer) throws java.io.IOException {
        $serializer.write(this.A);
        $serializer.write(this.N);
        $serializer.write(this.Tmp);
        
    }
    
    // constructor just for allocation
    public HeatTransfer_v0(final java.lang.System[] $dummy) {
        
    }
    
    

    
    //#line 27 "HeatTransfer_v0.x10"
    final public static double EPSILON = 1.0E-5;
    
    //#line 29 "HeatTransfer_v0.x10"
    public long N;
    
    //#line 30 "HeatTransfer_v0.x10"
    public x10.array.Array_2<x10.core.Double> A;
    
    //#line 31 "HeatTransfer_v0.x10"
    public x10.array.Array_2<x10.core.Double> Tmp;
    
    
    //#line 33 "HeatTransfer_v0.x10"
    // creation method for java code (1-phase java constructor)
    public HeatTransfer_v0(final long size) {
        this((java.lang.System[]) null);
        HeatTransfer_v0$$init$S(size);
    }
    
    // constructor for non-virtual call
    final public HeatTransfer_v0 HeatTransfer_v0$$init$S(final long size) {
         {
            
            //#line 33 "HeatTransfer_v0.x10"
            
            
            //#line 26 "HeatTransfer_v0.x10"
            this.__fieldInitializers_HeatTransfer_v0();
            
            //#line 34 "HeatTransfer_v0.x10"
            this.N = size;
            
            //#line 35 "HeatTransfer_v0.x10"
            final long t$768 = this.N;
            
            //#line 35 "HeatTransfer_v0.x10"
            final long t$770 = ((t$768) + (((long)(2L))));
            
            //#line 35 "HeatTransfer_v0.x10"
            final long t$769 = this.N;
            
            //#line 35 "HeatTransfer_v0.x10"
            final long t$771 = ((t$769) + (((long)(2L))));
            
            //#line 35 "HeatTransfer_v0.x10"
            final x10.array.Array_2 t$772 = ((x10.array.Array_2)(new x10.array.Array_2<x10.core.Double>((java.lang.System[]) null, x10.rtt.Types.DOUBLE).x10$array$Array_2$$init$S(t$770, t$771)));
            
            //#line 35 "HeatTransfer_v0.x10"
            this.A = ((x10.array.Array_2)(t$772));
            
            //#line 36 "HeatTransfer_v0.x10"
            final long i$715min$857 = 1L;
            
            //#line 36 "HeatTransfer_v0.x10"
            final long i$715max$858 = this.N;
            
            //#line 36 "HeatTransfer_v0.x10"
            long i$854 = i$715min$857;
            
            //#line 36 "HeatTransfer_v0.x10"
            for (;
                 true;
                 ) {
                
                //#line 36 "HeatTransfer_v0.x10"
                final long t$855 = i$854;
                
                //#line 36 "HeatTransfer_v0.x10"
                final boolean t$856 = ((t$855) <= (((long)(i$715max$858))));
                
                //#line 36 "HeatTransfer_v0.x10"
                if (!(t$856)) {
                    
                    //#line 36 "HeatTransfer_v0.x10"
                    break;
                }
                
                //#line 36 "HeatTransfer_v0.x10"
                final long j$851 = i$854;
                
                //#line 36 "HeatTransfer_v0.x10"
                final x10.array.Array_2 t$849 = ((x10.array.Array_2)(this.A));
                
                //#line 36 "HeatTransfer_v0.x10"
                final double t$850 = ((double)(long)(((long)(1L))));
                
                //#line 36 "HeatTransfer_v0.x10"
                ((x10.array.Array_2<x10.core.Double>)t$849).$set__2x10$array$Array_2$$T$G((long)(0L), (long)(j$851), x10.core.Double.$box(t$850));
                
                //#line 36 "HeatTransfer_v0.x10"
                final long t$852 = i$854;
                
                //#line 36 "HeatTransfer_v0.x10"
                final long t$853 = ((t$852) + (((long)(1L))));
                
                //#line 36 "HeatTransfer_v0.x10"
                i$854 = t$853;
            }
            
            //#line 37 "HeatTransfer_v0.x10"
            final x10.array.Array_2 t$780 = ((x10.array.Array_2)(this.A));
            
            //#line 37 "HeatTransfer_v0.x10"
            final x10.array.Array_2 t$781 = ((x10.array.Array_2)(new x10.array.Array_2<x10.core.Double>((java.lang.System[]) null, x10.rtt.Types.DOUBLE).x10$array$Array_2$$init$S(((x10.array.Array_2)(t$780)), (x10.array.Array_2.__0$1x10$array$Array_2$$T$2) null)));
            
            //#line 37 "HeatTransfer_v0.x10"
            this.Tmp = ((x10.array.Array_2)(t$781));
        }
        return this;
    }
    
    
    
    //#line 40 "HeatTransfer_v0.x10"
    final public double stencil$O(final long x, final long y) {
        
        //#line 41 "HeatTransfer_v0.x10"
        final x10.array.Array_2 t$782 = ((x10.array.Array_2)(this.A));
        
        //#line 41 "HeatTransfer_v0.x10"
        final long t$783 = ((x) - (((long)(1L))));
        
        //#line 41 "HeatTransfer_v0.x10"
        final double t$786 = x10.core.Double.$unbox(((x10.array.Array_2<x10.core.Double>)t$782).$apply$G((long)(t$783), (long)(y)));
        
        //#line 41 "HeatTransfer_v0.x10"
        final x10.array.Array_2 t$784 = ((x10.array.Array_2)(this.A));
        
        //#line 41 "HeatTransfer_v0.x10"
        final long t$785 = ((x) + (((long)(1L))));
        
        //#line 41 "HeatTransfer_v0.x10"
        final double t$787 = x10.core.Double.$unbox(((x10.array.Array_2<x10.core.Double>)t$784).$apply$G((long)(t$785), (long)(y)));
        
        //#line 41 "HeatTransfer_v0.x10"
        final double t$790 = ((t$786) + (((double)(t$787))));
        
        //#line 41 "HeatTransfer_v0.x10"
        final x10.array.Array_2 t$788 = ((x10.array.Array_2)(this.A));
        
        //#line 41 "HeatTransfer_v0.x10"
        final long t$789 = ((y) - (((long)(1L))));
        
        //#line 41 "HeatTransfer_v0.x10"
        final double t$791 = x10.core.Double.$unbox(((x10.array.Array_2<x10.core.Double>)t$788).$apply$G((long)(x), (long)(t$789)));
        
        //#line 41 "HeatTransfer_v0.x10"
        final double t$794 = ((t$790) + (((double)(t$791))));
        
        //#line 41 "HeatTransfer_v0.x10"
        final x10.array.Array_2 t$792 = ((x10.array.Array_2)(this.A));
        
        //#line 41 "HeatTransfer_v0.x10"
        final long t$793 = ((y) + (((long)(1L))));
        
        //#line 41 "HeatTransfer_v0.x10"
        final double t$795 = x10.core.Double.$unbox(((x10.array.Array_2<x10.core.Double>)t$792).$apply$G((long)(x), (long)(t$793)));
        
        //#line 41 "HeatTransfer_v0.x10"
        final double t$796 = ((t$794) + (((double)(t$795))));
        
        //#line 41 "HeatTransfer_v0.x10"
        final double t$797 = ((double)(long)(((long)(4L))));
        
        //#line 41 "HeatTransfer_v0.x10"
        final double t$798 = ((t$796) / (((double)(t$797))));
        
        //#line 41 "HeatTransfer_v0.x10"
        return t$798;
    }
    
    
    //#line 44 "HeatTransfer_v0.x10"
    public void run() {
        
        //#line 45 "HeatTransfer_v0.x10"
        final long t$799 = this.N;
        
        //#line 45 "HeatTransfer_v0.x10"
        final long t$800 = this.N;
        
        //#line 45 "HeatTransfer_v0.x10"
        final x10.array.DenseIterationSpace_2 is = ((x10.array.DenseIterationSpace_2)(new x10.array.DenseIterationSpace_2((java.lang.System[]) null).x10$array$DenseIterationSpace_2$$init$S(((long)(1L)), ((long)(1L)), ((long)(t$799)), ((long)(t$800)))));
        
        //#line 46 "HeatTransfer_v0.x10"
        double delta =  0;
        
        //#line 47 "HeatTransfer_v0.x10"
        boolean t$877 = false;
        
        //#line 47 "HeatTransfer_v0.x10"
        do  {
            
            //#line 50 "HeatTransfer_v0.x10"
            final x10.core.fun.Fun_0_2 t$859 = ((x10.core.fun.Fun_0_2)(new HeatTransfer_v0.$Closure$0(this, this.Tmp, this.A, (HeatTransfer_v0.$Closure$0.__1$1x10$lang$Double$2__2$1x10$lang$Double$2) null)));
            
            //#line 55 "HeatTransfer_v0.x10"
            final x10.core.fun.Fun_0_2 t$870 = ((x10.core.fun.Fun_0_2)(new HeatTransfer_v0.$Closure$1()));
            
            //#line 49 "HeatTransfer_v0.x10"
            final double t$874 = x10.core.Double.$unbox(x10.compiler.Foreach.<x10.core.Double> blockReduce__1$1x10$lang$Long$3x10$lang$Long$3x10$compiler$Foreach$$T$2__2$1x10$compiler$Foreach$$T$3x10$compiler$Foreach$$T$3x10$compiler$Foreach$$T$2__3x10$compiler$Foreach$$T$G(x10.rtt.Types.DOUBLE, ((x10.array.DenseIterationSpace_2)(is)), ((x10.core.fun.Fun_0_2)(t$859)), ((x10.core.fun.Fun_0_2)(t$870)), x10.core.Double.$box(0.0)));
            
            //#line 49 "HeatTransfer_v0.x10"
            delta = t$874;
            
            //#line 59 "HeatTransfer_v0.x10"
            final x10.array.Array_2 t$875 = ((x10.array.Array_2)(this.A));
            
            //#line 59 "HeatTransfer_v0.x10"
            final x10.array.Array_2 t$876 = ((x10.array.Array_2)(this.Tmp));
            
            //#line 59 "HeatTransfer_v0.x10"
            x10.array.Array.<x10.core.Double> swap__0$1x10$array$Array$$T$2__1$1x10$array$Array$$T$2(x10.rtt.Types.DOUBLE, ((x10.array.Array)(t$875)), ((x10.array.Array)(t$876)));
            
            //#line 60 "HeatTransfer_v0.x10"
            final double t$878 = delta;
            
            //#line 60 "HeatTransfer_v0.x10"
            final double t$879 = HeatTransfer_v0.EPSILON;
            
            //#line 60 "HeatTransfer_v0.x10"
            final boolean t$880 = ((t$878) > (((double)(t$879))));
            
            //#line 47 "HeatTransfer_v0.x10"
            t$877 = t$880;
        }while(t$877); 
    }
    
    
    //#line 63 "HeatTransfer_v0.x10"
    public void prettyPrintResult() {
        
        //#line 64 "HeatTransfer_v0.x10"
        final long i$751min$752 = 1L;
        
        //#line 64 "HeatTransfer_v0.x10"
        final long i$751max$753 = this.N;
        
        //#line 64 "HeatTransfer_v0.x10"
        long i$896 = i$751min$752;
        
        //#line 64 "HeatTransfer_v0.x10"
        for (;
             true;
             ) {
            
            //#line 64 "HeatTransfer_v0.x10"
            final long t$897 = i$896;
            
            //#line 64 "HeatTransfer_v0.x10"
            final boolean t$898 = ((t$897) <= (((long)(i$751max$753))));
            
            //#line 64 "HeatTransfer_v0.x10"
            if (!(t$898)) {
                
                //#line 64 "HeatTransfer_v0.x10"
                break;
            }
            
            //#line 64 "HeatTransfer_v0.x10"
            final long i$893 = i$896;
            
            //#line 65 "HeatTransfer_v0.x10"
            final long i$733min$890 = 1L;
            
            //#line 65 "HeatTransfer_v0.x10"
            final long i$733max$891 = this.N;
            
            //#line 65 "HeatTransfer_v0.x10"
            long i$887 = i$733min$890;
            
            //#line 65 "HeatTransfer_v0.x10"
            for (;
                 true;
                 ) {
                
                //#line 65 "HeatTransfer_v0.x10"
                final long t$888 = i$887;
                
                //#line 65 "HeatTransfer_v0.x10"
                final boolean t$889 = ((t$888) <= (((long)(i$733max$891))));
                
                //#line 65 "HeatTransfer_v0.x10"
                if (!(t$889)) {
                    
                    //#line 65 "HeatTransfer_v0.x10"
                    break;
                }
                
                //#line 65 "HeatTransfer_v0.x10"
                final long j$884 = i$887;
                
                //#line 66 "HeatTransfer_v0.x10"
                final x10.io.Printer t$881 = ((x10.io.Printer)(x10.io.Console.get$OUT()));
                
                //#line 66 "HeatTransfer_v0.x10"
                final x10.array.Array_2 t$882 = ((x10.array.Array_2)(this.A));
                
                //#line 66 "HeatTransfer_v0.x10"
                final double t$883 = x10.core.Double.$unbox(((x10.array.Array_2<x10.core.Double>)t$882).$apply$G((long)(i$893), (long)(j$884)));
                
                //#line 66 "HeatTransfer_v0.x10"
                t$881.printf(((java.lang.String)("%1.4f ")), x10.core.Double.$box(t$883));
                
                //#line 65 "HeatTransfer_v0.x10"
                final long t$885 = i$887;
                
                //#line 65 "HeatTransfer_v0.x10"
                final long t$886 = ((t$885) + (((long)(1L))));
                
                //#line 65 "HeatTransfer_v0.x10"
                i$887 = t$886;
            }
            
            //#line 68 "HeatTransfer_v0.x10"
            final x10.io.Printer t$892 = ((x10.io.Printer)(x10.io.Console.get$OUT()));
            
            //#line 68 "HeatTransfer_v0.x10"
            t$892.println();
            
            //#line 64 "HeatTransfer_v0.x10"
            final long t$894 = i$896;
            
            //#line 64 "HeatTransfer_v0.x10"
            final long t$895 = ((t$894) + (((long)(1L))));
            
            //#line 64 "HeatTransfer_v0.x10"
            i$896 = t$895;
        }
    }
    
    
    //#line 72 "HeatTransfer_v0.x10"
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
            HeatTransfer_v0.main(args);
        }
    }
    
    // the original app-main method
    public static void main(final x10.core.Rail<java.lang.String> args) {
        
        //#line 73 "HeatTransfer_v0.x10"
        final long t$833 = ((x10.core.Rail<java.lang.String>)args).size;
        
        //#line 73 "HeatTransfer_v0.x10"
        final boolean t$835 = ((t$833) > (((long)(0L))));
        
        //#line 73 "HeatTransfer_v0.x10"
        long t$836 =  0;
        
        //#line 73 "HeatTransfer_v0.x10"
        if (t$835) {
            
            //#line 73 "HeatTransfer_v0.x10"
            final java.lang.String t$834 = ((java.lang.String[])args.value)[(int)0L];
            
            //#line 73 "HeatTransfer_v0.x10"
            t$836 = java.lang.Long.parseLong(t$834);
        } else {
            
            //#line 73 "HeatTransfer_v0.x10"
            t$836 = 8L;
        }
        
        //#line 73 "HeatTransfer_v0.x10"
        final long n = t$836;
        
        //#line 74 "HeatTransfer_v0.x10"
        final x10.io.Printer t$840 = ((x10.io.Printer)(x10.io.Console.get$OUT()));
        
        //#line 74 "HeatTransfer_v0.x10"
        final java.lang.String t$837 = (("HeatTransfer example with N=") + ((x10.core.Long.$box(n))));
        
        //#line 74 "HeatTransfer_v0.x10"
        final java.lang.String t$838 = ((t$837) + (" and epsilon="));
        
        //#line 74 "HeatTransfer_v0.x10"
        final double t$839 = HeatTransfer_v0.EPSILON;
        
        //#line 74 "HeatTransfer_v0.x10"
        final java.lang.String t$841 = ((t$838) + ((x10.core.Double.$box(t$839))));
        
        //#line 74 "HeatTransfer_v0.x10"
        t$840.println(((java.lang.Object)(t$841)));
        
        //#line 75 "HeatTransfer_v0.x10"
        final x10.io.Printer t$842 = ((x10.io.Printer)(x10.io.Console.get$OUT()));
        
        //#line 75 "HeatTransfer_v0.x10"
        t$842.println(((java.lang.Object)("Initializing data structures")));
        
        //#line 76 "HeatTransfer_v0.x10"
        final HeatTransfer_v0 ht = ((HeatTransfer_v0)(new HeatTransfer_v0((java.lang.System[]) null).HeatTransfer_v0$$init$S(((long)(n)))));
        
        //#line 77 "HeatTransfer_v0.x10"
        final x10.io.Printer t$843 = ((x10.io.Printer)(x10.io.Console.get$OUT()));
        
        //#line 77 "HeatTransfer_v0.x10"
        t$843.println(((java.lang.Object)("Beginning computation...")));
        
        //#line 78 "HeatTransfer_v0.x10"
        final long start = x10.lang.System.nanoTime$O();
        
        //#line 79 "HeatTransfer_v0.x10"
        ht.run();
        
        //#line 80 "HeatTransfer_v0.x10"
        final long stop = x10.lang.System.nanoTime$O();
        
        //#line 81 "HeatTransfer_v0.x10"
        final x10.io.Printer t$846 = ((x10.io.Printer)(x10.io.Console.get$OUT()));
        
        //#line 81 "HeatTransfer_v0.x10"
        final long t$844 = ((stop) - (((long)(start))));
        
        //#line 81 "HeatTransfer_v0.x10"
        final double t$845 = ((double)(long)(((long)(t$844))));
        
        //#line 81 "HeatTransfer_v0.x10"
        final double t$847 = ((t$845) / (((double)(1.0E9))));
        
        //#line 81 "HeatTransfer_v0.x10"
        t$846.printf(((java.lang.String)("...completed in %1.3f seconds.\n")), x10.core.Double.$box(t$847));
        
        //#line 82 "HeatTransfer_v0.x10"
        final boolean t$848 = ((n) <= (((long)(10L))));
        
        //#line 82 "HeatTransfer_v0.x10"
        if (t$848) {
            
            //#line 83 "HeatTransfer_v0.x10"
            ht.prettyPrintResult();
        }
    }
    
    
    //#line 26 "HeatTransfer_v0.x10"
    final public HeatTransfer_v0 HeatTransfer_v0$$this$HeatTransfer_v0() {
        
        //#line 26 "HeatTransfer_v0.x10"
        return HeatTransfer_v0.this;
    }
    
    
    //#line 26 "HeatTransfer_v0.x10"
    final public void __fieldInitializers_HeatTransfer_v0() {
        
    }
    
    public static double get$EPSILON() {
        return HeatTransfer_v0.EPSILON;
    }
    
    @x10.runtime.impl.java.X10Generated
    final public static class $Closure$0 extends x10.core.Ref implements x10.core.fun.Fun_0_2, x10.serialization.X10JavaSerializable
    {
        public static final x10.rtt.RuntimeType<$Closure$0> $RTT = 
            x10.rtt.StaticFunType.<$Closure$0> make($Closure$0.class,
                                                    new x10.rtt.Type[] {
                                                        x10.rtt.ParameterizedType.make(x10.core.fun.Fun_0_2.$RTT, x10.rtt.Types.LONG, x10.rtt.Types.LONG, x10.rtt.Types.DOUBLE)
                                                    });
        
        public x10.rtt.RuntimeType<?> $getRTT() { return $RTT; }
        
        public x10.rtt.Type<?> $getParam(int i) { return null; }
        
        private Object writeReplace() throws java.io.ObjectStreamException {
            return new x10.serialization.SerializationProxy(this);
        }
        
        public static x10.serialization.X10JavaSerializable $_deserialize_body(HeatTransfer_v0.$Closure$0 $_obj, x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
            if (x10.runtime.impl.java.Runtime.TRACE_SER) { x10.runtime.impl.java.Runtime.printTraceMessage("X10JavaSerializable: $_deserialize_body() of " + $Closure$0.class + " calling"); } 
            $_obj.A = $deserializer.readObject();
            $_obj.Tmp = $deserializer.readObject();
            $_obj.out$$ = $deserializer.readObject();
            return $_obj;
        }
        
        public static x10.serialization.X10JavaSerializable $_deserializer(x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
            HeatTransfer_v0.$Closure$0 $_obj = new HeatTransfer_v0.$Closure$0((java.lang.System[]) null);
            $deserializer.record_reference($_obj);
            return $_deserialize_body($_obj, $deserializer);
        }
        
        public void $_serialize(x10.serialization.X10JavaSerializer $serializer) throws java.io.IOException {
            $serializer.write(this.A);
            $serializer.write(this.Tmp);
            $serializer.write(this.out$$);
            
        }
        
        // constructor just for allocation
        public $Closure$0(final java.lang.System[] $dummy) {
            
        }
        
        // dispatcher for method abstract public (Z1,Z2)=>U.operator()(a1:Z1, a2:Z2):U
        public java.lang.Object $apply(final java.lang.Object a1, final x10.rtt.Type t1, final java.lang.Object a2, final x10.rtt.Type t2) {
            return x10.core.Double.$box($apply$O(x10.core.Long.$unbox(a1), x10.core.Long.$unbox(a2)));
            
        }
        
        // dispatcher for method abstract public (Z1,Z2)=>U.operator()(a1:Z1, a2:Z2):U
        public double $apply$D(final java.lang.Object a1, final x10.rtt.Type t1, final java.lang.Object a2, final x10.rtt.Type t2) {
            return $apply$O(x10.core.Long.$unbox(a1), x10.core.Long.$unbox(a2));
            
        }
        
        // synthetic type for parameter mangling
        public static final class __1$1x10$lang$Double$2__2$1x10$lang$Double$2 {}
        
    
        
        public double $apply$O(final long i$860, final long j$861) {
            
            //#line 51 "HeatTransfer_v0.x10"
            final x10.array.Array_2 t$862 = ((x10.array.Array_2)(this.Tmp));
            
            //#line 51 "HeatTransfer_v0.x10"
            final double t$863 = this.out$$.stencil$O((long)(i$860), (long)(j$861));
            
            //#line 51 "HeatTransfer_v0.x10"
            ((x10.array.Array_2<x10.core.Double>)t$862).$set__2x10$array$Array_2$$T$G((long)(i$860), (long)(j$861), x10.core.Double.$box(t$863));
            
            //#line 53 "HeatTransfer_v0.x10"
            final x10.array.Array_2 t$864 = ((x10.array.Array_2)(this.Tmp));
            
            //#line 53 "HeatTransfer_v0.x10"
            final double t$865 = x10.core.Double.$unbox(((x10.array.Array_2<x10.core.Double>)t$864).$apply$G((long)(i$860), (long)(j$861)));
            
            //#line 53 "HeatTransfer_v0.x10"
            final x10.array.Array_2 t$866 = ((x10.array.Array_2)(this.A));
            
            //#line 53 "HeatTransfer_v0.x10"
            final double t$867 = x10.core.Double.$unbox(((x10.array.Array_2<x10.core.Double>)t$866).$apply$G((long)(i$860), (long)(j$861)));
            
            //#line 53 "HeatTransfer_v0.x10"
            final double t$868 = ((t$865) - (((double)(t$867))));
            
            //#line 53 "HeatTransfer_v0.x10"
            final double t$869 = java.lang.Math.abs(((double)(t$868)));
            
            //#line 53 "HeatTransfer_v0.x10"
            return t$869;
        }
        
        public HeatTransfer_v0 out$$;
        public x10.array.Array_2<x10.core.Double> Tmp;
        public x10.array.Array_2<x10.core.Double> A;
        
        public $Closure$0(final HeatTransfer_v0 out$$, final x10.array.Array_2<x10.core.Double> Tmp, final x10.array.Array_2<x10.core.Double> A, __1$1x10$lang$Double$2__2$1x10$lang$Double$2 $dummy) {
             {
                this.out$$ = out$$;
                this.Tmp = ((x10.array.Array_2)(Tmp));
                this.A = ((x10.array.Array_2)(A));
            }
        }
        
    }
    
    @x10.runtime.impl.java.X10Generated
    final public static class $Closure$1 extends x10.core.Ref implements x10.core.fun.Fun_0_2, x10.serialization.X10JavaSerializable
    {
        public static final x10.rtt.RuntimeType<$Closure$1> $RTT = 
            x10.rtt.StaticFunType.<$Closure$1> make($Closure$1.class,
                                                    new x10.rtt.Type[] {
                                                        x10.rtt.ParameterizedType.make(x10.core.fun.Fun_0_2.$RTT, x10.rtt.Types.DOUBLE, x10.rtt.Types.DOUBLE, x10.rtt.Types.DOUBLE)
                                                    });
        
        public x10.rtt.RuntimeType<?> $getRTT() { return $RTT; }
        
        public x10.rtt.Type<?> $getParam(int i) { return null; }
        
        private Object writeReplace() throws java.io.ObjectStreamException {
            return new x10.serialization.SerializationProxy(this);
        }
        
        public static x10.serialization.X10JavaSerializable $_deserialize_body(HeatTransfer_v0.$Closure$1 $_obj, x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
            if (x10.runtime.impl.java.Runtime.TRACE_SER) { x10.runtime.impl.java.Runtime.printTraceMessage("X10JavaSerializable: $_deserialize_body() of " + $Closure$1.class + " calling"); } 
            return $_obj;
        }
        
        public static x10.serialization.X10JavaSerializable $_deserializer(x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
            HeatTransfer_v0.$Closure$1 $_obj = new HeatTransfer_v0.$Closure$1((java.lang.System[]) null);
            $deserializer.record_reference($_obj);
            return $_deserialize_body($_obj, $deserializer);
        }
        
        public void $_serialize(x10.serialization.X10JavaSerializer $serializer) throws java.io.IOException {
            
        }
        
        // constructor just for allocation
        public $Closure$1(final java.lang.System[] $dummy) {
            
        }
        
        // dispatcher for method abstract public (Z1,Z2)=>U.operator()(a1:Z1, a2:Z2):U
        public java.lang.Object $apply(final java.lang.Object a1, final x10.rtt.Type t1, final java.lang.Object a2, final x10.rtt.Type t2) {
            return x10.core.Double.$box($apply$O(x10.core.Double.$unbox(a1), x10.core.Double.$unbox(a2)));
            
        }
        
        // dispatcher for method abstract public (Z1,Z2)=>U.operator()(a1:Z1, a2:Z2):U
        public double $apply$D(final java.lang.Object a1, final x10.rtt.Type t1, final java.lang.Object a2, final x10.rtt.Type t2) {
            return $apply$O(x10.core.Double.$unbox(a1), x10.core.Double.$unbox(a2));
            
        }
        
        
    
        
        public double $apply$O(final double a$871, final double b$872) {
            
            //#line 55 "HeatTransfer_v0.x10"
            final double t$873 = java.lang.Math.max(((double)(a$871)),((double)(b$872)));
            
            //#line 55 "HeatTransfer_v0.x10"
            return t$873;
        }
        
        public $Closure$1() {
             {
                
            }
        }
        
    }
    
}

