#ifndef PERSISTENCIA_H_INCLUDED
#define PERSISTENCIA_H_INCLUDED
#include "Logica.h"

///Abre el archivo para escritura y escribe los elementos del árbol
void bajar(Diccionario d, string nomArch);

///Abre el archivo para lectura e inserta en el árbol todos los elementos que están en el archivo.
///Precondición: El archivo existe.
void levantar(Diccionario &d, string nomArch);

///Determina si el archivo está vacío o no.
///Precondición: El archivo existe
boolean Vacio(string nomArch);

///Determine si el archivo existe.
boolean ExisteRR(string nomArch);

#endif // PERSISTENCIA_H_INCLUDED
