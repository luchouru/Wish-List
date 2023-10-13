#include "Logica.h"

void agregarVideojuego(Diccionario &d, Videojuego vg, boolean &error){
    string nombre;
    getNombre(vg,nombre);

    if(!member(d,nombre))
        Insert(d,vg);
    else error = TRUE;

}

void eliminarVideojuego(Diccionario &d, string nombre, boolean &error){
    if(member(d,nombre))
        Delete(d,nombre);
    else error = TRUE;
}

void bajarAux(Diccionario d, FILE * f){
    if(d != NULL){
        bajarVideojuego(d->vg, f);
        bajarAux(d->hizq, f);
        bajarAux(d->hder, f);
    }
}

void bajarRespaldo(Diccionario d, string nomArch){
    FILE * f = fopen(nomArch, "wb");
    bajarAux(d,f);
    fclose(f);
}

void levantarRespaldo(Diccionario &d, string nomArch){
    FILE * f = fopen(nomArch, "rb");
    Videojuego buffer;
    make(d);
    levantarVideojuego(buffer,f);
    while(!feof(f)){
        Insert(d,buffer);
        levantarVideojuego(buffer,f);
    }
    fclose(f);
}

void listarPorPantalla(Diccionario d){
    Queue cola;
    Make(cola);

    colaDeImpresion(d,cola);
    listarQueue(cola);
}
