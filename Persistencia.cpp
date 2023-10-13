#include "Persistencia.h"

void bajar(Diccionario d, string nomArch){
    bajarRespaldo(d,nomArch);
}

void levantar(Diccionario &d, string nomArch){
    levantarRespaldo(d,nomArch);
}

boolean Vacio(string nomArch){
    boolean vacio = FALSE;
    FILE * f = fopen(nomArch,"rb");
    int buffer;
    fread(&buffer,sizeof(int),1,f);
    if(feof(f))
        vacio = TRUE;
    fclose(f);
    return vacio;
}

boolean ExisteRR(string nomArch){
    boolean existeArchivo = TRUE;
    FILE * f = fopen(nomArch, "rb");
    if(f == NULL)
        existeArchivo = FALSE;
    else
        fclose(f);
    return existeArchivo;
}
