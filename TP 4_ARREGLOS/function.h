#include <stdio.h>

//PROTOTIPADO DE LAS FUNCIONES
int cargarArregloInt(int A[], int dimension);
void mostrarArregloInt(int A[], int elementosValidos);
int sumarElementosValidos(int A[], int elementosValidos);
void pasarArregloAPila(int A[], int elementosValidos, Pila * pPila);
float cargarArregloFloat(float A[], int dimension);
void mostrarArregloFloat(float A[], int elementosValidos);
float sumarElementosValidosF(float A[], int elementosValidos);
char cargarArregloChar(char A[], int dimension);
void mostrarArregloChar(char A[], int elementosValidos);
void buscarArregloChar(char A[], int elementosValidos);
int ordenarArregloChar(char A[], int elementosValidos);
char insertarEnOrdenChar(char A[], int elementosValidos, char letra);
char obtenerMaximoCaracter(char A[], int elementosValidos);
void arregloCapicua(int A[], int elementosValidos);
void invertirArreglo(int A[], int elementosValidos);
int menorElemento(int A[], int elementosValidos, int posicion);
void ordenacionSeleccion(int A[], int elementosValidos);
void insertar(int A[], int elementosValidos, int elementoInsertar);
void ordenacionInsercion(int A[], int elementosValidos);
int ordenarDosArreglos(char Arreglo1[], char Arreglo2[]);
int tercerArregloOrdenado(char A1[], int elementosValidos1, char A2[], int elementosValidos2, char A3[], int dimension);
