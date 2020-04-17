#include <stdio.h>
#include <stdlib.h>
#include "pila.h"
#include "functions.h"

///<summary>
/// 1- Funcion que permite cargar elementos a una pila, tantos como el usuario quiera.
///</summary>

void cargaDeElementos(Pila * pCarga)
{
    char control;

    //Comienzo de la rutina de carga.
    do
    {
        printf("Ingresando datos a la pila \n");
        leer(pCarga);
        printf("Desea continuar? s/n \n");
        fflush(stdin);
        scanf("%c", &control);
    }while(control == 's' || control == 'S');
}

///<summary>
/// 2- Hacer una función que pase todos los elementos de una pila a otra.
///<summary>

void pasarElementos(Pila * pila1, Pila * pila2)
{

    cargaDeElementos(pila1);

    printf("PILA CARGADA");
    mostrar(pila1);

    while(!pilavacia(pila1))
    {
        apilar(pila2, desapilar(pila1));
    }
}

///<summary>
/// 3- Hacer una función que pase todos los elementos de una pila a otra, pero conservando el orden.
///<summary>

void pasarElementosOrdenados(Pila * pila1, Pila * pila2)
{
    Pila aux;
    inicpila(&aux);

    cargaDeElementos(pila1);

    printf("PILA CARGADA");
    mostrar(pila1);

    while(!pilavacia(pila1))
    {
        apilar(&aux, desapilar(pila1));
    }

    while(!pilavacia(&aux))
    {
        apilar(pila2, desapilar(&aux));
    }

}

///<summary>
/// 4-Hacer una función que encuentre el menor elemento de una pila y lo retorne. La misma debe eliminar ese dato de la pila.
///<summary>

int menorElemento(Pila * pPila)
{
    Pila aux;
    inicpila(&aux);

    int minimo = 0;

    cargaDeElementos(pPila);

    if(!pilavacia(pPila))
    {
        minimo = desapilar(pPila);

        while(!pilavacia(pPila))
        {
            if(tope(pPila) < minimo)
            {
                apilar(&aux, minimo);
                minimo = desapilar(pPila);
            }
            else
            {
                apilar(&aux, desapilar(pPila));
            }
        }
    }

    return minimo;
}
