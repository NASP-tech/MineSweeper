/*Resolucion de Cuarta Evaluación 12/11/2020
*Análisis de Algoritmos sección 01 ciclo 02-20
*Autor: Natalia Alexandra Solórzano Paz 00120319
*Fecha: noviembre 2020
*/
/*
Hacer una función en C++ que dada una matriz int y una posición en la matriz, coloque un 1 en la
celda dada y en la celda a su izquierda.
*/
#include <iostream>
using namespace std;

void llenarUnoAA(int myArray[2][2], int fila, int columna)
{
    if (columna == 0)
    {
        myArray[fila][columna] = 1;
    }
    else
    {
        myArray[fila][columna] = 1;
        myArray[fila][columna - 1] = 1;
    }
}

/*
int main()
{
    int arreglo[10][2];
    arreglo[0][0] = 1;
    arreglo[1][1] = 2;
    llenarUnoAA(arreglo, 5, 2);
    cout << "Resultado: ";
    cout << arreglo[5][5] << endl;
    return 0;
}
*/