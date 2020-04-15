#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

//Hacer una función que permita ingresar varios elementos a una Pila, tantos como quiera el usuario

int main()
{
    Pila DADA;
    inicpila(&DADA);

    printf("Inicio de la funcion cargaDeElementos() \n");

    cargaDeElementos(&DADA);

    printf("Final de la funcion cargaDeElementos() \n");
    return 0;
}

//Funcion que le permite al usuario cargar la Pila DADA.
void cargaDeElementos(Pila * pCarga)
{
    char control;

//Comienzo de la rutina de carga.
    do
    {
        printf("CARGANDO PILA DADA \n");
        leer(pCarga);
        printf("Desea continuar? s/n");
        fflush(stdin);
        scanf("%c", &control);
    }while(control == 's' || control == 'S');

    printf("PILA DADA");
    mostrar(pCarga);
}
