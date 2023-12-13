#! /bin/bash

dir="test"
# run all *.spl files in test
for file in test/*.spl; do
    filename=$(basename "$file")
    filename="${filename%.*}"
    echo "Running $filename"
    # echo to my_$filename.out
    bin/splc "$file" > "$dir/$filename.out.my"
    # compare my_$filename.out with $filename.out
    # diff "$dir/$filename.out.my" "$dir/$filename.out"

    # 打印 my_$filename.out 的内容
    echo "Contents of $dir/$filename.out.my:"
    cat "$dir/$filename.out.my"

    # 打印 $filename.out 的内容
    echo "Contents of $dir/$filename.out:"
    cat "$dir/$filename.out"
done

echo "----------------------------------------------------------------"

dir="test_ex"
# run all *.spl files in testex
for file in test_ex/*.spl; do
    filename=$(basename "$file")
    filename="${filename%.*}"
    echo "Running $filename"
    # echo to my_$filename.out
    bin/splc "$file" > "$dir/$filename.out"

    # 打印 $filename.out 的内容
    echo "Contents of $dir/$filename.out:"
    cat "$dir/$filename.out"
done

echo "----------------------------------------------------------------"

dir="extra_test"
# run all *.spl files in test
for file in extra_test/*.spl; do
    filename=$(basename "$file")
    filename="${filename%.*}"
    echo "Running $filename"
    # echo to my_$filename.out
    # bin/splc "$file" > "$dir/$filename.out.my"
    # compare my_$filename.out with $filename.out
    # diff "$dir/$filename.out.my" "$dir/$filename.out"

    # 打印 my_$filename.out 的内容
    echo "Contents of $dir/$filename.out.my:"
    cat "$dir/$filename.out.my"

    # 打印 $filename.out 的内容
    echo "Contents of $dir/$filename.out:"
    cat "$dir/$filename.out"
done
