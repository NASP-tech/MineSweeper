/*Resolucion de Cuarta Evaluación 12/11/2020
*Análisis de Algoritmos sección 01 ciclo 02-20
*Autor: Natalia Alexandra Solórzano Paz 00120319
*Fecha: noviembre 2020
*/
/*
Modifique i) para que, en lugar de un arreglo, se reciba una matriz cuadrada y un número n, que
sería el número de filas y columnas.
*/
#include <iostream>
using namespace std;

void llenarArreglo(char myArray[2][2], int elementos)
{
    for (int i = 0; i < elementos; i++)
    {
        for (int j = 0; j < elementos; j++)
        {
            myArray[i][j] = 7;
        }
    }
}
/*
int main()
{
    char arreglo[10][2];
    arreglo[0][0] = '1';
    arreglo[1][1] = '2';
    llenarArreglo(arreglo, 7); 
    cout << "Resultado: ";
    cout << arreglo[8][0] << endl;
    return 0;
}
*/
