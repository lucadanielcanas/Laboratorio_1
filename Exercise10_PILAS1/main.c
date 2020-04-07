#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

int main()
{

    /*Comparar las pilas A y B, evaluando si son completamente iguales (en cantidad de elementos,
    valores que contienen y posición de los mismos). Mostrar por pantalla el resultado.*/

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

    while(!pilavacia(&A) && !pilavacia(&B) && tope(&A) == tope(&B)){

            apilar(&AUX1, desapilar(&A));
            apilar(&AUX2, desapilar(&B));

    }

    if(pilavacia(&A) && pilavacia(&B))
    {
        printf("Las pilas son identicas.");
    }
    else
    {
        printf("Las pilas son distintas.")
    }

    return 0;
}
