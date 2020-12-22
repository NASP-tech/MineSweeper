/*Resolucion de Cuarta Evaluación 12/11/2020
*Análisis de Algoritmos sección 01 ciclo 02-20
*Autor: Natalia Alexandra Solórzano Paz 00120319
*Fecha: noviembre 2020
*/
/*
Hacer una función en C++ para que, dada una matriz de caracteres, utilice p) para cada una de
sus filas. (Es posible que sea necesario modificar p) un poco, y también colocar saltos de línea por
motivos estéticos).
*/
#include <iostream>
#include <utility>
using namespace std;

// function p
void imprimir(char x[], int z)
{
    for (int i=0; i<z; i++)
    {
        if (isalpha(x[i]))
            { cout << x[i] << ' ' << ' ' << ' ' << ' ' << '|' << ' ' << ' ' << ' ' << ' ';  }
    }
}

void ssFuncion(char N[10][10], int longitud)
{
    for (int i=0; i<longitud; i++)
    {
        imprimir(N[i], longitud);
    }
}
/*
int main()
{
    char matriz[10][10];
    matriz[0][0] = '1';
    matriz[1][1] = '2';
    //checkUno(matriz, 2, 1);
    cout << "Resultado: ";
    imprimir(matriz[1], 10);
    return 0;
}
*/