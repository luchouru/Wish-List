#include "Videojuegos.h"

void make(Diccionario &d){
    d = NULL;
}

boolean member(Diccionario d, string nombre){
    string aux;
    if(d == NULL)
        return FALSE;
    else{
        getNombre(d->vg,aux);
        if(strEq(nombre,aux))
            return TRUE;
        else if(strMenor(nombre,aux))
            return member(d->hizq,nombre);
        else return member(d->hder,nombre);
    }
}

Videojuego Find(Diccionario &d, string nombre){
    string aux;
    getNombre(d->vg,aux);
    if(strEq(nombre,aux))
        return d->vg;
    else if(strMenor(nombre,aux))
        return Find(d->hizq,nombre);
    else return Find(d->hder,nombre);
}

void minimoABB(Diccionario d, string &resultado){
    string aux;
    strCrear(resultado);
    getNombre(d->vg,aux);

    if(d->hizq == NULL)
        return strCop(aux,resultado);
    else
        return minimoABB(d->hizq,resultado);
}

void borrarMinimo(Diccionario &d) {
    Diccionario aux;

    if(d->hizq == NULL){
        aux = d->hder;
        delete d;
        d = aux;
    }else borrarMinimo(d->hizq);
}

void Delete(Diccionario &d, string nombre){
    Diccionario auxiliar;
    string aux, aux2;
    getNombre(d->vg,aux);

    if(strEq(nombre,aux)){
        if(d->hder == NULL){
            auxiliar = d->hizq;
            delete d;
            d = auxiliar;
        }else{
            if(d->hizq == NULL){
                auxiliar = d->hder;
                delete d;
                d = auxiliar;
            }else{
                minimoABB(d->hder,aux2);
                setNombre(d->vg,aux2);
                borrarMinimo(d->hder);
                }
            }
    }else{
        if(strMenor(nombre,aux))
            Delete(d->hizq,nombre);
        else
            Delete(d->hder,nombre);
    }
}

void Insert(Diccionario &d, Videojuego vg){
    string aux,aux2;
    getNombre(vg,aux2);

    if(d == NULL){
        d = new nodoVG;
        d->vg = vg;
        d->hder = NULL;
        d->hizq = NULL;
    }else{
        getNombre(d->vg,aux);
        if(strMenor(aux2,aux))
            return Insert(d->hizq,vg);
        else
            return Insert(d->hder,vg);
    }
}

void listarOrdenado(Diccionario d){
    if(d != NULL){
        listarOrdenado(d->hizq);
        listarVideojuego(d->vg);
        listarOrdenado(d->hder);
    }
}

boolean Empty(Diccionario d){
    return (boolean) (d == NULL);
}

void colaDeImpresion(Diccionario d, Queue &resultado){
    string aux;
    strCrear(aux);

    if(d != NULL){
        colaDeImpresion(d->hizq,resultado);
        insBack(resultado,d->vg);
        colaDeImpresion(d->hder,resultado);
    }
}
