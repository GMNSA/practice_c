#!/usr/bin/env bash
# AUTHOR:   _who
# FILE:     start.sh
# ROLE:     TODO (some explanation)
# CREATED:  2019-01-17 16:10:59

declare -a arr=("${@}")

function Clear() {
    clear
}

function Compilate() {
    g++ -o ../Compiled/result main.c
}

function Run() {
    Clear

    count=0

    if [[ -n "${arr[0]}" ]]; then 
        for i in "${arr[@]}"
        do
            g++ -c $i -o ../Compiled/${i/.c/.o}
        done

        g++ -c main.c -o ../Compiled/main.o

        for i in "${arr[@]}"
        do
            arr[count]="../Compiled/$i"
            ((count++))
        done

        g++ -Wall -g ../Compiled/main.o ${arr[@]//.c/.o} -o result

    else
        Compilate
    fi

    ./result

    echo 
    echo
    echo "+-------------------------------------------------------+"
}

Run
