/*Resolucion de Cuarta Evaluación 12/11/2020
*Análisis de Algoritmos sección 01 ciclo 02-20
*Autor: Natalia Alexandra Solórzano Paz 00120319
*Fecha: noviembre 2020
*/
/*
Hacer una función en C++ que genere y retorne un número entero aleatorio.
*/
#include <iostream>
using namespace std;

int aleatorio();

int main()
{   
    cout << aleatorio() << endl;
    return 0;
}

int aleatorio()
{
    return rand();
}