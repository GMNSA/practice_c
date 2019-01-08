#!/usr/bin/env bash

arg=$1
name="main.c"

function Clear() {
  clear
  echo "[Display clearing ...]"
  echo
}

function Compilation() {
  g++ -o result ${name}
}


function run() {
  if [[ -n "${arg}" ]]; then 
    name=${arg}
  fi

  # clear the display
  Clear

  # compile files
  Compilation

  # run
  ./result
}

run
