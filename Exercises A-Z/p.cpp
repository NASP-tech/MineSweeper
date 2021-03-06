/*Resolucion de Cuarta Evaluación 12/11/2020
*Análisis de Algoritmos sección 01 ciclo 02-20
*Autor: Natalia Alexandra Solórzano Paz 00120319
*Fecha: noviembre 2020
*/
/*
Modifique o) para que también se agreguen barras al inicio y al final de la secuencia impresa, con
sus respectivos márgenes (que en este caso serían a un solo lado)
*/
#include <iostream>
#include <ctype.h>
using namespace std;

void imprimir(char x[], int z)
{
    for (int i=0; i<z; i++)
    {
        if (isalpha(x[i]))
            { cout << x[i] << ' ' << ' ' << ' ' << ' ' << '|' << ' ' << ' ' << ' ' << ' ';  }
    }
}

int main()
{
    char arreglo[10];
    arreglo[0]='N';
    arreglo[1]='a';
    arreglo[2]='t';
    arreglo[3]='a';
    arreglo[4]='l';
    arreglo[5]='i';
    arreglo[6]='a';
    cout << '|' << ' ' << ' ' << ' ' << ' ';
    imprimir(arreglo, 10);
    return 0;
}