/*Resolucion de Cuarta Evaluación 12/11/2020
*Análisis de Algoritmos sección 01 ciclo 02-20
*Autor: Natalia Alexandra Solórzano Paz 00120319
*Fecha: noviembre 2020
*/
/*
Hacer una función en C++ que le pida al usuario un número entero y retorne este valor.
*/

#include <iostream>
using namespace std;

int entero();
/*
int main()
{
    cout << entero() << endl;
    return 0;
}
*/
int entero()
{
    int numero = 0;
    cout << "Ingresa un número: ";
    cin >> numero;
    return numero;
}