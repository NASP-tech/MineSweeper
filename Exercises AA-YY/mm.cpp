/*Resolucion de Cuarta Evaluación 12/11/2020
*Análisis de Algoritmos sección 01 ciclo 02-20
*Autor: Natalia Alexandra Solórzano Paz 00120319
*Fecha: noviembre 2020
*/
/*
Hacer una función en C++ que, dada una matriz M, use g) para generar un número entre
1 y 4, de manera que:
1. Al obtener un 1, use h) para obtener datos que sirvan de posición para ejecutar aa), pero
en la variante generada en ii).
2. Al obtener un 2, use h) para obtener datos que sirvan de posición para ejecutar bb), pero
en la variante generada en ii).
3. Al obtener un 3, use h) para obtener datos que sirvan de posición para ejecutar cc), pero
en la variante generada en ii).
4. Al obtener un 4, use h) para obtener datos que sirvan de posición para ejecutar dd), pero
en la variante generada en ii).
*/
#include <iostream>
#include "ii.cpp"

using namespace std;

std::pair<int, int> aleatorio(int desde, int hasta)
{
    pair<int, int> numero;
    numero.first = rand() % (hasta - desde + 1) + desde;
    numero.second = rand() % (hasta - desde + 1) + desde;
    return numero;
}
/*
int main()
{
    pair<int, int> desplaza;
    desplaza = aleatorio(1, 4);
    int arreglo[10][10];
    arreglo[0][0] = 1;
    arreglo[1][1] = 2;
    llenarUnoII(arreglo, 2, 1, 9, desplaza.first);    
    cout << "Resultado 1: ";
    cout << arreglo[6][7] << endl;
    llenarUnoII(arreglo, 2, 1, 9, desplaza.second);
    cout << "Resultado 2: ";
    cout << arreglo[6][7] << endl;
    return 0;
}
*/