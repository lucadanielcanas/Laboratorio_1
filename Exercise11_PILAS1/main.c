#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

int main()
{
    /*Suponiendo la existencia de una pila MODELO que no esté vacía,
      eliminar de la pila DADA todos los elementos que sean iguales al tope de la pila MODELO.*/

    Pila MODELO, DADA, IGUALES, DISTINTOS;
    inicpila(&MODELO);
    inicpila(&DADA);
    inicpila(&IGUALES);
    inicpila(&DISTINTOS);

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

    if(pilavacia(&MODELO) && pilavacia(&DADA))
    {
        printf("La pila MODELO no puede estar vacía");
        system("pause");
        return 0;
    }

    while(!pilavacia(&MODELO) && !pilavacia(&DADA))
    {
            if(tope(&DADA) == tope(&MODELO))
            {
                apilar(&IGUALES, desapilar(&DADA));
            }
            else
            {
                apilar(&DISTINTOS, desapilar(&DADA));
            }
    }

    while(!pilavacia(&DISTINTOS))
    {
        apilar(&DADA, desapilar(&DISTINTOS));
    }

    printf("PILA MODELO FINAL");
    mostrar(&MODELO);

    printf("PILA DADA FINAL");
    mostrar(&DADA);

    return 0;
}
