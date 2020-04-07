#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

int main()
{
    /*Cargar desde el teclado la pila ORIGEN e inicializar en vacío la pila DESTINO.
      Pasar todos los elementos de la pila ORIGEN a la pila DESTINO.*/

      Pila ORIGEN, DESTINO;
      inicpila(&ORIGEN);
      inicpila(&DESTINO);

      char control;

      do{
        leer(&ORIGEN);
        printf("Desea continuar? S/N");
        fflush(stdin);
        scanf("%c", &control);
      }while(control == 's');

      printf("PILA ORIGEN");
      mostrar(&ORIGEN);

      while(!pilavacia(&ORIGEN)){
        apilar(&DESTINO, desapilar(&ORIGEN));
      }

      printf("PILA ORIGEN");
      mostrar(&ORIGEN);

      printf("PILA DESTINO");
      mostrar(&DESTINO);

    return 0;
}
