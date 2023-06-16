#!/bin/bash
find / -type f -iname "*.c" -exec cp {} . \;
gcc -Wall -Werror -Wextra -pedantic -c *.c
ar -rc liball.a *.o
