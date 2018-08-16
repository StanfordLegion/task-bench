Compile
---------------------------
cd ../core
make
cd ompss
make

Run
---------------------------
export NX_ARGS='--smp-cpus=32 --smp-workers=31'
./main -width 31 -worker 32 -field 2 -kernel busy_wait -iter $((1<<24)) -type stencil_1d -steps 1000
