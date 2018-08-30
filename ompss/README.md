Compile
---------------------------
cd ../core
make
cd ompss
make

Run
---------------------------
For OmpSs
hwloc-ls --of xml > hwloc-topo.xml
export NX_ARGS='--smp-cpus=32 --smp-workers=31 --summary --schedule=socket --socket-auto-detect --hwloc-topology=hwloc-topo.xml --num-sockets=2 --cpus-per-socket=16'
./main -width 31 -worker 32 -field 2 -kernel busy_wait -iter $((1<<24)) -type stencil_1d -steps 1000

For OmpSs-2
User need to export $BOOST_ROOT to install nanos6 and mcxx
taskset -c 0-31 ./main -width 31 -worker 32 -field 2 -kernel busy_wait -iter $((1<<24)) -type stencil_1d -steps 1000

