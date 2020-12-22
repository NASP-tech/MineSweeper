/*Resolucion de Cuarta Evaluación 12/11/2020
*Análisis de Algoritmos sección 01 ciclo 02-20
*Autor: Natalia Alexandra Solórzano Paz 00120319
*Fecha: noviembre 2020
*/
/*
Modifique oo) para que se reciba una segunda matriz N de caracteres junto con su longitud, y
que cuando el resultado de nn) sea positivo, coloque en N una ‘x’ en la misma posición que se
evaluó para M.
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
/*
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
*/
