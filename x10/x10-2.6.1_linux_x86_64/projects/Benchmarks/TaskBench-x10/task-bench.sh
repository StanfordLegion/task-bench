#!/bin/sh
#SBATCH --partition=aaiken
#SBATCH --nodes=2
#SBATCH --ntasks=2
#SBATCH --cpus-per-task=20
#SBATCH --time=01:00:00

export X10_NPLACES=4

do
	srun hostname >> x10-hostfile.txt
done
export X10_HOSTFILE=x10-hostfile.txt
