## Compile
```
cd ../core
make
cd ompss
make
```

## Run
For OmpSs-2
User need to export `$BOOST_ROOT` to install nanos6 and mcxx
```
taskset -c 0-31 ./main -width 31 -worker 32 -field 2 -kernel busy_wait -iter $((1<<24)) -type stencil_1d -steps 1000
```
