#!/bin/bash

set -e

for f in */*.h */*.cc; do
    clang-format -i "$f" &
done
ruff format . &
wait

if [[ $CHECK_FORMAT -eq 1 ]]; then
    set -x
    git status
    git diff
    git diff-index --quiet HEAD
fi
