#!/usr/bin/env bash
# AUTHOR:   _who
# FILE:     start.sh
# ROLE:     TODO (some explanation)
# CREATED:  2019-01-15 13:25:34

name="main.c"
args=${1}

function Clear() {
  clear
  echo "[Display cleared...]"
  echo
}

function Compiled() {
  g++ ${name}
}


function Run() {
  # clear display
  Clear

  if [[ -n "${args}" ]]; then 
    name=${args}
    Compiled
  else
    Compiled
  fi

  ./a.out
  echo
  echo
  echo "+---------------------------------------------------+"
}

Run
