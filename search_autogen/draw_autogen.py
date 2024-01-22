import json
import matplotlib.pyplot as plt
import numpy as np

csfont = {'family':'Times New Roman', 'size':14}
plt.rc('font', **csfont)

# Load data from result.json file
with open('result.json', 'r') as file:
    data = json.load(file)

# Extracting values for the plot
tasks = list(data.keys())
dmda_avgs = [data[task]["dmda_avg"] for task in tasks]
dmdap_avgs = [data[task]["dmdap_avg"] for task in tasks]
speedup_ratios = [data[task]["max_speedup_ratio"] for task in tasks]

# Bar width
bar_width = 0.4

# Positions of the bars on the x-axis
r1 = np.arange(len(dmda_avgs))
r2 = [x + bar_width for x in r1]

# Creating the plot
plt.figure(figsize=(10, 5))

plt.bar(r1, dmda_avgs, color='blue', width=bar_width, edgecolor='grey', label='DMDA Avg')
plt.bar(r2, dmdap_avgs, color='red', width=bar_width, edgecolor='grey', label='DMDAP Avg')

# Adding labels
plt.xlabel('Tasks', fontweight='bold')
plt.xticks([r + bar_width / 2 for r in range(len(dmda_avgs))], tasks)
plt.ylabel('Performance')
plt.title('DMDA vs DMDAP Performance Comparison')

# Adding the speedup ratio as text on the bars
for i in range(len(r1)):
    plt.text(r1[i], dmda_avgs[i], f'{speedup_ratios[i]:.2f}', ha='center')
    plt.text(r2[i], dmdap_avgs[i], f'{speedup_ratios[i]:.2f}', ha='center')

# Adding legend
plt.legend()

# Show the plot
plt.tight_layout()

plt.savefig('result_autogen.png')