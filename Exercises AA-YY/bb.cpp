/*Resolucion de Cuarta Evaluación 12/11/2020
*Análisis de Algoritmos sección 01 ciclo 02-20
*Autor: Natalia Alexandra Solórzano Paz 00120319
*Fecha: noviembre 2020
*/
/*
Modifique aa) para que coloque los 1 en la celda dada y en la de su derecha.
*/
#include <iostream>
using namespace std;

void llenarUnoBB(int myArray[10][10], int fila, int columna)
{
    int columnas = (sizeof(myArray[0]) / sizeof(myArray[0][0]));
    if (columna <= columnas)
    {
        myArray[fila][columna] = 1;
        if (columna + 1 <= columnas)
        {
            myArray[fila][columna + 1] = 1;
        }
    }
}
/*
int main()
{
    int arreglo[10][10];
    arreglo[0][0] = 1;
    arreglo[1][1] = 2;
    llenarUnoBB(arreglo, 5, 9);
    cout << "Resultado: ";
    cout << arreglo[5][9] << endl;
    return 0;
}
*/