#!/bin/bash

test_name=$1
run_name=${test_name%??}
function run_test(){
    echo 
    gcc $test_name -o $run_name
    if [ $? -eq 0 ];then
        ./$run_name
    fi
}

if [ ! -n "$test_name" ];then
    echo -e "\033[31m You Must input code name ----- \033[1m"
else
    echo -e "\033[46m      This is chapter08 $test_name , Starting to test\033[1m"
    run_test
fi
