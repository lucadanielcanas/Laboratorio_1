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

    setlocale(LC_ALL, ""); //funcion para permitir caracteres especiales.

    int ejercicio = 0;
    char control;

    int cantidadEmpleados = 0;
    int cantidadCaracteres = 0;
    int cantidadCaracteres2 = 0;
    int cantidadCaracteres3 = 0;
    int dimension = 0; //ESTA VARIABLE ES USADA SOLO EN EL EJERCICIO 12.
    const int MAXEMPLEADOS = 5;
    char letra;
    int opt;
    char controlSubMenu;

    //Arrays
    int idEmpleadosInt[MAXEMPLEADOS];
    float idEmpleadosFloat[5];
    char idEmpleadosChar[100];
    char idEmpleadosChar2[100];
    char idEmpleadosChar3[100];

    //int * idEmpleados = malloc (sizeof(int)*100);

    Pila DADA;


    do
    {
        system("color 0C");

        printf("LISTADO DE EJERCICIOS \n\n");

        printf("1- Hacer una función que reciba como parámetro un arreglo de números enteros y permita que el usuario ingrese valores al mismo por teclado. La función debe retornar la cantidad de elementos cargados en el arreglo. \n\n");
        printf("2- Hacer una función que reciba como parámetro un arreglo y la cantidad de elementos (válidos) cargados en él y los muestre por pantalla. \n\n");
        printf("3- Hacer una función que reciba como parámetro un arreglo y la cantidad de elementos (válidos) cargados en él y calcule la suma de sus elementos. \n\n");
        printf("4- Hacer una función que reciba como parámetro un arreglo, la cantidad de elementos (válidos) cargados en él y una Pila. La función debe copiar los elementos del arreglo en la pila. \n\n");
        printf("5- Realizar una función que sume los elementos de un arreglo números reales de dimensión 100. (para poder hacer esta función, hay que cargar un arreglo de reales, se recomienda hacer una función para cargar y otra para mostrar este tipo de arreglos). \n\n");
        printf("6- Realizar una función que indique si un elemento dado se encuentra en un arreglo de caracteres. \n\n");
        printf("7- Realizar una función que inserte un carácter en un arreglo ordenado alfabéticamente, conservando el orden. \n\n");
        printf("8- Realizar una función que obtenga el máximo carácter de un arreglo dado. \n\n");
        printf("9- Realizar una función que determine si un arreglo es capicúa. \n\n");
        printf("10- Realizar una función que invierta los elementos de un arreglo. \n\n");
        printf("11- Ordenar un arreglo según los siguientes métodos: a) Seleccion b) Insercion \n\n");
        printf("12- Dados dos arreglos ordenados alfabéticamente, crear un tercer arreglo con los elementos de los dos primeros intercalados, de manera que quede un arreglo también ordenado alfabéticamente. \n\n");

        printf("QUE EJERCICIO DESEA REALIZAR? \n");
        scanf("%d", &ejercicio);

        system("cls");

        switch(ejercicio)
        {
            case 1:

                system("color 01");

                cantidadEmpleados = cargarArregloInt(idEmpleadosInt, MAXEMPLEADOS);

                printf("Empleados cargados: %d \n", cantidadEmpleados);

                break;

            case 2:

                system("color 02");

                cantidadEmpleados = cargarArregloInt(idEmpleadosInt, MAXEMPLEADOS);

                printf("Empleados cargados: %d \n", cantidadEmpleados);

                mostrarArregloInt(idEmpleadosInt, cantidadEmpleados);

                break;

            case 3:

                system("color 03");

                int totalSuma = 0;

                cantidadEmpleados = cargarArregloInt(idEmpleadosInt, MAXEMPLEADOS);

                printf("Empleados cargados: %d \n", cantidadEmpleados);

                mostrarArregloInt(idEmpleadosInt, cantidadEmpleados);

                totalSuma = sumarElementosValidos(idEmpleadosInt, cantidadEmpleados);

                printf("La suma de los elementos VALIDOS es = %d \n", totalSuma);

                break;

            case 4:

                system("color 14");

                inicpila(&DADA);

                cargarArregloInt(idEmpleadosInt, 5);

                pasarArregloAPila(idEmpleadosInt, 5, &DADA);

                mostrar(&DADA);

                break;

            case 5:

                system("color 15");

                cantidadEmpleados = cargarArregloFloat(idEmpleadosFloat, 5);

                mostrarArregloFloat(idEmpleadosFloat, cantidadEmpleados);

                sumarElementosValidosF(idEmpleadosFloat, cantidadEmpleados);

                break;

            case 6:

                system("color 16");

                cantidadEmpleados = cargarArregloChar(idEmpleadosChar, 100);

                mostrarArregloChar(idEmpleadosChar, cantidadEmpleados);

                buscarArregloChar(idEmpleadosChar, cantidadEmpleados);

                break;

            case 7:

                system("color 27");

                cantidadEmpleados = cargarArregloChar(idEmpleadosChar, 100);

                mostrarArregloChar(idEmpleadosChar, cantidadEmpleados);

                printf("\nQue letra desea ordenar?\n");
                fflush(stdin);
                scanf("%c", &letra);

                cantidadEmpleados = insertarEnOrdenChar(idEmpleadosChar, cantidadEmpleados, letra);
                mostrarArregloChar(idEmpleadosChar, cantidadEmpleados);
                cantidadCaracteres = ordenarArregloChar(idEmpleadosChar, cantidadEmpleados);

                break;

            case 8:

                system("color 28");

                cantidadEmpleados = cargarArregloChar(idEmpleadosChar, 100);
                mostrarArregloChar(idEmpleadosChar, cantidadEmpleados);

                letra = obtenerMaximoCaracter(idEmpleadosChar, cantidadEmpleados);

                printf("\nEl maximo caracter del arreglo es: %c\n", letra);

                break;

            case 9:

                system("color 29");

                cantidadEmpleados = cargarArregloInt(idEmpleadosInt, MAXEMPLEADOS);
                mostrarArregloInt(idEmpleadosInt, cantidadEmpleados);

                arregloCapicua(idEmpleadosInt, cantidadEmpleados);

                break;

            case 10:

                system("color 3A");

                cantidadEmpleados = cargarArregloInt(idEmpleadosInt, MAXEMPLEADOS);
                mostrarArregloInt(idEmpleadosInt, cantidadEmpleados);

                invertirArreglo(idEmpleadosInt, cantidadEmpleados);

                mostrarArregloInt(idEmpleadosInt, cantidadEmpleados);


                break;

            case 11:

                system("color 3B");

                do
                {
                    printf("1. Ordenacion por selección.");
                    printf("\n2. Ordenacion por inserción.\n");
                    printf("\nQue ejercicio desea realizar?: ");
                    scanf("%d", &opt);

                    system("cls");

                    switch(opt)
                    {
                        case 1:
                            system("cls");

                            cantidadEmpleados = cargarArregloInt(idEmpleadosInt, MAXEMPLEADOS);
                            mostrarArregloInt(idEmpleadosInt, cantidadEmpleados);

                            ordenacionSeleccion(idEmpleadosInt, cantidadEmpleados);
                            mostrarArregloInt(idEmpleadosInt, cantidadEmpleados);

                            break;

                        case 2:
                            system("cls");

                            cantidadEmpleados = cargarArregloInt(idEmpleadosInt, MAXEMPLEADOS);
                            mostrarArregloInt(idEmpleadosInt, cantidadEmpleados);

                            ordenacionInsercion(idEmpleadosInt, cantidadEmpleados);
                            mostrarArregloInt(idEmpleadosInt, cantidadEmpleados);

                            break;
                    };

                    printf("\nDesea salir del submenu?s/n");
                    fflush(stdin);
                    scanf("%c", &controlSubMenu);
                    system("cls");

                }while(controlSubMenu == 'N' || controlSubMenu == 'n');

                break;

            case 12:

                system("color 0C");

                cantidadCaracteres = cargarArregloChar(idEmpleadosChar, 100);

                printf("Arreglo 1 cargado: \n");
                mostrarArregloChar(idEmpleadosChar, cantidadCaracteres);

                cantidadCaracteres2 = cargarArregloChar(idEmpleadosChar2, 100);

                printf("Arreglo 2 cargado: \n");
                mostrarArregloChar(idEmpleadosChar2, cantidadCaracteres2);

                dimension = (cantidadCaracteres + cantidadCaracteres2);

                cantidadCaracteres3 = tercerArregloOrdenado(idEmpleadosChar, cantidadCaracteres, idEmpleadosChar2, cantidadCaracteres2, idEmpleadosChar3, dimension);

                printf("\nArreglo 3 ordenado alfabeticamente con los elementos del arreglo 1 y arreglo 2: \n");
                mostrarArregloChar(idEmpleadosChar3, cantidadCaracteres3);


                break;
        };

        printf("\nDesea ejecutar otro ejercicio? s/n");
        fflush(stdin);
        scanf("%c", &control);
        system("cls");

    }while(control == 's' || control == 'S');

    return 0;
}
