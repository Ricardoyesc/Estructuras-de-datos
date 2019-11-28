#include<stdlib.h>
#include<stdio.h>

struct lista_doble {
  int dato;
  struct lista_doble*siguiente;
  struct lista_doble*anterior;
};

struct lista_doble *cabeza = NULL;

void insertar();
void inicializar();
void muestra();
int eliminar();
int reemplazar();

int main(){
  int opc=0;
  do{
    printf("Que deseas hacer?\n");
    printf("1) Insertar\n");
    printf("2) Borrar\n");
    printf("3) Mostrar\n");
    printf("4) Reemplazar un dato\n");
    scanf("%d",&opc);
    switch (opc) {
      case 1:
      insertar();
      break;
      case 2:
      eliminar();
      break;
      case 3:
      muestra();
      break;
      case 4:
      reemplazar();
      break;
    }
  }while (opc!= 0);
  return 0;
}

void insertar(){
  int dato=0;
  printf("Ingresa el valor a insertar\n");
  scanf("%d",&dato );
  if(cabeza==NULL){
    inicializar();
    cabeza->dato=dato;
  }else {
    struct lista_doble *auxiliar=(struct lista_doble*)malloc(sizeof(struct lista_doble));
    auxiliar->dato=dato;
    auxiliar->siguiente=NULL;
    auxiliar->anterior=cabeza;
    cabeza->siguiente=auxiliar;
    cabeza=auxiliar;
  }

}

void inicializar(){
  cabeza= (struct lista_doble*)malloc(sizeof(struct lista_doble));
  cabeza->siguiente=NULL;
  cabeza->anterior=NULL;
}

void muestra(){
  struct lista_doble *aux= cabeza;
  do{
    printf("%d,",aux->dato );
    aux=aux->anterior;
  }while (aux!=NULL);
}

int eliminar(){
  int dato=0;
  struct lista_doble *aux=cabeza;
  printf("Ingresa el dato que quieres borrar\n");
  scanf("%d",&dato );
  if(aux->dato==dato){
    aux->anterior->siguiente=NULL;
    cabeza=aux->anterior;
    free(aux);
    printf("El dato ha sido eliminado");
    return 0;
  }else{
    do {
      if(aux->dato==dato){
        if(aux->anterior==NULL){
          aux->siguiente->anterior=NULL;
          free(aux);
          printf("El dato ha sido eliminado\n");
          return 0;
        }else{
          aux->anterior->siguiente=aux->siguiente;
          aux->siguiente->anterior=aux->anterior;
          free(aux);
          printf("El dato ha sido eliminado\n");
          return 0;
        }
      }
      aux=aux->anterior;
    } while(aux!=NULL);
    printf("El dato no esta en la lista\n");
    return 0;
  }
}

int reemplazar(){
  int dato = 0,reemplazo = 0;
  printf("Ingresa el dato que en el cual vas a reemplazar\n");
  scanf("%d",&dato);
  printf("Ingresa el dato que va a reemplazar su lugar\n");
  scanf("%d",&reemplazo);
  struct lista_doble *aux=cabeza;
  do {
    if(aux->dato==dato){
      aux->dato=reemplazo;
      return 0;
    }
    aux=aux->anterior;
  } while(aux!=NULL);
}