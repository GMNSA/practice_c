#!/usr/bin/env bash
# AUTHOR:   _who
# FILE:     start.sh
# ROLE:     TODO (some explanation)
# CREATED:  2019-01-17 02:25:42

declare -a arr=("${@}")

function Clear() {
    clear
}

function Compilate() {
    g++ -o result main.c
}


function Run()
{
    Clear

    if [[ -n "${arr[0]}" ]]; then
        # count=${#@}
        for i in "${arr[@]}"
        do 
            g++ -c $i -o ${i/.c/.o}
        done
        g++ -c main.c -o main.o
        g++ -Wall -g main.o ${arr[@]//.c/.o} -o result
    else
        Compilate
        echo ""
    fi

    ./result
    echo
    echo 
    echo "+------------------------------------------------------------+"
}


Run
