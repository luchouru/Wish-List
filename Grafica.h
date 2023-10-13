#ifndef GRAFICA_H_INCLUDED
#define GRAFICA_H_INCLUDED
#include "stdio.h"
#include "Logica.h"

///Despliega por pantalla el menu principal
void mostrarMenuPrincipal(int &op);

void validacionVideojuego(Videojuego &vg);

void pedirNombre(string &nombre);

void pedirConsola(string &consola);

#endif // GRAFICA_H_INCLUDED
