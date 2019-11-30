run: a.out
	./a.out
a.out: main.o listaDoble.o
	gcc main.o listaDoble.o
main.o: main.c
		gcc main.c -c
listaDoble.o: listaDoble.c
	gcc listaDoble.c -c
clear:
	rm -f *.o a.out