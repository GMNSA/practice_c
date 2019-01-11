#!/usr/bin/env bash
# AUTHOR:   Oleg Gazmanov
# FILE:     start.sh
# ROLE:     TODO (copiled and start script)
# CREATED:  2019-01-10 19:29:55


arg=${1}
name="main.c"

function Clear() {
  # clear display
  clear
  echo "[Display cleared...]"
  echo
}

function ComplexCompiled() {
  # file layout
  g++ -c handler.c -o compiled_files/handler.o
  g++ -c ${name} -o compiled_files/main.o
  g++ -Wall -g compiled_files/handler.o compiled_files/main.o -o result
}

function SimpleCompiled() {
  # compile file
  g++ -o result ${name}
}

function Run() {
  # clear display
  Clear

  # If the name is given then ComplexCompiled (default SimpleCompiled)
  if [[ -n "${arg}" ]]; then
    name=${arg}
    ComplexCompiled
  else
    SimpleCompiled
  fi

  #run script
  ./result

  echo 
  echo 
  echo "--+---------------------------------------+--"
  echo
}

# Starting
Run

