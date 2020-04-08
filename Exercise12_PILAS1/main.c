#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

int main()
{
    /*  Suponiendo la existencia de una pila MODELO (vacía o no),
        eliminar de la pila DADA todos los elementos que existan en MODELO.
    */

    Pila MODELO, DADA, AUX1, AUX2, AUX3;
    inicpila(&MODELO);
    inicpila(&DADA);
    inicpila(&AUX1);
    inicpila(&AUX2);
    inicpila(&AUX3);

    char control;

    do
    {
        printf("CARGANDO PILA MODELO \n");
        leer(&MODELO);
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

    printf("PILA DADA INICIAL");
    mostrar(&DADA);

    printf("PILA MODELO INICIAL");
    mostrar(&MODELO);

    if(pilavacia(&MODELO) || pilavacia(&DADA))
    {
        printf("Debe cargar las pilas.");

        return 0;
    }

    while(!pilavacia(&MODELO))
    {
        while(!pilavacia(&DADA))
        {
            if(tope(&DADA) != tope(&MODELO))
            {
                apilar(&AUX1, desapilar(&DADA));
            }
            else
            {
                apilar(&AUX2, desapilar(&DADA));
            }
        }
        while(!pilavacia(&AUX1))
        {
            apilar(&DADA, desapilar(&AUX1));
        }
        apilar(&AUX3, desapilar(&MODELO));
    }
    while(!pilavacia(&AUX3))
    {
        apilar(&MODELO, desapilar(&AUX3));
    }

    printf("PILA DADA FINAL");
    mostrar(&DADA);

    printf("PILA MODELO FINAL");
    mostrar(&MODELO);
    return 0;
}
