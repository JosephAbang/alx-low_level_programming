#!/usr/bin/bash
gcc -fPIC -c -g -Wall *.c
gcc -shared -o liball.so *.o
rm *.o
