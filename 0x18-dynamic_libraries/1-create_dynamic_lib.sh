#!/usr/bin/bash
gcc -wall -c -fPIC *.c
gcc -shared *.o -o liball.so
