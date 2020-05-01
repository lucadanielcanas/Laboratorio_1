#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pila.h"
#include "function.h"

///Funcion que le permite al USUARIO cargar un arreglo de tipo INT.
int cargarArregloInt(int A[], int dimension)
{
    int i = 0;
    char control = 's';

    while(i < dimension && control == 's' || control == 'S')
    {
        printf("Ingrese un valor entero: \n");
        scanf("%d", &A[i]);

        printf("Desea continuar? s/n \n");
        fflush(stdin);
        scanf("%c", &control);
        i++;
    }

    return i;
}

///Funcion que me muestra la cantidad de elementos validos de un arreglo de tipo INT.

void mostrarArregloInt(int A[], int elementosValidos)
{
    int i;

    printf("El contenido de los elementos VALIDOS son: \n");
    for(i = 0; i < elementosValidos; i++)
    {
        printf("%d \n", A[i]);
    }
}

///Funcion que suma los elementos validos de un arreglo de tipo INT.
int sumarElementosValidos(int A[], int elementosValidos)
{
    int i = 0;
    int suma = 0;

    for(i; i < elementosValidos; i++)
    {
        suma = suma + A[i];
    }

    return suma;
}

///Funcion que pasa los elementos de un arreglo de tipo INT a una Pila.

int pasarArregloAPila(int A[], int elementosValidos, Pila * pPila)
{
    int i;

    while(i < elementosValidos)
    {
        apilar(pPila, A[i]);
        i++;
    }

    return i;
}

///Funcion para cargar un arreglo de tipo FLOAT.

/*float cargarArregloFloat(float A[], float dimension)
{
    float i = 0;
    char control = 's';

    while(i < dimension && control == 's' || control == 'S')
    {
        printf("Ingrese un valor numerico: \n");
        scanf("%f", &A[i]);

        printf("Desea continuar? s/n \n");
        fflush(stdin);
        scanf("%c", &control);
        i++;
    }

    return i;
}*/

///Funcion que me muestra la cantidad de elementos validos de un arreglo de tipo FLOAT.
/*void mostrarArregloFloat(float A[], float elementosValidos)
{
    float i;

    printf("El contenido de los elementos VALIDOS son: \n");
    for(i = 0.0; i < elementosValidos; i++)
    {
        printf("%d \n", A[i]);
    }
}*/

