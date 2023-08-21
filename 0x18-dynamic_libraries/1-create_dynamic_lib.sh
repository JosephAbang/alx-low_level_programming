#!/usr/bin/bash
gcc -fPIC -c -g -Wall *.c
gcc -shared -L. -o liball.so *.o
export LD_LIBRARY_PATH=..:$LD_LIBRARY_PATH
