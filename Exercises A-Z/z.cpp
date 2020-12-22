/*Resolucion de Cuarta Evaluación 12/11/2020
*Análisis de Algoritmos sección 01 ciclo 02-20
*Autor: Natalia Alexandra Solórzano Paz 00120319
*Fecha: noviembre 2020
*/
/*
Generalizar todo lo realizado en v), w), x) y y) en una sola función que sea capaz de soportar todos
los casos.
*/
#include <iostream>
using namespace std;

bool checkMatrix(int myArray[10][10], int fila, int columna)
{
    int filas = (sizeof(myArray[0]) / sizeof(myArray[0][0]));
    int columnas = (sizeof(myArray[0]) / sizeof(myArray[0][0]));
    if (fila + 1 >= filas)
    {
        return false;
    }
    else
    {
        return true;
    }
    if (fila + 2 >= filas)
    {
        return false;
    }
    else
    {
        return true;
    }
    if (fila + 3 >= filas)
    {
        return false;
    }
    else
    {
        return true;
    }
    if (fila + 4 >= filas )
    {
        return false;
    }
    else
    {
        return true;
    }
    if (fila - 1 == 0 and columna - 1 == 0)
    {
        return false;
    }
    else
    {
        return true;
    }
    if (fila - 2 == 0 and columna - 2 == 0 )
    {
        return false;
    }
    else
    {
        return true;
    }
    if ( fila - 3 == 0 and columna - 3 == 0 )
    {
        return false;
    }
    else
    {
        return true;
    }
    if (fila - 4 == 0 and columna - 4 == 0)
    {
        return false;
    }
    else
    {
        return true;
    }
    if (columna + 1 >= columnas)
    {
        return false;
    }
    else
    {
        return true;
    }
    if (columna + 2 >= columnas)
    {
        return false;
    }
    else
    {
        return true;
    }
    if (columna + 3 >= columnas)
    {
        return false;
    }
    else
    {
        return true;
    }
    if (columna + 4 >= columnas)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    int matriz[10][10];
    matriz[0][0] = 1;
    matriz[1][1] = 2;
    cout << "0 => False, 1 => True" << endl;
    cout << "Resultado: ";
    cout << checkMatrix(matriz, 5, 7) << endl;
    return 0;
}