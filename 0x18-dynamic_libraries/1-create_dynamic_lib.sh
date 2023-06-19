#!/bin/bash
gcc -c -fPIC *.c
gcc -shared *.c -o liball.so
