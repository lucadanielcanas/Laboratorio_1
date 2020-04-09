#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

int main()
{
    //Sumar los elementos de una pila (usar variables)

    Pila A, AUX1;
    inicpila(&A);
    inicpila(&AUX1);

    char control;

    int suma = 0;

    do
    {
        printf("CARGANDO LA PILA A \n");
        leer(&A);
        printf("Desea continuar? s/n");
        fflush(stdin);
        scanf("%c", &control);
    }while(control == 's' || control == 'S');

    printf("PILA A INICIAL");
    mostrar(&A);

    while(!pilavacia(&A))
    {
        suma  = suma + tope(&A);

        apilar(&AUX1, desapilar(&A));
    }

    while(!pilavacia(&AUX1))
    {
        apilar(&A, desapilar(&AUX1));
    }

    printf("PILA A FINAL");
    mostrar(&A);
    printf("El total de la suma es: %d\n", suma);

    return 0;
}
