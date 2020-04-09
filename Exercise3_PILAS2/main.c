#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

int main()
{
    //Calcular el promedio de los valores de una pila (usar variables)

    Pila A, AUX1;
    inicpila(&A),
    inicpila(&AUX1);

    float promedio = 0;

    char control;

    do
    {
        printf("CARGANDO PILA A \n");
        leer(&A);
        printf("Desea continuar? s/n \n");
        fflush(stdin);
        scanf("%c", &control);
    }while(control == 's' || control == 'S');




    return 0;
}
