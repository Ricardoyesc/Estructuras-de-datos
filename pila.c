#include <stdlib.h>
#include <stdio.h>

struct nodo {
  struct nodo *siguiente;
  int dato;
};
struct nodo * push(int dato, struct nodo *);
struct nodo * pop( struct nodo *);
void mostrar(struct nodo *);

int main(){
  struct nodo *tope =NULL;
  int opc=0;
  int dato=0;
  do{
    printf("Que quieres hacer en la pila ?\n");
    printf("1) Push\n");
    printf("2) Pop\n");
    printf("3) Mostrar pila\n");
    scanf("%d",&opc);
    switch (opc) {
      case 1:

        printf("Dame el dato pls\n");
        scanf("%d",&dato);
        tope=push(dato,tope);
        break;
        case 2:
          tope=pop(tope);
        break;
        case 3:
        mostrar(tope);
        break;
  }
}while (opc!=0);
  return 0;
}

struct nodo* push(int dato, struct nodo *tope){
  if(tope==NULL){
    tope=(struct nodo *)malloc(sizeof(struct nodo));
    tope->dato=dato;
    tope->siguiente=NULL;
  }else{
    struct nodo *aux=(struct nodo *)malloc(sizeof(struct nodo));
    aux->dato=dato;
    aux->siguiente=tope;
    tope=aux;
  }
  return tope;
}
void mostrar(struct nodo *cabeza){
  while(cabeza!=NULL){
    printf("%d",cabeza->dato);
    cabeza=cabeza->siguiente;
  }
  printf("\n");
}

struct nodo* pop(struct nodo *tope){
  if(tope==NULL){
    return tope;
  }else{
    struct nodo* aux=tope;
    tope=tope->siguiente;
    printf("Se va el dato %d\n",tope->dato );
    free(aux);
  }
  return tope;
}
