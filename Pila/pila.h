#ifndef __PILA_H__
#define __PILA_H__

#include <stdlib.h>
#include <stdio.h>

struct nodo {
  struct nodo *siguiente;
  int dato;
};
struct nodo * push(int dato, struct nodo *);
struct nodo * pop( struct nodo *);
void mostrar(struct nodo *);

#endif