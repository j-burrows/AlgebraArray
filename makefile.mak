#makefile
CC = gcc
WARNINGS = -Wall

all: AlgebraArray.dll

AlgebraArray.dll: algebra_array.o
	$(CC) -shared -o AlgebraArray.dll algebra_array.o -Wl,--out-implib,libmessage.a
	
algebra_array.o: algebra_array.c algebra_array.h
	$(CC) -c -DBUILD_DLL algebra_array.c
	
clean:
	rm -rf *o AlgebraArray.dll
