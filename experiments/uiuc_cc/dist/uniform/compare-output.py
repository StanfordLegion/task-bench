import matplotlib.pyplot as plt
import linecache
import math
import numpy as np


case = 0 #0: efficiency; 1: TFlops/s; 2: Bytes/s
compare=False #compare with paper:true; false if not
if (case==0):
    extension='eff'
else:
    extension='tflops'

implementationName1 = "OpenMP"
inputfile1 = "openmp_ngraphs_1_type_stencil_1d_nodes_1.csv"
implementationName2 = "PaRSEC"
inputfile2 = "parsec_ngraphs_1_type_stencil_1d_nodes_1.csv"
implementationName3 = "Legion"
inputfile3 = "legion_util_0_ngraphs_1_type_stencil_1d_nodes_1.csv"

#paper plot
#paper_flops_f1 = implementationName1+"-paper-"+extension+".dat"
#paper_flops_f2 = implementationName2+"-paper-"+extension+".dat"
#paper_flops_f3 = implementationName3+"-paper-"+extension+".dat"

#outputfile="legion-efficiency.eps"

f1 = open("./"+inputfile1, "r")
f2 = open("./"+inputfile2, "r")
f3 = open("./"+inputfile3, "r")

#flops_f1 = open("./"+paper_flops_f1, "r")
#flops_f2 = open("./"+paper_flops_f2, "r")
#flops_f3 = open("./"+paper_flops_f3, "r")

#elapsed,iterations,output,steps,tasks,flops,bytes,width,std,reps,scale_factor,time_per_task,flops_per_second,bytes_per_second,efficiency
title_line = 1
total_line = 20

#Create array
iterations_f1 = np.zeros(total_line-title_line)
iterations_f2 = np.zeros(total_line-title_line)
iterations_f3 = np.zeros(total_line-title_line)
efficiency_f1 = np.zeros(total_line-title_line)
efficiency_f2 = np.zeros(total_line-title_line)
efficiency_f3 = np.zeros(total_line-title_line)
flops_per_second_f1= np.zeros(total_line-title_line)
flops_per_second_f2= np.zeros(total_line-title_line)
flops_per_second_f3= np.zeros(total_line-title_line)
task_granularity_f1 = np.zeros(total_line-title_line)
task_granularity_f2 = np.zeros(total_line-title_line)
task_granularity_f3 = np.zeros(total_line-title_line)
bytes_per_second = np.zeros(total_line-title_line)

#paper_x_f1 = np.zeros(total_line-title_line)
#paper_x_f2 = np.zeros(total_line-title_line)
#paper_x_f3 = np.zeros(total_line-title_line)
#paper_flops_per_second_f1 = np.zeros(total_line-title_line)
#paper_flops_per_second_f2 = np.zeros(total_line-title_line)
#paper_flops_per_second_f3 = np.zeros(total_line-title_line)

for w in range(title_line):
    result_f1=f1.readline()
    result_f2=f2.readline()
    result_f3=f3.readline()

for j in range(total_line-title_line):
    result_f1 = f1.readline().split(',')
    result_f2 = f2.readline().split(',')
    result_f3 = f3.readline().split(',')

    #result_flops_f1 = flops_f1.readline().split(',')
    #result_flops_f2 = flops_f2.readline().split(',')
    #result_flops_f3 = flops_f3.readline().split(',')

    #paper_x_f1[j] = float(result_flops_f1[0])
    #paper_flops_per_second_f1[j] = float(result_flops_f1[1])

    #paper_x_f2[j] = float(result_flops_f2[0])
    #paper_flops_per_second_f2[j] = float(result_flops_f2[1])

    #paper_x_f3[j] = float(result_flops_f3[0])
    #paper_flops_per_second_f3[j] = float(result_flops_f3[1])

    #paper_flops_per_second_f4[j] = float(result_flops_f4[1])

    #print(result_f1)
    iterations_f1[j] = float(result_f1[1])
    efficiency_f1[j] = float(result_f1[14])
    #bytes_per_second_f1[j] = float(result_f1[13])
    flops_per_second_f1[j] = float(result_f1[12])
    task_granularity_f1[j] = float(result_f1[0])/float(result_f1[4])

    iterations_f2[j] = float(result_f2[1])
    efficiency_f2[j] = float(result_f2[14])
    #bytes_per_second_f2[j] = float(result_f2[13])
    flops_per_second_f2[j] = float(result_f2[12])
    task_granularity_f2[j] = float(result_f2[0])/float(result_f2[4])

    iterations_f3[j] = float(result_f3[1])
    efficiency_f3[j] = float(result_f3[14])
    #bytes_per_second_f3[j] = float(result_f3[13])
    flops_per_second_f3[j] = float(result_f3[12])
    task_granularity_f3[j] = float(result_f3[0])/float(result_f3[4])

