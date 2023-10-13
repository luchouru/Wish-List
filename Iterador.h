#ifndef ITERADOR_H_INCLUDED
#define ITERADOR_H_INCLUDED
#include "Videojuego.h"

typedef struct nodoI{
    Videojuego vg;
    nodoI * sig;
}nodoIterador;

typedef struct{
    nodoIterador * prim;
    nodoIterador * ult;
    nodoIterador * actual;
}Iterador;

void iterador(Iterador &i);

void insertar(Iterador &i, Videojuego vg);

boolean hayMasVideojuegos(Iterador i);

Videojuego siguienteVideojuego(Iterador i);

#endif // ITERADOR_H_INCLUDED
