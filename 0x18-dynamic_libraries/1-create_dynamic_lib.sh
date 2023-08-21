#!/usr/bin/bash
gcc -fPIC -c -g -Wall *.c
gcc -shared -Wl,-soname,liball.so.1 -L. -o liball.so *.o
export LD_LIBRARY_PATH=..:$LD_LIBRARY_PATH
