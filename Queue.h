#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED
#include "Videojuego.h"

typedef struct nodoQ{
    Videojuego vg;
    nodoQ * sig;
}nodoQueue;

typedef struct{
    nodoQueue * prim;
    nodoQueue * ult;
}Queue;

void Make(Queue &q);

void insBack(Queue &q, Videojuego vg);

boolean Empty(Queue q);

Videojuego Front(Queue q);

void RemFront(Queue &q);

void listarQueue(Queue q);


#endif // QUEUE_H_INCLUDED
