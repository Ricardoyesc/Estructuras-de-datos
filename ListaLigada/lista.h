#ifndef __LISTA_H__
#define __LISTA_H__

#include <stdlib.h>
#include <stdio.h>

struct lista_ligada{
	int dato;
	struct lista_ligada *siguiente;
};

void insertar();
void inicializar();
int mostrar();
int eliminar();
int buscar();


#endif