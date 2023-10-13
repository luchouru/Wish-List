#ifndef PERSISTENCIA_H_INCLUDED
#define PERSISTENCIA_H_INCLUDED
#include "Logica.h"

///Abre el archivo para escritura y escribe los elementos del �rbol
void bajar(Diccionario d, string nomArch);

///Abre el archivo para lectura e inserta en el �rbol todos los elementos que est�n en el archivo.
///Precondici�n: El archivo existe.
void levantar(Diccionario &d, string nomArch);

///Determina si el archivo est� vac�o o no.
///Precondici�n: El archivo existe
boolean Vacio(string nomArch);

///Determine si el archivo existe.
boolean ExisteRR(string nomArch);

#endif // PERSISTENCIA_H_INCLUDED
