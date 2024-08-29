#!/bin/bash
# A script to create a static library 'liball.a' from all .c files in the current directory

# Compile all .c files into .o files
gcc -c *.c

# Create the static library 'liball.a' from all .o files
ar rcs liball.a *.o

# Clean up the .o files if desired (uncomment the next line to remove .o files after creating the library)
# rm *.o
