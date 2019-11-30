run: a.out
	./a.out
a.out: main.o listaCircularDoble.o
	gcc main.o listaCircularDoble.o
main.o: main.c
		gcc main.c -c
listaCircularDoble.o: listaCircularDoble.c
	gcc listaCircularDoble.c -c
clear:
	rm -f *.o a.out