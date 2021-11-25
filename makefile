FLAGS= -g -Wall

all: connections

connections: main.o libmy_mat.so
	gcc $(FLAGS) main.o libmy_mat.so -o connections

main.o: main.c my_mat.h
	gcc $(FLAGS) -c main.c

my_mat.o: my_mat.c my_mat.h
	gcc $(FLAGS) -c my_mat.c

libmy_mat.so: my_mat.o 
	gcc -shared -o libmy_mat.so my_mat.o


.PHONY: clean all

clean:
	rm -f connections *.o *.so
