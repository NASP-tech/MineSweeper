/*Resolucion de Cuarta Evaluación 12/11/2020
*Análisis de Algoritmos sección 01 ciclo 02-20
*Autor: Natalia Alexandra Solórzano Paz 00120319
*Fecha: noviembre 2020
*/
/*
Modifique g) para que, en lugar de generar un entero, genere dos, y retorne ambos
*/
#include <iostream>
#include <utility>
using namespace std;

std::pair<int, int> aleatorio(int desde, int hasta)
{
    pair<int, int> numero;
    numero.first = rand() % (hasta - desde + 1) + desde;
    numero.second = rand() % (hasta - desde + 1) + desde;
    return numero;
}

int main()
{
    pair<int, int> test;
    test = aleatorio(2,50);
    cout << test.first << " " << test.second << endl;
    return 0;
}

