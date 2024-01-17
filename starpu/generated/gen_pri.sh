#!/bin/bash

# cp "task_*.txt" from ../../generator to current directory
cp ../../generator/task_*.txt .

rm *auxilary_info.txt

# List files like "task_*.txt"
for f in task_*.txt; do
    echo "Processing $f"
    if [ -f ${f%.txt}.prio ]; then
        echo "File ${f%.txt}.prio already exists, skipping"
        continue
    fi
    python3 dag2prio.py --input $f > ${f%.txt}.prio
done