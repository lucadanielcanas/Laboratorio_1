#include <stdio.h>
#include <stdlib.h>
#include "pila.h"


//Hacer una funcion que pase todos los elementos de una pila a otra

int main()
{
    Pila DADA1, DADA2;
    inicpila(&DADA1);
    inicpila(&DADA2);

    printf("INICIO DE LAS FUNCIONES \n");

    pasarElementos(&DADA1, &DADA2);

    printf("FINAL DE LAS FUNCIONES \n");
    return 0;
}

//Le permito al usuario cargar elementos a una Pila.
void cargaDeElementos(Pila * p)
{

    char control;

    //Empiezo proceso de carga de elementos.
    do
    {
        printf("CARGANDO LA PILA \n");
        leer(p);
        printf("Desea continuar? s/n");
        fflush(stdin);
        scanf("%c", &control);

    }while(control == 's' || control == 'S');

}

//Paso los elementos de una pila a otra.
void pasarElementos(Pila * pilaOrigen, Pila * pilaDestino)
{
    cargaDeElementos(pilaOrigen);

    //muestro datos de pilaOrigen.
    printf("PILA ORIGEN INICIAL \n");
    mostrar(pilaOrigen);

    while(!pilavacia(pilaOrigen))
    {
        apilar(pilaDestino, desapilar(pilaOrigen));
    }

    //muestro datos de pilaDestino.
    printf("PILA DESTINO \n");
    mostrar(pilaDestino);

    //muestro como quedo la pilaOrigen.
    printf("PILA ORIGEN FINAL \n");
    mostrar(pilaOrigen);
}

