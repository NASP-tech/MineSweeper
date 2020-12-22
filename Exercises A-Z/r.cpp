/*Resolucion de Cuarta Evaluación 12/11/2020
*Análisis de Algoritmos sección 01 ciclo 02-20
*Autor: Natalia Alexandra Solórzano Paz 00120319
*Fecha: noviembre 2020
*/
/*
Modifique q) para en lugar de checar a la izquierda, se chequee a la derecha.
*/
#include <iostream>
using namespace std;

bool checkMatrixR(int myArray[10][10], int fila, int columna)
{
    int columnas = (sizeof(myArray[0])/sizeof(myArray[0][0]));
    if (columna >= columnas)
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
    cout << checkMatrixR(matriz, 1, 10) << endl;
    return 0;
}
*/
