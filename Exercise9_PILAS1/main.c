#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

int main()
{
    //Comparar la cantidad de elementos de las pilas A y B. Mostrar por pantalla el resultado.

    Pila A, B, AUX1, AUX2;
    inicpila(&A);
    inicpila(&B);
    inicpila(&AUX1);
    inicpila(&AUX2);

    char control;

    do
    {
        printf("CARGANDO PILA A \n");
        leer(&A);
        printf("Desea continuar? s/n");
        fflush(stdin);
        scanf("%c", &control);
    }while(control == 's');


    do
    {
        printf("CARGANDO PILA B \n");
        leer(&B);
        printf("Desea continuar? s/n");
        fflush(stdin);
        scanf("%c", &control);
    }while(control == 's');


    while(!pilavacia(&A) && !pilavacia(&B)){

        apilar(&AUX1, desapilar(&A));
        apilar(&AUX2, desapilar(&B));
    }

    if(pilavacia(&A) && pilavacia(&B))
    {
        printf("La cantidad de elementos son iguales.");
    }
    else
    {
        printf("La cantidad de elementos son distintos.");
    }

    return 0;
}
