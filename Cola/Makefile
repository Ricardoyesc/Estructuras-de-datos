run: a.out
	./a.out
a.out: main.o cola.o
	gcc main.o cola.o
main.o: main.c
		gcc main.c -c
cola.o: cola.c
	gcc cola.c -c
clear:
	rm -f *.o a.out