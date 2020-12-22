/*Resolucion de Cuarta Evaluación 12/11/2020
*Análisis de Algoritmos sección 01 ciclo 02-20
*Autor: Natalia Alexandra Solórzano Paz 00120319
*Fecha: noviembre 2020
*/
/*
Hacer una función en C++ que dado un arreglo de char y su longitud, llene cada casilla con el
caracter espacio ( ‘ ‘ ).
*/
#include <iostream>
using namespace std;

void llenarArreglo(char [], int );

int main()
{
    char arreglo[5];
    arreglo[0] = '1';
    arreglo[1] = '2';
    llenarArreglo(arreglo, 5);
    cout << "Resultado: ";
    cout << arreglo << endl;
    return 0;
}

void llenarArreglo(char arreglo[], int limite)
{
    for (int i = 0; i < limite; i++)
    {
        arreglo[i] = ' ';
    }
}