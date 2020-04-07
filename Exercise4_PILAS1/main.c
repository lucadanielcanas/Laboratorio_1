#include <stdio.h>
#include <stdlib.h>
#include "pila.h"
int main()
{

    /*Cargar desde el teclado la pila ORIGEN e inicializar en vacío la pila DESTINO.
    Pasar los elementos de la pila ORIGEN a la pila DESTINO, pero dejándolos en el mismo orden.*/

    Pila ORIGEN, DESTINO, AUX1;
    inicpila(&ORIGEN);
    inicpila(&DESTINO);
    inicpila(&AUX1);

    char control;

    do
    {
        leer(&ORIGEN);
        printf("Desea continuar? s/n");
        fflush(stdin);
        scanf("%c", &control);
    }
    while(control == 's');

    printf("PILA ORIGEN");
    mostrar(&ORIGEN);

    while(!pilavacia(&ORIGEN))
        {
            apilar(&AUX1, desapilar(&ORIGEN));
        }

    while(!pilavacia(&AUX1))
        {
            apilar(&DESTINO, desapilar(&AUX1));
        }

    printf("PILA ORIGEN");
    mostrar(&ORIGEN);

    printf("PILA DESTINO");
    mostrar(&DESTINO);


    return 0;
}
