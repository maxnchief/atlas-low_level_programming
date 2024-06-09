#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu98 -c *.c
at -rc liball.a *.o 
ranlib liball.a 
