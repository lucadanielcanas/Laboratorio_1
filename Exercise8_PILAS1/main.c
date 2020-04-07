#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

int main()
{
    //Repartir los elementos de la pila MAZO en las pilas JUGADOR1 y JUGADOR2 en forma alternativa.

    Pila MAZO, JUGADOR1, JUGADOR2;
    inicpila(&MAZO);
    inicpila(&JUGADOR1);
    inicpila(&JUGADOR2);

    char contador;

    do
    {
        leer(&MAZO);
        printf("Desea continuar? s/n");
        fflush(stdin);
        scanf("%c", &contador);
    }while(contador == 's');

    while(!pilavacia(&MAZO))
    {
        apilar(&JUGADOR1, desapilar(&MAZO));

        if(!pilavacia(&MAZO))
        {
            apilar(&JUGADOR2, desapilar(&MAZO));
        }
    }

    printf("CARTAS DEL JUGADOR 1");
    mostrar(&JUGADOR1);

    printf("CARTAS DEL JUGADOR 2");
    mostrar(&JUGADOR2);
    return 0;
}
