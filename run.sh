#!/bin/bash

if [ -z "$1" ]; then
    echo "Usage: ./run.sh filename.cpp"
    exit 1
fi

file="$1"
output="${file%.cpp}.exe"

g++ "$file" -o "$output" && "./$output"