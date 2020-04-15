#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

//HACER UNA FUNCION QUE ENCUENTRE EL MENOR ELEMENTO DE UNA PILA Y LO RETORNE. LA MISMA DEBE ELIMINAR ESE DATO DE LA PILA.
int main()
{
    Pila DADA1;
    inicpila(&DADA1);

    int menorElement = 0;

    cargaDeElementos(&DADA1);
    menorElement = menorElemento(&DADA1);

    return 0;
}


//Ingreso los elementos a la Pila.
void cargaDeElementos(Pila * pCarga)
{

    char control;

    do
    {
        printf("INGRESANDO DATOS A LA PILA \n");
        leer(pCarga);
        printf("Desea continuar? s/n");
        fflush(stdin);
        scanf("%c", &control);

    }while(control == 's' || control == 'S');

    printf("PILA DADA1 INICIAL");
    mostrar(pCarga);

}

//Funcion que me devuelva el menor elemento de una pila.
int menorElemento(Pila * pCargada)
{
     Pila pMenor, pAuxiliar;
     inicpila(&pMenor);
     inicpila(&pAuxiliar);

     int minimo = 0;

     if(!pilavacia(pCargada))
     {
         apilar(&pMenor, desapilar(pCargada));
     }

     while(!pilavacia(&pMenor) && !pilavacia(pCargada))
     {
         if(tope(pCargada) < tope(&pMenor))
         {
             apilar(&pAuxiliar, desapilar(&pMenor));
             apilar(&pMenor, desapilar(pCargada));
         }
         else
         {
             apilar(&pAuxiliar, desapilar(pCargada));
         }
     }

     while(!pilavacia(&pAuxiliar))
     {
         apilar(pCargada, desapilar(&pAuxiliar));
     }

     printf("PILA DADA FINAL \n");
     mostrar(pCargada);

     printf("MINIMO VALOR DE PILA DADA \n");

    minimo = tope(&pMenor);

    return minimo;
}
