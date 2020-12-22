/*Resolucion de Cuarta Evaluación 12/11/2020
*Análisis de Algoritmos sección 01 ciclo 02-20
*Autor: Natalia Alexandra Solórzano Paz 00120319
*Fecha: noviembre 2020
*/
/*
Hacer una función en C++ que, dada una matriz M y una posición en la matriz, chequee si dicha
posición tiene un 1.
*/
#include <iostream>
using namespace std;

bool checkUno(int myArray[10][10], int fila, int columna)
{
    if (myArray[fila][columna] == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
/*
int main()
{
    int matriz[10][10];
    matriz[0][0] = 1;
    matriz[1][1] = 2;
    cout << "Resultado: ";
    cout << checkUno(matriz, 1, 1) << endl;
    return 0;
}
*/