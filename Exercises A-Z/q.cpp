/*Resolucion de Cuarta Evaluación 12/11/2020
*Análisis de Algoritmos sección 01 ciclo 02-20
*Autor: Natalia Alexandra Solórzano Paz 00120319
*Fecha: noviembre 2020
*/
/*
Hacer una función en C++ que dada una matriz int y una posición en la matriz, chequee si es
posible acceder 1 celda a la izquierda de esta posición.
*/
#include <iostream>
using namespace std;

bool checkMatrixQ(int myArray[2][10], int fila, int columna)
{
    if (columna == 0)
    {
        return false;
    }
    else 
    {
        return true;
    }
}
/*
int main()
{
    int matriz[10][10];
    matriz[0][0] = 1;
    matriz[1][1] = 2;
    cout << "0 => False, 1 => True" << endl;
    cout << "Resultado: ";
    cout << checkMatrixQ(matriz, 1, 2) << endl;
    return 0;
}
*/