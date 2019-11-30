#include"pila.h"

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
