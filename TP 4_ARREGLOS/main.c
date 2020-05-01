#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "pila.h"
#include "function.h"

/*
    color de consola :
    0 = Negro
    1 = Azul
    2 = Verde
    3 = Aguamarina
    4 = Rojo
    5 = Purpura
    6 = Amarillo
    7 = Blanco
    8 = Gris
    9 = Azul claro

    color de texto:
    A = Verde claro
    B = Aguamarina claro
    C = Rojo claro
    D = Purpura claro
    E = Amarillo claro
    F = Blanco brillante
*/

int main()
{

    setlocale(LC_ALL, "");

    int ejercicio = 0;
    int cantidadEmpleadosInt = 0;
    float cantidadEmpleadosFloat = 0;
    char control;
    const int MAXEMPLEADOS = 100;

    int idEmpleadosInt[MAXEMPLEADOS];
    float idEmpleadosFloat[100];


    //int * idEmpleados = malloc (sizeof(int)*100);

    Pila DADA;


    do
    {
        system("color 0C");

        printf("LISTADO DE EJERCICIOS \n\n");

        printf("1- Hacer una funci�n que reciba como par�metro un arreglo de n�meros enteros y permita que el usuario ingrese valores al mismo por teclado. La funci�n debe retornar la cantidad de elementos cargados en el arreglo. \n\n");
        printf("2- Hacer una funci�n que reciba como par�metro un arreglo y la cantidad de elementos (v�lidos) cargados en �l y los muestre por pantalla. \n\n");
        printf("3- Hacer una funci�n que reciba como par�metro un arreglo y la cantidad de elementos (v�lidos) cargados en �l y calcule la suma de sus elementos. \n\n");
        printf("4- Hacer una funci�n que reciba como par�metro un arreglo, la cantidad de elementos (v�lidos) cargados en �l y una Pila. La funci�n debe copiar los elementos del arreglo en la pila. \n\n");
        printf("5- Realizar una funci�n que sume los elementos de un arreglo n�meros reales de dimensi�n 100. (para poder hacer esta funci�n, hay que cargar un arreglo de reales, se recomienda hacer una funci�n para cargar y otra para mostrar este tipo de arreglos). \n\n");
        printf("6- Realizar una funci�n que indique si un elemento dado se encuentra en un arreglo de caracteres. \n\n");
        printf("7- Realizar una funci�n que inserte un car�cter en un arreglo ordenado alfab�ticamente, conservando el orden. \n\n");
        printf("8- Realizar una funci�n que obtenga el m�ximo car�cter de un arreglo dado. \n\n");
        printf("9- Realizar una funci�n que determine si un arreglo es capic�a. \n\n");
        printf("10- Realizar una funci�n que invierta los elementos de un arreglo. \n\n");
        printf("11- Ordenar un arreglo seg�n los siguientes m�todos: a) Seleccion b) Insercion \n\n");
        printf("12- Dados dos arreglos ordenados alfab�ticamente, crear un tercer arreglo con los elementos de los dos primeros intercalados, de manera que quede un arreglo tambi�n ordenado alfab�ticamente. \n\n");
        printf("13- EXTRA! Formulario con arreglos. \n\n");

        printf("QUE EJERCICIO DESEA REALIZAR? \n");
        scanf("%d", &ejercicio);

        system("cls");

        switch(ejercicio)
        {
            case 1:

                system("color 01");

                cantidadEmpleadosInt = cargarArregloInt(idEmpleadosInt, MAXEMPLEADOS);

                printf("Empleados cargados: %d \n", cantidadEmpleadosInt);

                break;
            case 2:

                system("color 02");

                cantidadEmpleadosInt = cargarArregloInt(idEmpleadosInt, MAXEMPLEADOS);

                printf("Empleados cargados: %d \n", cantidadEmpleadosInt);

                mostrarArregloInt(idEmpleadosInt, cantidadEmpleadosInt);

                break;
            case 3:

                system("color 03");

                int totalSuma = 0;

                cantidadEmpleadosInt = cargarArregloInt(idEmpleadosInt, MAXEMPLEADOS);

                printf("Empleados cargados: %d \n", cantidadEmpleadosInt);

                mostrarArregloInt(idEmpleadosInt, cantidadEmpleadosInt);

                totalSuma = sumarElementosValidos(idEmpleadosInt, cantidadEmpleadosInt);

                printf("La suma de los elementos VALIDOS es = %d \n", totalSuma);

                break;
            case 4:

                system("color 14");

                inicpila(&DADA);
                int datosPila = 0;

                cantidadEmpleadosInt = cargarArregloInt(idEmpleadosInt, MAXEMPLEADOS);

                printf("Empleados cargados: %d \n", cantidadEmpleadosInt);

                mostrarArregloInt(idEmpleadosInt, cantidadEmpleadosInt);

                datosPila = pasarArregloAPila(idEmpleadosInt, cantidadEmpleadosInt, &DADA);

                printf("La pila DADA tiene %d elementos. \n", datosPila);

                break;
            case 5:
                /*
                system("color 15");

                cantidadEmpleadosFloat = cargarArregloFloat(idEmpleadosFloat, 100.0);

                printf("Cantidad de empleados cargados: %2.f \n", cantidadEmpleadosFloat);
                */

                break;
            case 6:

                system("color 16");

                break;
            case 7:

                system("color 27");

                break;
            case 8:

                system("color 28");

                break;
            case 9:

                system("color 29");

                break;
            case 10:

                system("color 3A");

                break;
            case 11:

                system("color 3B");

                break;
            case 12:

                system("color 3C");

                break;
            case 13:

                system("color 4D");

                break;
        };

        printf("\n Desea ejecutar otro ejercicio? s/n");
        fflush(stdin);
        scanf("%c", &control);
        system("cls");

    }while(control == 's' || control == 'S');

    return 0;
}
