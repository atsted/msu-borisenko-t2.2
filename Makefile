CC=g++
CFLAGS=-c -Wall -std=c++17

all: real

real: real.o main.o
	$(CC) real.o main.o -o real

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

real.o:	real.h real.cpp
	$(CC) $(CFLAGS) real.h real.cpp

clean:
	rm -rf *.o *.gch