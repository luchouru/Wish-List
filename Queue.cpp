#include "Queue.h"

void Make(Queue &q){
    q.prim = NULL;
    q.ult = NULL;
}

void insBack(Queue &q, Videojuego vg){
    nodoQueue * nuevo = new nodoQueue;
    nuevo->vg = vg;
    nuevo->sig = NULL;
    if(q.ult == NULL){
        q.prim = nuevo;
        q.ult = nuevo;
    }else{
        q.ult->sig = nuevo;
        q.ult = nuevo;
    }
}

boolean Empty(Queue q){
    boolean vacia = FALSE;

    if(q.prim == NULL && q.ult == NULL)
        vacia = TRUE;

    return vacia;
}

Videojuego Front(Queue q){
    return q.prim->vg;
}

void RemFront(Queue &q){
    nodoQueue * aux = q.prim;
    q.prim = q.prim->sig;
    delete aux;
}

void listarQueue(Queue q){
    nodoQueue * aux = q.prim;

    while(aux != NULL){
        listarVideojuego(aux->vg);
        printf("\n");
        aux = aux->sig;
    }
}
