#include <stdio.h>
#include <stdlib.h>

int valorPeek;
int valorDequeue;

struct Cola {
    int total;
    struct Nodo *datos;
};

void enqueue(struct Cola *, int);

int dequeue(struct Cola *);

int peek(struct Cola *);

void MostrarCola(struct Cola *);

int isEmpty(struct Cola *);

void enqueue(struct Cola *cola, int dato){
    cola -> datos = AgregarNuevoNodoAlFinal(cola -> datos, dato);
    cola -> total = cola -> total + 1;
}

int main(void) {
    struct Cola *cola = (struct Cola*)malloc(sizeof(struct Cola));
    cola -> total = 0;
    cola -> datos = NULL;
    enqueue(cola, 5);
    enqueue(cola, 10);
    enqueue(cola, 15);
    enqueue(cola, 20);
    MostrarCola(cola);
    dequeue(cola);
    MostrarCola(cola);
    enqueue(cola, 5);
    MostrarCola(cola);
    
    return 0;
}

int dequeue(struct Cola *cola){
    if(isEmpty(cola) == 1){
        return 0;
    }
    valorDequeue = cola -> datos -> dato;
    cola -> datos = EliminarNodoAlInicio(cola -> datos);
    cola -> total = cola -> total - 1;
    return 1;
}

intpeek(struct Cola *cola){
    if(isEmpty(cola) == 1){
        return 0;
    }
    valorPeek = cola -> datos -> dato;
    return 1;
}

int isEmpty(struct Cola *cola){
    if(cola -> datos == NULL){
        return 1;
    }
    return 0;
}

void MostrarCola(struct Cola *cola){
    if(isEmpty(cola) == 1){
        puts("No hay datos en la cola.");
        return;
    }
    struct Cola *tmp = NULL;
    tmp = (struct Cola*)malloc(sizeof(struct Cola));
    if(tmp == NULL){
        return;
    }
    while(isEmpty(cola) != 1){
        dequeue(cola);
        printf("%d, ", valorDequeue);
        enqueue(tmp, valorDequeue);
    }
    puts("\n");
    cola -> datos = tmp -> datos;
}
