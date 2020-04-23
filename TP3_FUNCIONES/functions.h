#include <stdio.h>

void cargarElementos(Pila * pCarga);
void pasarElementos(Pila * pila1, Pila * pila2);
void pasarElementosOrdenados(Pila * pila1, Pila * pila2);
int menorElemento(Pila * pPila);
void ordenarPorSeleccion(Pila * pPila1, Pila * pPila2);
void insertarEnOrden(Pila * pPila, int insertarDato);
void ordenPorInsercion(Pila * pOrigen, Pila * pDestino);
int sumaTopeYAnteUltimoCopia(Pila copiaPila);
int sumaTopeYAnteUltimoRef(Pila * pPila);
int contarElementos(Pila copiaPila);
int sumaElementos(Pila copiaPila);
float dividirElementos(Pila copiaPila);
int transformarPila(Pila copiaPila);
void cargarPilaSinLeer(Pila * pPila);
