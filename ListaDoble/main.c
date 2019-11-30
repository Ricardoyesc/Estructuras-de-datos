#include"listaDoble.h"

extern struct lista_doble *cabeza;

int main(){
  int opc=0;
  do{
    printf("Ingresa una opcion?\n");
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
