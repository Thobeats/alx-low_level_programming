#!/bin/bash

#compile all c files to an object file

gcc -c *.c

#create the library

ar rc liball.a *.o
