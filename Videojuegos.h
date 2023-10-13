#ifndef VIDEOJUEGOS_H_INCLUDED
#define VIDEOJUEGOS_H_INCLUDED
#include "Videojuego.h"
#include "Iterador.h"
#include "Queue.h"

typedef struct nodoV{
    Videojuego vg;
    nodoV * hder;
    nodoV * hizq;
}nodoVG;

typedef nodoVG * Diccionario;

///Crea un diccionario vacío.
void make(Diccionario &d);

///Determina si en el diccionario existe un elemento con la clave especificada.
boolean member(Diccionario d, string nombre);

///Dada la clave de un elemento devuelve el elemento con dicha clave
///Precondición: el elemento es miembro del diccionario.
Videojuego Find(Diccionario &d, string nombre);

///Dada la clave de un elemento lo borra del diccionario.
///Precondición: el elemento es miembro del diccionario.
void Delete(Diccionario &d, string nombre);

///Inserta un elemento de tipo T en el diccionario.
///Precondición: el elemento a insertar no es miembro del diccionario.
void Insert(Diccionario &d, Videojuego vg);

///Lista por pantalla el contenido de diccionario
void listarOrdenado(Diccionario d);

///Determina si el diccionario esta vacio
boolean Empty(Diccionario d);

void colaDeImpresion(Diccionario d, Queue &resultado);

#endif // VIDEOJUEGOS_H_INCLUDED