#figure(figsize=(2.5,2),dpi=300)
if(case==0):
    fig = plt.figure()
    ax = fig.add_subplot(1, 1, 1)
    ax.plot(task_granularity_f1*1.E3, efficiency_f1, color='magenta',marker='D',label=implementationName1)
    ax.plot(task_granularity_f2*1.E3, efficiency_f2, color='aqua', marker='s',label=implementationName2)
    ax.plot(task_granularity_f3*1.E3, efficiency_f3, color="teal",marker="p",label=implementationName3)
    ax.legend()
    ax.invert_xaxis()
    ax.set_xscale('log')
    plt.xlabel("Task Granularity (ms)")
    plt.ylabel("Efficiency")
    if(compare):
        ax.plot(paper_x_f1, paper_flops_per_second_f1, linestyle="dotted",color='magenta',marker='D',label=implementationName1)
        ax.plot(paper_x_f2, paper_flops_per_second_f2, linestyle="dotted",color='aqua', marker='s',label=implementationName2)
        ax.plot(paper_x_f3, paper_flops_per_second_f3, linestyle="dotted",color="teal",marker="p",label=implementationName3)
    plt.savefig("compare_efficiency.eps",format='eps')
#plt.show()

if(case==1):
    fig = plt.figure()
    ax = fig.add_subplot(1, 1, 1)
    ax.plot(iterations_f1, flops_per_second_f1/1.E12,color='magenta',marker='D',label=implementationName1)
    ax.plot(iterations_f2, flops_per_second_f2/1.E12,color='aqua', marker='s',label=implementationName2)
    ax.plot(iterations_f3, flops_per_second_f3/1.E12,color="teal",marker="p",label=implementationName3)
    ax.legend()
    #ax.plot(iterations_f1, flops_per_second_f1/1.E12, color='magenda',marker='D',
    #    iterations_f2, flops_per_second_f2/1.E12, color='aqua', marker='s',
    #    iterations_f3, flops_per_second_f3/1.E12, color='teal',marker='p')
    ax.invert_xaxis()
    ax.set_xscale('log')
    plt.xlabel("Problem Size")
    plt.ylabel("TFlops/s")
    if(compare):
        ax.plot(paper_x_f1, paper_flops_per_second_f1, linestyle="dotted",color='magenta',marker='D',label=implementationName1)
        ax.plot(paper_x_f2, paper_flops_per_second_f2, linestyle="dotted",color='aqua', marker='s',label=implementationName2)
        #ax.plot(paper_x_f3, paper_flops_per_second_f3, linestyle="dotted",color="teal",marker="p",label=implementationName3)
    plt.savefig("compare_tflop_s.eps",format='eps')

if(case==2):
    fig = plt.figure()
    ax = fig.add_subplot(1, 1, 1)
    ax.plot(iterations_f1, efficiency_f1, color='magenta',marker='D',label=implementationName1)
    ax.plot(iterations_f2, efficiency_f2, color='aqua', marker='s',label=implementationName2)
    ax.plot(iterations_f3, efficiency_f3, color="teal",marker="p",label=implementationName3)
    ax.legend()
    ax.invert_xaxis()
    ax.set_xscale('log')
    plt.xlabel("Problem Size")
    plt.ylabel("Efficiency")
    plt.savefig("efficiency_itr.png",dpi=300)

