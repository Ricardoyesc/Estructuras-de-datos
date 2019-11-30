run: a.out
	./a.out
a.out: main.o lista.o
	gcc main.o lista.o
main.o: main.c
		gcc main.c -c
lista.o: lista.c
	gcc lista.c -c
clear:
	rm -f *.o a.out