run: a.out
	./a.out
a.out: main.o listaCircular.o
	gcc main.o listaCircular.o
main.o: main.c
		gcc main.c -c
listaCircular.o: listaCircular.c
	gcc listaCircular.c -c
clear:
	rm -f *.o a.out