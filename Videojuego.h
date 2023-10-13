#ifndef VIDEOJUEGO_H_INCLUDED
#define VIDEOJUEGO_H_INCLUDED
#include "String.h"

typedef struct{
    string nombre;
    int anio;
    string genero;
    string consola;
}Videojuego;

///carga un videojuego.
void videojuego(Videojuego &vg, string nombre, int anio, string genero, string consola);

///Despliega por pantalla un videojuego.
void listarVideojuego(Videojuego vg);

///Devuelve el nombre de un videojuego.
void getNombre(Videojuego vg, string &resultado);

///Devuelve el nombre de la consola a la que pertenece
void getConsola(Videojuego vg, string &resultado);

///Setea el nombre de un videojuego.
void setNombre(Videojuego &vg, string nombre);

///Escribe en el archivo los datos del videojuego vg.
///Precondición: El archivo viene abierto para escritura.
void bajarVideojuego(Videojuego vg, FILE * f);

///Lee desde el archivo los datos del videojuego vg.
///Precondición: El archivo viene abierto para lectura.
void levantarVideojuego(Videojuego &vg, FILE * f);



#endif // VIDEOJUEGO_H_INCLUDED
