#include "lista.h"

extern struct lista_ligada *cabeza;

void insertar(){
  int dato=0;
  printf("Ingresa el dato que quieres insertar\n");
  scanf("%d",&dato);
  if(cabeza==NULL){
    inicializar();
    cabeza->dato=dato;
  }else{
    struct lista_ligada *nuevo=(struct lista_ligada *)malloc(sizeof(struct lista_ligada));
    nuevo->dato=dato;
    nuevo->siguiente=cabeza;
    cabeza=nuevo;
  }
}

void inicializar(){
  cabeza=(struct lista_ligada*)malloc(sizeof(struct lista_ligada));
  cabeza->siguiente=NULL;
}

int mostrar(){
  if(cabeza==NULL){
    return 0;
  }
  struct lista_ligada *aux=cabeza;
  do{
    printf("%d,",aux->dato);
    aux=aux->siguiente;
  } while (aux!=NULL);
  return 0;
}

int eliminar(){
  int dato=0;
  printf("Ingresa el dato que vas a borrar\n");
  scanf("%d",&dato);
  struct lista_ligada *aux=cabeza;
  if(cabeza==NULL){
    printf("El dato no existe\n");
    return 0;
  }
  if(cabeza->dato==dato){
    aux=cabeza;
    cabeza=cabeza->siguiente;
    free(aux);
    printf("El dato se ha eliminado\n");
    return 0;
  }
  do {
    if(aux->siguiente->dato==dato){
      struct lista_ligada *aux2=aux->siguiente;
      aux->siguiente=aux2->siguiente;
      free(aux2);
      printf("El dato se ha eliminado\n");
      return 0;
    }
    aux=aux->siguiente;
  } while (aux->siguiente!=NULL);
  printf("El dato no existe");
  return 0;
}

int buscar(){
  int dato=0;
  printf("Ingresa el dato que quieres buscar\n");
  scanf("%d",&dato);
  struct lista_ligada *aux=cabeza;
  do{
    if(aux->dato==dato){
      printf("El dato %d, esta en la direccion %p\n",aux->dato,*aux);
      return 0;
    }
    aux=aux->siguiente;
  }while(aux!=NULL);
  printf("El dato no esta en la lista\n");
}