/*Resolucion de Cuarta Evaluación 12/11/2020
*Análisis de Algoritmos sección 01 ciclo 02-20
*Autor: Natalia Alexandra Solórzano Paz 00120319
*Fecha: noviembre 2020
*/
/*
Haga una función que realice el proceso de pp) en un loop, deteniéndose hasta que el valor de C
sea igual a 13.
*/
#include <iostream>
#include <utility>
#include "../Exercises A-Z/e.cpp"
#include "nn.cpp"

using namespace std;

void ppFuncion(int M[10][10], int longitud, int p, int c, char N[10][10])
{
    pair<int, int> numero;
    numero = entero(5, 20);

    if (checkUno(M, numero.first, numero.second))
    {
        N[numero.first][numero.second] = 'x';
    }
}

void qqFuncion(int M[10][10], int longitud, int p, int c, char N[10][10])
{
    do
    {
        ppFuncion(M, longitud, p, c, N);
    }
    while(c==13);
}

int main()
{
    int matriz[10][10];
    matriz[0][0] = 1;
    matriz[1][1] = 2;
    //checkUno(matriz, 2, 1);
    cout << "Resultado: ";
    cout << checkUno(matriz, 1, 1) << endl;
    return 0;
}