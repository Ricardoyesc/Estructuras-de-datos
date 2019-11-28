#include <stdlib.h>
#include <stdio.h>
void ingresar();
void insertar();
struct lista{
  int dato;
};

void aumenta_memoria();
void ingresar();
void mostrar();
void insertar();
int buscar();

struct lista *cabeza=NULL;
int contador=0;
int n=5;

int main(){
  int opc=0;
  do{
    printf("Que quieres hacer?\n");
    printf("1) Ingresar un dato\n");
    printf("2) Mostrar Lista\n");
    printf("3) Buscar un dato\n");
    printf("4) Borrar un dato\n");
    scanf("%d",&opc);
    switch (opc) {
      case 1:
      ingresar();
      break;
      case 2:
        mostrar();
      break;
      case 3:
        buscar();
      break;
    }
  }while (opc!=0);
  return 0;
}

void ingresar(){
  int dato=0;
  fflush(stdin);
  printf("Dame el dato\n");
  scanf("%d",&dato);
  if(cabeza==NULL){
    insertar();
    cabeza->dato=dato;
    contador++;
  }else if((cabeza+contador)==NULL){
    aumenta_memoria();
  }else{
      (cabeza+contador)->dato=dato;
      contador++;
  }

}


void insertar(){
  cabeza=(struct lista *)malloc(sizeof(struct lista)*5);
}

void aumenta_memoria(){
  struct lista *aux=NULL;
  n=n*2;
  aux=(struct lista *)malloc(sizeof(struct lista)*n);
  int i;
  for ( i= 0; i < contador; i++) {
    (aux+i)->dato=(cabeza+i)->dato;
  }
  cabeza=aux;
}

void mostrar(){
  int i;
  for ( i = 0; i <contador; i++) {
    printf("%d,",(cabeza+i)->dato);
  }
}

int  buscar(){
  int find=0;
  printf("Dame el dato que quieres buscar en la lista\n");
  scanf("%d", &find);
  int i;
  for ( i = 0; i < contador; i++) {
    if((cabeza+i)->dato==find){
        printf("El dato %d esta en la posición %d\n",(cabeza+i)->dato,i );
        return 0;
    }
  }
  printf("El dato %d no esta en la lista\n",find);
}