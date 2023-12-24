#! /bin/bash

dir="test"
# run all *.spl files in test
for file in test/*.spl; do
    filename=$(basename "$file")
    filename="${filename%.*}"
    # echo to my_$filename.out
    bin/splc "$file" > "$dir/$filename.ir"
done

dir="test-ex"
# run all *.spl files in testex
for file in test-ex/*.spl; do
    filename=$(basename "$file")
    filename="${filename%.*}"
    bin/splc "$file" > "$dir/$filename.ir"
done

