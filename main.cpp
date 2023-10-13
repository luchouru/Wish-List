#include "Grafica.h"
#include "Persistencia.h"
#include "stdlib.h"

int main()
{
    int opcion;

    boolean error = FALSE;

    Videojuego vg;

    Diccionario videojuegos;
    make(videojuegos);

    string respaldo = "respaldo.txt";

    if(!ExisteRR(respaldo))
        bajar(videojuegos,respaldo);
    levantar(videojuegos,respaldo);

    do{
        system("cls");
        printf("\tMENU PRINCIPAL");
        mostrarMenuPrincipal(opcion);
        switch(opcion){
            case 1:
                error = FALSE;
                system("cls");
                printf("\tAGREGAR VIDEOJUEGO");
                printf("\n");
                printf("\n");
                validacionVideojuego(vg);
                agregarVideojuego(videojuegos,vg,error);
                if(!error)
                    printf("\nVideojuego agregado correctamente");
                else
                    printf("\nEl videojuego ya existe");
                printf("\n");
                printf("\nPresione ENTER para continuar");
                fflush(stdin);
                getchar();
                break;
            case 2:
                error = FALSE;
                string nombre;
                system("cls");
                printf("\tELIMINAR VIDEOJUEGO");
                printf("\n");
                printf("\n");
                pedirNombre(nombre);
                eliminarVideojuego(videojuegos,nombre,error);
                if(!error)
                    printf("\nVideojuego eliminado correctamente");
                else
                    printf("\nEl videojuego no existe");
                printf("\n");
                printf("\nPresione ENTER para continuar");
                fflush(stdin);
                getchar();
                break;
            case 3:
                system("cls");
                printf("\tVIDEOJUEGOS:");
                printf("\n");
                printf("\n");
                listarPorPantalla(videojuegos);
                printf("\n");
                printf("\nPresione ENTER para continuar");
                fflush(stdin);
                getchar();
                break;
            default:
                if(opcion != 4)
                    printf("\nOpcion incorrecta\n");
                printf("\nPresione enter para continuar.");
                bajar(videojuegos,respaldo);
                fflush(stdin);
                getchar();
                break;
        }
    }while(opcion != 4);
}
