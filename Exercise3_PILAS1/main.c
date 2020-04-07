#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

int main()
{
    //Cargar desde teclado una pila DADA y pasar a la pila DISTINTOS todos aquellos elementos distintos al valor 8.

    Pila DADA, DISTINTOS, IGUALES;
    inicpila(&DADA);
    inicpila(&DISTINTOS);
    inicpila(&IGUALES);

    char control;

    do
        {
            leer(&DADA);
            printf("Desea continuar? S/N");
            fflush(stdin);
            scanf("%c", &control);
        }
    while(control == 's');

    printf("PILA DADA");
    mostrar(&DADA);

    while(!pilavacia(&DADA))
        {

            if(tope(&DADA) != 8)
            {
                apilar(&DISTINTOS, desapilar(&DADA));
            }
            else
            {
                apilar(&IGUALES, desapilar(&DADA));
            }
    }


    printf("PILA DISTINTOS");
    mostrar(&DISTINTOS);

    return 0;
}
