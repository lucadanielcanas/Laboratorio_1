#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pila.h"
#include "function.h"

//FUNCIONES

//INICIO EJERCICIO 1.
///Funcion que le permite al USUARIO cargar un arreglo de tipo INT.
int cargarArregloInt(int A[], int dimension)
{
    int i = 0;
    char control = 's';

    while(i < dimension && control == 's' || control == 'S')
    {
        printf("\nIngrese un valor entero: \n");
        scanf("%d", &A[i]);

        printf("Desea continuar? s/n \n");
        fflush(stdin);
        scanf("%c", &control);
        i++;
    }

    return i;
}
//FIN EJERCICIO 1.


//INICIO EJERCICIO 2.
///Funcion que me muestra la cantidad de elementos validos de un arreglo de tipo INT.

void mostrarArregloInt(int A[], int elementosValidos)
{
    int i;

    printf("El contenido de los elementos VALIDOS son: \n");

    for(i = 0; i < elementosValidos; i++)
    {
        printf("%d", A[i]);
    }
    printf("\n");
}
//FIN EJERCICIO 2.

//INICIO EJERCICIO 3.
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

//FIN EJERCICIO 3.


//INICIO EJERCICIO 4.
///Funcion que pasa los elementos de un arreglo de tipo INT a una Pila.

 void pasarArregloAPila(int A[], int elementosValidos, Pila * pPila)
{
    int i = 0;

    while(i < elementosValidos)
    {
        apilar(pPila, A[i]);
        i++;
    }
}
//FIN EJERCICIO 4.

//INICIO EJERCICIO 5.
///Funcion para cargar un arreglo de tipo FLOAT.

float cargarArregloFloat(float A[], int dimension)
{
    int i = 0;
    char control = 's';

    while(i < dimension && control == 's' || control == 'S')
    {
        printf("Ingrese un valor numerico: \n");
        fflush(stdin);
        scanf("%f", &A[i]);

        printf("Desea continuar? s/n \n");
        fflush(stdin);
        scanf("%c", &control);

        i++;
    }

    return i;
}

///Funcion que me muestra la cantidad de elementos validos de un arreglo de tipo FLOAT.
void mostrarArregloFloat(float A[], int elementosValidos)
{
    int i;

    printf("El contenido de los elementos VALIDOS son: \n");

    for(i = 0; i < elementosValidos; i++)
    {
        printf("%.2f \n", A[i]);
    }
}

///Funcion que suma los elementos de un arreglo tipo FLOAT.
float sumarElementosValidosF(float A[], int elementosValidos)
{
    int i;
    float aux = 0;
    float suma = 0;

    for(i = 0; i < elementosValidos; i++)
    {
        aux = A[i];
        suma = suma + aux;
    }

    printf("\n La suma del los datos del arreglo idEmpleadosFloat es = %.2f\n", suma);

    return suma;
}
//FIN EJERCICIO 5.

//INICIO EJERCICIO 6.
///Funcion que carga un arreglo de tipo char.
char cargarArregloChar(char A[], int dimension)
{
    int i = 0;
    char control = 's';

    while(i < dimension && control == 's' || control == 'S')
    {
        printf("\nIngrese un caracter: \n");
        fflush(stdin);
        scanf("%c", &A[i]);

        printf("Desea continuar? s/n \n");
        fflush(stdin);
        scanf("%c", &control);

        i++;
    }

    return i;
}

//Funcion que me muestra los elementos de un arreglo de tipo char.
void mostrarArregloChar(char A[], int elementosValidos)
{
    int i;

    for(i = 0; i < elementosValidos; i++)
    {
        printf("%c", A[i]);
    }

}

void buscarArregloChar(char A[], int elementosValidos)
{
    char letra;
    int i;

    printf("\nIngrese la letra a buscar: \n");
    fflush(stdin);
    scanf("%c", &letra);

    for(i = 0; i < elementosValidos && letra != A[i]; i++)
    {
        A[i];
    }

    if(A[i] == letra)
    {
        printf("La letra ingresada se encuentra dentro del arreglo \n");
    }
    else
    {
        printf("La letra ingresada no se encuentra dentro del arreglo \n");
    }
}
//FIN EJERCICIO 6.

//INICIO EJERCICIO 7.
///Funcion que ordena el arreglo.
int ordenarArregloChar(char A[], int elementosValidos)
{
    int i = 0;
    char letra;

    while(i < elementosValidos - 1)
    {
        letra = A[i + 1];
        insertarEnOrdenChar(A, elementosValidos, letra);
        i++;
    }

}
char insertarEnOrdenChar(char A[], int elementosValidos, char letra)
{

    int i = elementosValidos - 1;

    while(i >=0 && letra < A[i])
    {
        A[i + 1] = A[i];

        i--;
    }

    A[i + 1] = letra;

    return elementosValidos + 1;
}
//FIN EJERCICIO 7.

