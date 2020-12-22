/*Resolucion de Cuarta Evaluación 12/11/2020
*Análisis de Algoritmos sección 01 ciclo 02-20
*Autor: Natalia Alexandra Solórzano Paz 00120319
*Fecha: noviembre 2020
*/
/*
Hacer una función en C++ que reciba, por referencia, un entero P, un entero C y una matriz M
cuadrada junto con su longitud n. La función debe usar e) para obtener datos que sirvan de
posición para poder utilizar nn). Si el resultado es positivo, debe aumentar P en 100, y aumentar
C en 1. Si el resultado es negativo, debe restarle 100 al valor de P.
*/
#include <iostream>
#include <utility>
#include "../Exercises A-Z/e.cpp"
#include "nn.cpp"
using namespace std;

void ooFuncion(int M[10][10], int longitud, int p, int c)
{
    pair<int, int> numero;
    numero = entero(5, 20);

    if (checkUno(M, numero.first, numero.second))
    {
        p = p+100;
        c = c+1;
    }
    else
    {
        p = p-100;
    }
}

int main()
{
    int matriz[10][10];
    matriz[0][0] = 1;
    matriz[1][1] = 2;
    //checkUno(test, 2, 1);
    cout << "Resultado: ";
    cout << checkUno(matriz, 2, 2) << endl;
    return 0;
}
