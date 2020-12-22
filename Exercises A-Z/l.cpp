/*Resolucion de Cuarta Evaluación 12/11/2020
*Análisis de Algoritmos sección 01 ciclo 02-20
*Autor: Natalia Alexandra Solórzano Paz 00120319
*Fecha: noviembre 2020
*/
/*
Modifique k) para que, en lugar de un arreglo, se reciba una matriz cuadrada y un número n, que
sería el número de filas y columnas.
*/
#include <iostream>
using namespace std;

void llenarArreglo(int myArray[2][10], int size)
{
    for (int i=0; i < size; i++)
    {
        for (int j=0; j < size; j++)
        {
            myArray[i][j] = 0;
        }
    }
}
/*
int main()
{
    int arreglo[10][10];
    arreglo[0][0] = 1;
    arreglo[1][1] = 2;
    llenarArreglo(arreglo, 10); 
    cout << "Resultado: ";
    cout << arreglo[0][0] << endl;
    return 0;
}
*/