/*Resolucion de Cuarta Evaluación 12/11/2020
*Análisis de Algoritmos sección 01 ciclo 02-20
*Autor: Natalia Alexandra Solórzano Paz 00120319
*Fecha: noviembre 2020
*/
/*
Modifique aa) para que coloque los 1 en la celda dada y en la de arriba.
*/
#include <iostream>
using namespace std;

void llenarUnoDD(int myArray[2][2], int fila, int columna)
{
    if (fila == 0)
    {
        myArray[fila][columna] = 1;
    }
    else
    {
        myArray[fila][columna] = 1;
        myArray[fila - 1][columna] = 1;
    }
}

/*
int main()
{
    int arreglo[10][2];
    arreglo[0][0] = 1;
    arreglo[1][1] = 2;
    llenarUnoDD(arreglo, 5, 2);
    cout << "Resultado: ";
    cout << arreglo[3][2] << endl;
    return 0;
}
*/
