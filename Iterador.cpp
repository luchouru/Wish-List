#include "Iterador.h"

void iterador(Iterador &i){
    i.actual = NULL;
    i.prim = NULL;
    i.ult = NULL;
}

void insertar(Iterador &i, Videojuego vg){
    nodoIterador * nuevo = new nodoIterador;
    nuevo->vg = vg;
    nuevo->sig = NULL;
    if(i.ult == NULL){
        i.actual = nuevo;
        i.prim = nuevo;
        i.ult = nuevo;
    }else{
        i.ult->sig = nuevo;
        i.ult = nuevo;
    }
}

boolean hayMasVideojuegos(Iterador i){
    return boolean (i.actual != NULL);
}

Videojuego siguienteVideojuego(Iterador i){
    return i.actual->vg;
}
