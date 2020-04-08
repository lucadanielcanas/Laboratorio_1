#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    Determinar si la cantidad de elementos de la pila DADA es par. Si es par,
    pasar el elemento del tope de la pila AUX a la pila PAR y si es impar pasar el tope a la pila IMPAR.
    */

    Pila DADA, AUX, PAR, IMPAR;
    inicpila(&DADA);
    inicpila(&AUX);
    inicpila(&PAR);
    inicpila(&IMPAR);

    char control;

    do
    {
        printf("CARGANDO PILA DADA");
        leer(&DADA);
        printf("Desea continuar? s/n");
        fflush(stdin);
        scanf("%c", &control);
    }
    while(control == 's' || control == 'S');

    printf("PILA DADA INICIAL");
    mostrar(&DADA);

    while(!pilavacia(&DADA))
    {
        apilar(&AUX, desapilar(&DADA));

        if(!pilavacia(&DADA))
        {
            apilar(&AUX, desapilar(&DADA));
        }
        else
        {
            apilar(&IMPAR, desapilar(&AUX));
        }
    }

    if(!pilavacia(&IMPAR))
    {
        printf("LA PILA DADA TIENE DATOS IMPARES");
    }
    else
    {
        apilar(&PAR, desapilar(&AUX));
        printf("LA PILA DADA TIENE DATOS PARES");
    }

    return 0;
}
