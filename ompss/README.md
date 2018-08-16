Compile
---------------------------
cd ../core
make
cd ompss
make

Run
---------------------------
hwloc-ls --of xml > hwloc-topo.xml
export NX_ARGS='--smp-cpus=20 --smp-workers=19 --summary --schedule=socket --socket-auto-detect --hwloc-topology=hwloc-topo.xml --num-sockets=2 --cpus-per-socket=10'
./main -width 31 -worker 32 -field 2 -kernel busy_wait -iter $((1<<24)) -type stencil_1d -steps 1000
