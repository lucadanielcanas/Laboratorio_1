#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

int main()
{
    /*Suponiendo la existencia de una pila LÍMITE, pasar los elementos de la pila DADA que sean mayores o iguales que el tope
    de LIMITE a la pila MAYORES, y los elementos que sean menores a la pila MENORES.
    */

    Pila LIMITE, DADA, MAYORES, MENORES;
    inicpila(&LIMITE);
    inicpila(&DADA);
    inicpila(&MAYORES);
    inicpila(&MENORES);

    char control;

    do
    {
        printf("CARGANDO PILA LIMITE \n");
        leer(&LIMITE);
        printf("Desea continuar? s/n");
        fflush(stdin);
        scanf("%c", &control);
    }
    while(control == 's' || control == 'S');

    do
    {
        printf("CARGANDO PILA DADA \n");
        leer(&DADA);
        printf("Desea continuar? s/n");
        fflush(stdin);
        scanf("%c", &control);
    }
    while(control == 's' || control == 'S');

    printf("PILA LIMITE INICIAL");
    mostrar(&LIMITE);

    printf("PILA DADA INICIAL");
    mostrar(&DADA);

    while(!pilavacia(&LIMITE) && !pilavacia(&DADA))
    {
        if(tope(&DADA) > tope(&LIMITE))
        {
            apilar(&MAYORES, desapilar(&DADA));
        }
        else if(tope(&DADA) == tope(&LIMITE))
        {
            apilar(&MAYORES, desapilar(&DADA));
        }
            else
                {
                    apilar(&MENORES, desapilar(&DADA));
                }
    }

    printf("PILA LIMITE FINAL");
    mostrar(&LIMITE);

    printf("PILA MAYORES");
    mostrar(&MAYORES);

    printf("PILA MENORES");
    mostrar(&MENORES);

    return 0;
}
