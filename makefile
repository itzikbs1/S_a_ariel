CC=gcc
AR=ar
FLAGS= -g -Wall
LM = -lm
RCS = -rcs
SHARED = -shared
C = -c
O = -o

all: connections
		$(CC) $(FLAGS) -o all main.o my_mat.o

connections: main.o libconnections.a
		$(CC) $(SHARED) -o connections main.o libconnections.a

libconnections.a: my_mat.o
		$(AR) $(RCS) libconnections.a my_mat.o

# libconnections.so: my_mat.o
#		$(CC) $(SHARED) -o libconnections.so my_mat.o

main.o: main.c my_mat.h
		$(CC) $(FLAGS) -c main.c

my_mat.o: my_mat.c my_mat.h
		$(CC) $(FLAGS) -c my_mat.c


.PHONY: clean all

clean:
	rm -f *.o *.a *.so connections