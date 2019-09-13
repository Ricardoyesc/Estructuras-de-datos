#include <stdio.h>
#include <stdlib.h>

struct pila{
	int numero;
	struct pila* siguiente;
}

struct pila* push(struct pila* pila,int valor);
int pop(struct pila** pila);
int top(struct pila* pila);
void Hanoi(int n,struct pila* A,struct pila* B,struct pila* C);

int main(int argc, char const *argv[])
{
	struct pila* A,B,C;
	int n;
	printf("¿Cuantas fichas hay?")
	scanf("%i", &n);
	for(int i = n; i > 0; i--){
		A = push(A, i);
	}
	Hanoi(n,A,B,C);
	return 0;
}

struct pila* push(struct pila* pila,int valor){
	struct pila* nuevo = (struct pila*) malloc(sizeOf(struct pila));
	nuevo->numero = valor;
	nuevo->siguiente = pila;
	return nuevo;
}
int pop(struct pila** pila){
	int valor = (*pila)->valor;
	struct pila* nodoEliminar = (*pila);
	(*pila) = (*pila)->siguiente;
	free(nodoEliminar);
	return valor;
}
int top(struct pila* pila){
	return pila->valor;
}
void Hanoi(int n,struct pila* A,struct pila* B,struct pila* C){
	if(n == 1){
		printf("A->C");
		push(C,pop(A));
		printf("%i", top(C));
	}else{
		Hanoi(n-1,A,C,B);
		printf("A->C");
		push(C,pop(A));
		printf("%i", top(C));
		Hanoi(n-1,B,A,C)
	}
}