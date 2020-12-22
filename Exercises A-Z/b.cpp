/*Resolucion de Cuarta Evaluación 12/11/2020
*Análisis de Algoritmos sección 01 ciclo 02-20
*Autor: Natalia Alexandra Solórzano Paz 00120319
*Fecha: noviembre 2020
*/
/*
Hacer una función en C++ que dada una variable de tipo int por referencia, y un valor V, inicialice
la variable con el valor V.
*/

#include <iostream>
using namespace std;

int Valor(int );
/*
int main()
{
    int valor = 0;
    cout << Valor(valor) << endl;
    return 0;
}
*/
int Valor(int n)
{   
    cout << "Ingrese un Valor: ";
    cin >> n;
    return n+2;
}