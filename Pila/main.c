#include"pila.h"

int main(){
  struct nodo *tope =NULL;
  int opc=0;
  int dato=0;
  do{
    printf("Ingresa una opcion\n");
    printf("1) Push\n");
    printf("2) Pop\n");
    printf("3) Mostrar pila\n");
    scanf("%d",&opc);
    switch (opc) {
      case 1:

        printf("Teclea el dato\n");
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