//INICIO EJERCICIO 8.
///Funcion que obtiene el maximo caracter de un arreglo dado
char obtenerMaximoCaracter(char A[], int elementosValidos)
{

    int i;
    char caracter = 'z';

    for(i = 0; i < elementosValidos; i++)
    {
        caracter = A[i];
        if(A[i] < caracter)
        {
            caracter = A[i];
        }
        else
        {
            caracter = A[i];
        }
    }

    return caracter;
}
//FIN EJERCICIO 8.

//INICIO EJERCICIO 9.

///Funcion que determina si un arreglo es capicua.

void arregloCapicua(int A[], int elementosValidos)
{

    int capicua = 0;
    int i = 0;
    int u = elementosValidos - 1;

    while(i < u)
    {
        if(A[i] == A[u])
        {
            capicua = 1;
        }
        else
        {
            capicua = 0;
        }

        i++;
        u--;
    }
    if(capicua == 1)
    {
        printf("El arreglo es capicua");
    }
    else
    {
        printf("El arreglo NO es capicua");
    }
}

//FIN EJERCICIO 9.

//INICIO EJERCICIO 10.

///Funcion que invierte los elementos de un arreglo tipo INT

void invertirArreglo(int A[], int elementosValidos)
{
    int u = elementosValidos - 1;
    int i = 0;
    int aux = 0;

    while( i < u && i != u)
    {
        aux = A[u];
        A[u] = A[i];
        A[i] = aux;
        i++;
        u--;
    }
}
//FIN EJERCICIO 10.

//INICIO EJERCICIO 11.

///Funcion que busca el menor elemento de un arreglo tipo INT
int menorElemento(int A[], int elementosValidos, int posicion)
{
    int menor = A[posicion];
    int menorPosicion = posicion;
    int i = posicion + 1;

    while(i < elementosValidos)
    {
        if(menor > A[i])
        {
            menor = A[i];
            menorPosicion = i;
        }
        i++;
    }
    return menorPosicion;
}

///Funcion que ordena un arreglo de tipo INT Seleccion
void ordenacionSeleccion(int A[], int elementosValidos)
{
    int menorPosicion = 0;
    int i = 0;
    int aux = 0;
    while(i < elementosValidos - 1)
    {
        menorPosicion = menorElemento(A, elementosValidos, i);
        aux = A[menorPosicion];
        A[menorPosicion] = A[i];
        A[i] = aux;
        i++;
    }
}

///Funcion que inserta un elemento en un arreglo ordenado

void insertar(int A[], int elementosValidos, int elementoInsertar)
{
    int i = elementosValidos;

    while(i >= 0 && elementoInsertar < A[i])
    {
        A[i + 1] = A[i];

        i--;
    }

    A[i + 1] = elementoInsertar;
}

///Funcion que ordena un arreglo de tipo INT Insercion
void ordenacionInsercion(int A[], int elementosValidos)
{
    int i = 0;

    while(i < elementosValidos - 1)
    {
        insertar(A, i, A[i+1]);
        i++;
    }
}

//FIN EJERCICIO 11.

//INICIO EJERCICIO 12.

///Funcion que crea un 3er arreglo ordenado alfabeticamente con los elementos de los dos primeros arreglos.

int ordenarDosArreglos(char Arreglo1[], char Arreglo2[])
{
    int i = 0;
    int elementosValidos1 = 0;
    int elementosValidos2 = 0;
    int totalValidos = 0;

    elementosValidos1 = cargarArregloChar(Arreglo1, 100);
    printf("\nPrimer arreglo: \n");
    mostrarArregloChar(Arreglo1, elementosValidos1);

    elementosValidos2 = cargarArregloChar(Arreglo2, 100);
    printf("\nSegundo arreglo: \n");
    mostrarArregloChar(Arreglo2, elementosValidos2);

    ordenarArregloChar(Arreglo1, elementosValidos1);
    ordenarArregloChar(Arreglo2, elementosValidos2);

    printf("\nPrimer arreglo ordenado: \n");
    mostrarArregloChar(Arreglo1, elementosValidos1);
    printf("\nSegundo arreglo ordenado: \n");
    mostrarArregloChar(Arreglo2, elementosValidos2);

    totalValidos = elementosValidos1 + elementosValidos2;


    return totalValidos;
}

///Funcion que genera un tercer arreglo ordenado con los elementos de otros dos arreglos ordenados.
int tercerArregloOrdenado(char A1[], int elementosValidos1, char A2[], int elementosValidos2, char A3[], int elementosValidos3)
{
    int i1 = 0;
    int i2 = 0;
    int i3 = 0;

    while(i1 < elementosValidos1 && i2 < elementosValidos2)
    {
        if(A1[i1] < A2[i2])
        {
            A3[i3] = A1[i1];

            i1++;
        }
        else
        {
            A3[i3] = A2[i2];

            i2++;
        }

        i3++;
    }

    while(i1 < elementosValidos1)
    {
        A3[i3] = A1[i1];

        i1++;
        i3++;
    }

    while(i2 < elementosValidos2)
    {
        A3[i3] = A2[i2];

        i2++;
        i3++;
    }

    return i3;
}


//FIN EJERCICIO 12.

