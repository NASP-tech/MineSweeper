/*Resolucion de Cuarta Evaluación 12/11/2020
*Análisis de Algoritmos sección 01 ciclo 02-20
*Autor: Natalia Alexandra Solórzano Paz 00120319
*Fecha: noviembre 2020
*/
/*
Fusionar los casos q), r), s) y t) en una sola función.
*/
#include <iostream>
using namespace std;

bool checkMatrix(int myArray[10][10], int fila, int columna)
{
    int filas = (sizeof(myArray[0])/sizeof(myArray[0][0]));
    int columnas = (sizeof(myArray[0])/sizeof(myArray[0][0]));
    if (fila >= filas)
    {
        return false;
    }
    else 
    {
        return true;
    }
    if (fila == 0 and columna == 0) 
    {
        return false;
    }
    else 
    {
        return true;
    }
    
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
    cout << checkMatrix(matriz, 9, 9) << endl;
    return 0;
}
*/