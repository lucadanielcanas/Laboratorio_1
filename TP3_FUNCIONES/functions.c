#include <stdio.h>
#include <stdlib.h>
#include "pila.h"
#include "functions.h"

/// 1- Funcion que permite cargar elementos a una pila, tantos como el usuario quiera.

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

/// 2- Hacer una función que pase todos los elementos de una pila a otra.

void pasarElementos(Pila * pila1, Pila * pila2)
{

    while(!pilavacia(pila1))
    {
        apilar(pila2, desapilar(pila1));
    }
}

/// 3- Hacer una función que pase todos los elementos de una pila a otra, pero conservando el orden.

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

/// 4-Hacer una función que encuentre el menor elemento de una pila y lo retorne. La misma debe eliminar ese dato de la pila.

int menorElemento(Pila * pPila)
{
    Pila aux;
    inicpila(&aux);

    int minimo = 0;

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
        pasarElementos(&aux, pPila);
    }

    return minimo;
}

/// 5- Hacer una función que pase los elementos de una pila a otra, de manera que se genere una nueva pila ordenada. Usar la función del ejercicio 4. (Ordenamiento por selección)

void ordenarPorSeleccion(Pila * pPila1, Pila * pPila2)
{
    int menor;

    while(!pilavacia(pPila1))
    {
        menor = menorElemento(pPila1);
        apilar(pPila2, menor);
    }
}

///6- Hacer una función que inserte en una pila ordenada un nuevo elemento, conservando el orden de ésta.

void insertarEnOrden(Pila * pPila, int insertarDato)
{
    Pila aux;
    inicpila(&aux);

    while(!pilavacia(pPila) && tope(pPila) < insertarDato)
    {
        apilar(&aux, desapilar(pPila));
    }
    apilar(pPila, insertarDato);

    pasarElementos(&aux, pPila);
}

///7- Hacer una función que pase los elementos de una pila a otra, de manera que se genere una nueva pila ordenada. Usar la función del ejercicio 6.  (Ordenamiento por inserción)

void ordenPorInsercion(Pila * pOrigen, Pila * pDestino)
{
    int dato;

    while(!pilavacia(pOrigen));
    {
        dato = desapilar(pOrigen);
        insertarEnOrden(pDestino, dato);
    }
}

///8- Hacer una función que sume y retorne los dos primeros elementos de una pila (tope y anterior), sin alterar su contenido.
int sumaTopeYAnteUltimoCopia(Pila copiaPila)
{
    int res = 0;
    int i = 0;

    while(!pilavacia(&copiaPila) && i < 2)
    {
        res = res + desapilar(&copiaPila);

        i++;
    }

    return res;
}
///8- Hacer una función que sume y retorne los dos primeros elementos de una pila (tope y anterior), sin alterar su contenido.
int sumaTopeYAnteUltimoRef(Pila * pPila)
{
    Pila aux;
    inicpila(&aux);

    int res = 0;
    int i = 0;

    while(!pilavacia(pPila) && i < 2)
    {
        res = res + tope(pPila);

        apilar(&aux, desapilar(pPila));

        i++;
    }

    pasarElementos(&aux, pPila);

    return res;
}

///9- Hacer una función que calcule el promedio de los elementos de una pila, para ello hacer también
///una función que calcule la suma,
///otra para la cuenta y otra que divida.
///En total son cuatro funciones, y la función que calcula el promedio invoca a las otras 3.

int contarElementos(Pila copiaPila)
{
    Pila aux;
    inicpila(&aux);

    int i = 0;

    while(!pilavacia(&copiaPila))
    {
        apilar(&aux, desapilar(&copiaPila));

        i++;
    }

    return i;
}

int sumaElementos(Pila copiaPila)
{
    Pila aux;
    inicpila(&aux);

    int suma = 0;

    while(!pilavacia(&copiaPila))
    {
        suma = suma + tope(&copiaPila);

        apilar(&aux, desapilar(&copiaPila));
    }

    return suma;
}

float dividirElementos(Pila copiaPila)
{
    Pila aux;
    inicpila(&aux);

    float division = 0;
    int suma = 0;
    int elementos = 0;

    while(!pilavacia(&copiaPila))
    {
        suma = sumaElementos(copiaPila);
        elementos = contarElementos(copiaPila);
    }

    division = (float) suma / elementos;

    return division;
}

///10- Hacer una función que reciba una pila con números de un solo dígito (es responsabilidad de quien usa el programa)
///y que transforme esos dígitos en un número decimal.

int transformarPila(Pila copiaPila)
{
    Pila aux;
    inicpila(&aux);

    int decimal = 0;
    int multiplicador = 1;

    pasarElementos(&copiaPila, &aux);

    while(!pilavacia(&aux))
    {
        decimal = decimal + (desapilar(&aux) * multiplicador);

        multiplicador = multiplicador * 10;
    }
    return decimal;
}

///Realizar una función que cargue la pila sin utilizar la función leer.

void cargarPilaSinLeer(Pila * pPila)
{
    char control;

    int datos = 0;

    do
    {
        printf("Ingrese un dato \n");
        scanf("%d", &datos);
        apilar(pPila, desapilar(datos));
        printf("Desea continuar? s/n");
        fflush(stdin);
        scanf("%c", &control);
    }while(control == 's' || control == 'S');
}
