#!/bin/sh
#SBATCH --partition=aaiken
#SBATCH --nodes=2
#SBATCH --ntasks=2
#SBATCH --cpus-per-task=20

export X10_NPLACES=4

srun hostname >> x10-hostfile.txt
export X10_HOSTFILE=x10-hostfile.txt

srun ~/x10/x10-2.6.1_linux_x86_64/bin/x10 PixelBlurPar_v2 3 4 5 6
