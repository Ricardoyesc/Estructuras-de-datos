#include "lista.h"

extern struct lista;

int main(){
  int opc=0;
  do{
    printf("Ingresa una opcion\n");
    printf("1)Insertar a la lista\n");
    printf("2)Borrar de la lista\n");
    printf("3)Mostrar la lista\n");
    printf("4)Buscar en la lista\n");
    scanf("%d",&opc);
    switch(opc){
      case 1:
        insertar();
      break;
      case 2:
        eliminar(); 
      break;
      case 3:
        mostrar();
      break;
      case 4:
        buscar();
      break;
    }
  }while(opc!=0);
  return 0;
}