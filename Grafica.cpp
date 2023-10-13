#include "Grafica.h"

void mostrarMenuPrincipal(int &op){
    printf("\n\n(1)- Agregar videojuego.");
    printf("\n(2)- Eliminar videojuego.");
    printf("\n(3)- Listar por consola.");
    printf("\n(4)- Salir del progrma.");
    printf("\n\nIngrese una opcion: ");
    scanf("%d",&op);
}

void validacionVideojuego(Videojuego &vg){
    int a;
    string nombre, genero, consola, anio;
    strCrear(nombre);
    strCrear(genero);
    strCrear(consola);
    strCrear(anio);

    printf("Ingrese nombre: ");
    scan(nombre);
    convertirMayus(nombre);

    do{
        printf("Ingrese anio: ");
        scan(anio);
    }while(!soloNumeros(anio));
    a = convertirNumero(anio);

    printf("Ingrese genero: ");
    scan(genero);

    printf("Ingrese consola: ");
    scan(consola);

    videojuego(vg,nombre,a,genero,consola);
}

void pedirNombre(string &nombre){
    strCrear(nombre);
    printf("Ingrese nombre: ");
    scan(nombre);
    convertirMayus(nombre);
}

void pedirConsola(string &consola){
    strCrear(consola);
    printf("Ingrese consola: ");
    scan(consola);
    convertirMayus(consola);
}
