#!/usr/bin/bash
gcc -Wall -c -fPIC *.c 
gcc  -share -o liball.so *.o 
