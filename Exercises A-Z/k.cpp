/*Resolucion de Cuarta Evaluación 12/11/2020
*Análisis de Algoritmos sección 01 ciclo 02-20
*Autor: Natalia Alexandra Solórzano Paz 00120319
*Fecha: noviembre 2020
*/
/*
Hacer una función en C++ que dado un arreglo de int y su longitud, llene cada casilla con un 0.
*/
#include <iostream>
using namespace std;

void llenarArreglo(int arreglo[], int limite)
{
    for (int i = 0; i < limite; i++)
    {
        arreglo[i] = 0;
    }
}

int main()
{
    int arreglo[5];
    arreglo[0] = 1;
    arreglo[1] = 2;
    llenarArreglo(arreglo, 5);
    cout << "Resultado ";
    cout << arreglo[0] << endl;
    return 0;
}