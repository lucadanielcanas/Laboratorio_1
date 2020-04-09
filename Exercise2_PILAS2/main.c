#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

int main()
{
    //Contar lo elementos de una pila (Usar variables)

    Pila A, AUX1;
    inicpila(&A);
    inicpila(&AUX1);

    int contador = 0;

    char control;

    do
    {
        printf("CARGANDO PILA A \n");
        leer(&A);
        printf("Desea continuar? s/n");
        fflush(stdin);
        scanf("%c", &control);
    }while(control == 's' || control == 'S');

    printf("PILA A INICIAL \n");
    mostrar(&A);


    while(!pilavacia(&A))
    {
        apilar(&AUX1, desapilar(&A));
        contador ++;
    }

    while(!pilavacia(&AUX1))
    {
        apilar(&A, desapilar(&AUX1));
    }

    printf("PILA A FINAL");
    mostrar(&A);
    printf("Pila A tiene %d elementos.", contador);

    return 0;
}
