/*Resolucion de Cuarta Evaluación 12/11/2020
*Análisis de Algoritmos sección 01 ciclo 02-20
*Autor: Natalia Alexandra Solórzano Paz 00120319
*Fecha: noviembre 2020
*/
/*
Modifique d) para que, en lugar de pedir un entero, pida dos, y retorne ambos.
*/
#include <iostream>
#include <utility>
using namespace std;

std::pair<int, int> entero(int a, int b)
{
    pair<int, int> numero;
    do
    {
        cout <<  "Ingrese numero 1: ";
        cin >> numero.first;
    }
    while(numero.first <= a or numero.first >=b);
    do
    {
        cout <<  "Ingrese numero 2: ";
        cin >> numero.second;
    }
    while(numero.second <= a or numero.second >=b);
    return numero;
}
/*
int main()
{
    pair<int, int> enteros;
    cout << "Test ";
    enteros = entero(5,10);
    cout << enteros.first << endl;
    cout << enteros.second << endl;

    return 0;
}
*/