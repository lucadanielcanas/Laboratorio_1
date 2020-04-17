#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>
#include "pila.h"
#include "functions.h"

int main()
{
    system("color 0C");
    setlocale(LC_ALL, "");

    Pila DADA, DADA2;
    int number = 0;
    char control;

    do
    {
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

            inicpila(&DADA);

            cargaDeElementos(&DADA);

            printf("PILA CARADA");
            mostrar(&DADA);

            break;

        case 2:
            inicpila(&DADA);
            inicpila(&DADA2);

            pasarElementos(&DADA, &DADA2);

            printf("SEGUNDA PILA");
            mostrar(&DADA2);

            break;
        case 3:

                inicpila(&DADA);
                inicpila(&DADA2);

                pasarElementosOrdenados(&DADA, &DADA2);

                printf("SEGUNDA PILA ORDENADA");
                mostrar(&DADA2);

            break;
        case 4:

            inicpila(&DADA);

            int menor = 0;

            menor = menorElemento(&DADA);

            printf("El menor elemento de la pila es: %d\n", menor);

            break;
        case 5:

            break;
        case 6:

            break;
        case 7:

            break;
        case 8:

            break;
        case 9:

            break;
        case 10:

            break;
        };

        printf("Desea ejecutar otro ejercicio? s/n");
        fflush(stdin);
        scanf("%c", &control);
        system("cls");
    }while(control == 's' || control == 'S');

    return 0;
}

