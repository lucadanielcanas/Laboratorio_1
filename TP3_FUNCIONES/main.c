#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include "pila.h"
#include "functions.h"

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

    Pila DADA, DADA2;
    int number = 0;
    char control;

    do
    {
        system("color 0C");

        printf("LISTA DE EJERCICIOS \n\n");

        printf("1- Hacer una función que permita ingresar varios elementos a una Pila, tantos como quiera el usuario. \n\n");
        printf("2- Hacer una función que pase todos los elementos de una pila a otra.\n\n");
        printf("3- Hacer una función que pase todos los elementos de una pila a otra, pero conservando el orden.\n\n");
        printf("4- Hacer una función que encuentre el menor elemento de una pila y lo retorne. La misma debe eliminar ese dato de la pila.\n\n");
        printf("5- Hacer una función que pase los elementos de una pila a otra, de manera que se genere una nueva pila ordenada. Usar la función del ejercicio 4.\n\n");
        printf("6- Hacer una función que inserte en una pila ordenada un nuevo elemento, conservando el orden de ésta.\n\n");
        printf("7- Hacer una función que pase los elementos de una pila a otra, de manera que se genere una nueva pila ordenada. Usar la función del ejercicio 6. \n\n");
        printf("8- Hacer una función que sume y retorne los dos primeros elementos de una pila (tope y anterior), sin alterar su contenido.\n\n");
        printf("9- Hacer una función que calcule el promedio de los elementos de una pila, para ello hacer también una función que calcule la suma, otra para la cuenta y otra que divida. En total son cuatro funciones, y la función que calcula el promedio invoca a las otras 3.\n\n");
        printf("10- Hacer una función que reciba una pila con números de un solo dígito (es responsabilidad de quien usa el programa) y que transforme esos dígitos en un número decimal. \n\n");

        printf("QUE EJERCICIO DESEA REALIZAR? \n");
        scanf("%i", &number);

        system("cls");

        switch(number)
        {

        case 1:

            system("color 1F");

            inicpila(&DADA);

            cargaDeElementos(&DADA);

            printf("PILA CARGADA");
            mostrar(&DADA);

            break;

        case 2:

            system("color 8D");

            inicpila(&DADA);
            inicpila(&DADA2);

            cargaDeElementos(&DADA);

            printf("PILA DADA CARGADA");
            mostrar(&DADA);

            pasarElementos(&DADA, &DADA2);

            printf("SEGUNDA PILA");
            mostrar(&DADA2);

            break;

        case 3:

                system("color 2D");

                inicpila(&DADA);
                inicpila(&DADA2);

                pasarElementosOrdenados(&DADA, &DADA2);

                printf("SEGUNDA PILA ORDENADA");
                mostrar(&DADA2);

            break;

        case 4:

            system("color 3E");

            inicpila(&DADA);

            int menor = 0;

            cargaDeElementos(&DADA);
            printf("PILA DADA CARGADA");
            mostrar(&DADA);

            menor = menorElemento(&DADA);

            printf("El menor elemento de la pila es: %d\n", menor);

            break;

        case 5:

            system("color 6C");

            inicpila(&DADA);
            inicpila(&DADA2);

            cargaDeElementos(&DADA);

            printf("PILA DADA CARGADA");
            mostrar(&DADA);

            ordenarPorSeleccion(&DADA, &DADA2);

            printf("NUEVA PILA ORDENADA");
            mostrar(&DADA2);


            break;
        case 6:

            system("color 0A");

            inicpila(&DADA);

            int insertar = 8;

            cargaDeElementos(&DADA);

            printf("PILA DADA CARGADA");
            mostrar(&DADA);

            insertarEnOrden(&DADA, insertar);

            printf("PILA DADA ORDENADA");
            mostrar(&DADA);

            break;
        case 7:

            system("color 05");

            inicpila(&DADA);
            inicpila(&DADA2);

            cargaDeElementos(&DADA);

            printf("PILA DADA CARGADA");
            mostrar(&DADA);

            ordenPorInsercion(&DADA, &DADA2);

            printf("NUEVA PILA ORDENADA");
            mostrar(&DADA2);

            break;
        case 8:

            system("color 70");

            inicpila(&DADA);
            int suma = 0;

            cargaDeElementos(&DADA);

            printf("PILA DADA CARGADA");
            mostrar(&DADA);

            suma = sumaTopeYAnteUltimoCopia(DADA);
            printf("La suma del tope de la pila + el ante ultimo valor de la pila es = %d \n", suma);

            break;
        case 9:
                system("color 26");

                int cantElementos = 0;
                int sumElementos = 0;
                float division = 0;

                inicpila(&DADA);

                cargaDeElementos(&DADA);

                cantElementos = contarElementos(DADA);

                printf("LA PILA DADA TIENE %d ELEMENTOS \n", cantElementos);

                sumElementos = sumaElementos(DADA);

                printf("LA SUMA DE LOS ELEMENTOS DE LA PILA DADA ES = %d\n", sumElementos);

                division = dividirElementos(DADA);

                printf("EL PROMEDIO ES = %2.f\n", division);


            break;
        case 10:

            system("color 45");

            int tranformacion = 0;

            inicpila(&DADA);

            cargaDeElementos(&DADA);

            printf("PILA DADA CARGADA \n");
            mostrar(&DADA);

            tranformacion = transformarPila(DADA);

            printf("PILA DADA TRANSFORMADA EN DECIMAL %d\n", tranformacion);

            break;

        case 11:
            system("color 70");

            inicpila(&DADA);

            cargarPilaSinLeer(&DADA);

            printf("DATOS DE LA PILA DADA");
            mostrar(&DADA);

            break;
        };

        printf("Desea ejecutar otro ejercicio? s/n");
        fflush(stdin);
        scanf("%c", &control);
        system("cls");
    }while(control == 's' || control == 'S');

    return 0;
}

