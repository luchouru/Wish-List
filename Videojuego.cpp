#include "Videojuego.h"

void videojuego(Videojuego &vg, string nombre, int anio, string genero, string consola){
    strCrear(vg.nombre);
    strCop(vg.nombre,nombre);
    vg.anio = anio;
    strCrear(vg.genero);
    strCop(vg.genero,genero);
    strCrear(vg.consola);
    strCop(vg.consola,consola);
}

void listarVideojuego(Videojuego vg){
    printf("Nombre: ");
    print(vg.nombre);
    printf("\nAnio: %d\n",vg.anio);
    printf("Genero: ");
    print(vg.genero);
    printf("\n");
    printf("Consola: ");
    print(vg.consola);
    printf("\n");
    printf("\n");
}

void getNombre(Videojuego vg, string &resultado){
    strCrear(resultado);
    strCop(resultado,vg.nombre);
}

void getConsola(Videojuego vg, string &resultado){
    strCrear(resultado);
    strCop(resultado,vg.consola);
}

void setNombre(Videojuego &vg, string nombre){
    strDestruir(vg.nombre);
    strCrear(vg.nombre);
    strCop(vg.nombre,nombre);
}

void bajarVideojuego(Videojuego vg, FILE * f){
    bajarString(vg.nombre,f);
    fwrite(&vg.anio,sizeof(int),1,f);
    bajarString(vg.genero,f);
    bajarString(vg.consola,f);
}

void levantarVideojuego(Videojuego &vg, FILE * f){
    strCrear(vg.nombre);
    levantarString(vg.nombre,f);
    fread(&vg.anio,sizeof(int),1,f);
    strCrear(vg.genero);
    levantarString(vg.genero,f);
    strCrear(vg.consola);
    levantarString(vg.consola,f);
}

