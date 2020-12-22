/*Resolucion de Cuarta Evaluación 12/11/2020
*Análisis de Algoritmos sección 01 ciclo 02-20
*Autor: Natalia Alexandra Solórzano Paz 00120319
*Fecha: noviembre 2020
*/
/*
Fusionar los casos aa), bb), cc) y dd) en una sola función.
*/
#include <iostream>
#include "aa.cpp"
#include "bb.cpp"
#include "cc.cpp"
#include "dd.cpp"

using namespace std;

void llenarUno(int myArray[10][10], int fila, int columna, int numFilas, int posDesplaza){
    switch (posDesplaza)
    {
    case 1: llenarUnoAA;
        break;
    case 2: llenarUnoBB;
        break;
    case 3: llenarUnoCC;
        break;
    case 4: llenarUnoDD;
        break;
    default:
        break;
    }
}

/*
int main()
{
    int desplaza;
    desplaza = aleatorio(1, 4);
    int arreglo[10][10];
    arreglo[0][0] = 1;
    arreglo[1][1] = 2;
    llenarUno(arreglo, 2, 1, 9, desplaza);
    cout << "Resultado: ";
    cout << arreglo[6][7] << endl;
    return 0;
}
*/