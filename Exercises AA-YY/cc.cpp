/*Resolucion de Cuarta Evaluación 12/11/2020
*Análisis de Algoritmos sección 01 ciclo 02-20
*Autor: Natalia Alexandra Solórzano Paz 00120319
*Fecha: noviembre 2020
*/
/*
Modifique aa) para que coloque los 1 en la celda dada y en la de abajo.
*/
#include <iostream>
using namespace std;

void llenarUnoCC(int myArray[10][10], int fila, int columna, int numFilas)
{
    if (fila <= numFilas)
    {
        myArray[fila][columna] = 1;
        if (fila + 1 <= numFilas)
        {
            myArray[fila + 1][columna] = 1;
        }
    }
}

/*
int main()
{
    int arreglo[10][10];
    arreglo[0][0] = 1;
    arreglo[1][1] = 2;
    llenarUnoCC(arreglo, 2, 1, 9);
    cout << "Resultado: ";
    cout << arreglo[3][1] << endl;
    return 0;
}
*/