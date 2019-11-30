#ifndef __LISTADOBLE_H__
#define __LISTADOBLE_H__

#include<stdio.h>
#include<stdlib.h>

struct lista_doble {
  int dato;
  struct lista_doble*siguiente;
  struct lista_doble*anterior;
};

void insertar();
void inicializar();
void muestra();
int eliminar();
int reemplazar();

#endif