#!/bin/bash
#SBATCH --partition=aaiken
#SBATCH --nodes=1
#SBATCH --cpus-per-task=20
#SBATCH --exclusive
#SBATCH --time=01:00:00
#SBATCH --mail-type=ALL

DEBUG=0 srun ./build_all.sh
