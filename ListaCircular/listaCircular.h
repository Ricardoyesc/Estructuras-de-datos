#ifndef __LISTACIRCULAR_H__
#define __LISTACIRCULAR_H__

#include<stdio.h>
#include<stdlib.h>

struct listaCircular
{
  int datos;
  struct listaCircular *siguiente;
};


void insertar (struct listaCircular **, int );

void eliminar (struct listaCircular **, int);

void mostrar (struct listaCircular *);

#endif