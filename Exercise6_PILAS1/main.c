#include <stdio.h>
#include <stdlib.h>
#include "pila.h"
int main()
{
     /*Pasar el primer elemento (tope) de la pila DADA a su última posición (base),
     dejando los restantes elementos en el mismo orden.*/

     Pila DADA, AUX1, AUX2;
     inicpila(&DADA);
     inicpila(&AUX1);
     inicpila(&AUX2);

     char control;

     do
     {
         leer(&DADA);
         printf("Desea continuar? s/n");
         fflush(stdin);
         scanf("%c", &control);
     }
     while(control == 's');

     printf("PILA DADA INICIAL");
     mostrar(&DADA);

     if(!pilavacia(&DADA))
     {
         apilar(&AUX1, desapilar(&DADA));
     }

     while(!pilavacia(&DADA))
     {
         apilar(&AUX2, desapilar(&DADA));
     }

     if(!pilavacia(&AUX1))
     {
         apilar(&DADA, desapilar(&AUX1));
     }

     while(!pilavacia(&AUX2))
     {
         apilar(&DADA, desapilar(&AUX2));
     }

     printf("PILA DADA FINAL");
     mostrar(&DADA);

    return 0;
}
