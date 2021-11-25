FLAGS= -g -Wall

all: connections

connections: libmy_mat.so
	gcc $(FLAGS) libmy_mat.so -o connections

main.o: main.c my_mat.h
	gcc $(FLAGS) -c main.c

my_mat.o: my_mat.c my_mat.h
	gcc $(FLAGS) -c my_mat.c

libmy_mat.so: my_mat.o main.o 
	gcc -shared -o libmy_mat.so my_mat.o


.PHONY: clean all

clean:
	rm -f *.o *.so connections
