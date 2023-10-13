#ifndef LOGICA_H_INCLUDED
#define LOGICA_H_INCLUDED
#include "Videojuegos.h"

void agregarVideojuego(Diccionario &d, Videojuego vg, boolean &error);

void eliminarVideojuego(Diccionario &d, string nombre, boolean &error);

///Abre el archivo para escritura y escribe los elementos del árbol
void bajarRespaldo(Diccionario d, string nomArch);

///Abre el archivo para lectura e inserta en el árbol todos los elementos que están en el archivo.
///Precondición: El archivo existe.
void levantarRespaldo(Diccionario &d, string nomArch);

void listarPorPantalla(Diccionario d);

#endif // LOGICA_H_INCLUDED
