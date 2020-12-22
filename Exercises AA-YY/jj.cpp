/*Resolucion de Cuarta Evaluación 12/11/2020
*Análisis de Algoritmos sección 01 ciclo 02-20
*Autor: Natalia Alexandra Solórzano Paz 00120319
*Fecha: noviembre 2020
*/
/*
Generalizar todo lo realizado en ff), gg), hh) y ii) en una sola función que sea capaz de soportar
todos los casos.
*/
#include <iostream>
#include "ff.cpp"
#include "gg.cpp"
#include "hh.cpp"
#include "ii.cpp"

using namespace std;

void llenarUno(int myArray[10][10], int fila, int columna, int numFilas, int posDesplaza){
    switch (posDesplaza)
    {
    case 1: llenarUnoFF;
        break;
    case 2: llenarUnoGG;
        break;
    case 3: llenarUnoHH;
        break;
    case 4: llenarUnoII;
        break;
    default:
        break;
    }
}

int main()
{
    int desplaza;
    cout << "Ingrese 1, 2, 3, o 4: ";
    cin >> desplaza;
    int arreglo[10][10];
    arreglo[0][0] = 1;
    arreglo[1][1] = 2;
    llenarUno(arreglo, 2, 1, 9, desplaza);
    cout << "Resultado: ";
    cout << arreglo[6][7] << endl;
    return 0;
}