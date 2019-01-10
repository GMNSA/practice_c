#!/usr/bin/env bash

arg=$1
name="main.c"

function Clear() {
  # clear display
  clear
  echo "[Display cleared...]"
  echo
}

function SimpleCompilation() {
  # compilation and run file
  g++ -o result ${name}
}

function ComplexCompilation() {
  # file layout
  g++ -c handler.c -o compiled_files/handler.o
  g++ -c ${name} -o compiled_files/main.o
  g++ -Wall -g compiled_files/handler.o compiled_files/main.o -o result
}


function Run() {
  # clear display
  Clear

  # companing functions
  if [[ -n "${arg}" ]]; then 
    name=${arg}
    ComplexCompilation
  else
    SimpleCompilation
  fi

  ./result
}

# starting
Run

echo 
echo "-=-=-----------------------------------------------=-=-"
