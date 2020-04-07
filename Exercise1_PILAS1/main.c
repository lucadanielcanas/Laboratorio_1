#include <stdio.h>
#include <stdlib.h>

#include "pila.h"
int main()
{

    // Cargar desde el teclado una pila DADA con 5 elementos. Pasar los tres primeros elementos a la pila
    //AUX1 y los dos restantes a la pila AUX2, ambas pilas inicializadas en vacío.

    Pila dada, aux1, aux2;
    inicpila(&dada);
    inicpila(&aux1);
    inicpila(&aux2);
    char control;
    int i = 0;

    do{
        leer(&dada);
        printf("Desea continuar? S/N");
        fflush(stdin);
        scanf("%c", &control);
    }while(control == 's');

    printf("Pila dada");
    mostrar(&dada);

    while(!pilavacia(&dada) && i < 3){

        apilar(&aux1, desapilar(&dada));

        i++;
    }

    i=0;

    while(!pilavacia(&dada) && i < 2){

        apilar(&aux2, desapilar(&dada));
    }


    printf("Pila dada");
    mostrar(&dada);

    printf("Pila aux1");
    mostrar(&aux1);

    printf("Pila aux2");
    mostrar(&aux2);

    return 0;
}
