#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

//Hacer una función que pase todos los elementos de una pila a otra, pero conservando el orden.

int main()
{
    Pila DADA1, DADA2, AUX;
    inicpila(&DADA1);
    inicpila(&DADA2);
    inicpila(&AUX);

    pasarElementos(&DADA1, &AUX, &DADA2);

    return 0;
}

//Le permito al usuario ingresar elementos a una pila.
void cargaDeElementos(Pila * pCarga)
{

    char control;

    do
    {
        printf("CARGANDO LA PILA \n");
        leer(pCarga);
        printf("Desea continuar? s/n");
        fflush(stdin);
        scanf("%c", &control);

    }while(control == 's' || control == 'S');

    printf("PILA DADA1 INICIAL \n");
    mostrar(pCarga);
}


//Paso elementos de una pila a la otra
void pasarElementos(Pila * pOrigen, Pila * pAuxiliar, Pila * pDestino)
{

    cargaDeElementos(pOrigen);

    while(!pilavacia(pOrigen))
    {
        apilar(pAuxiliar, desapilar(pOrigen));
    }
    acomodoElementos(pAuxiliar, pDestino);

    printf("PILA DADA1 FINAL \n");
    mostrar(pOrigen);
}

//Acomodo los elementos a una nueva pila, en el mismo orden que DADA1
void acomodoElementos(Pila * pAuxiliar, Pila * pDestino)
{
    while(!pilavacia(pAuxiliar))
    {
        apilar(pDestino, desapilar(pAuxiliar));
    }

    printf("PILA DADA2 FINAL \n");
    mostrar(pDestino);
}
