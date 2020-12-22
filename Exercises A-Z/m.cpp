/*Resolucion de Cuarta Evaluación 12/11/2020
*Análisis de Algoritmos sección 01 ciclo 02-20
*Autor: Natalia Alexandra Solórzano Paz 00120319
*Fecha: noviembre 2020
*/
/*
Hacer una función en C++ que dado un arreglo char y su longitud, imprima su contenido en
pantalla en una sola línea, separando cada dato con un espacio.
*/
#include <iostream>
#include <ctype.h>
using namespace std;

void imprimir(char x[], int z)
{
    for (int i=0; i<z; i++)
    {
        if (isalpha(x[i]))
            { cout << x[i] << ' ';  }
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
    imprimir(arreglo, 10);
    return 0;
}