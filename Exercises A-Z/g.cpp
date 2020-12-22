/*Resolucion de Cuarta Evaluación 12/11/2020
*Análisis de Algoritmos sección 01 ciclo 02-20
*Autor: Natalia Alexandra Solórzano Paz 00120319
*Fecha: noviembre 2020
*/
/*
Modifique f) para que el entero generado se encuentre dentro de un rango [A,B], donde A y B
serán nuevos parámetros para la función.
*/
#include <iostream>
using namespace std;

int aleatorio(int, int);

int main()
{
    cout << aleatorio(2, 50) << endl;
    return 0;
}

int aleatorio(int desde, int hasta)
{
    return rand() % (hasta - desde + 1) + desde;
}