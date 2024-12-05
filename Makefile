CFLAGS = -Wall -ansi -pedantic -g3

all: adjacency

path.o: path.c adjacency.h 
	gcc $(CFLAGS) path.c -o path.o -c

adjacency: adjacency.c adjacency.h path.o
	gcc $(CFLAGS) path.o adjacency.c -o adjacency 

clean:
	rm adjacency path.o

.PHONY: clean