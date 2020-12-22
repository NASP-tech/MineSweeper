/*Resolucion de Cuarta Evaluación 12/11/2020
*Análisis de Algoritmos sección 01 ciclo 02-20
*Autor: Natalia Alexandra Solórzano Paz 00120319
*Fecha: noviembre 2020
*/
/*
Modifique c) para que el entero solicitado se encuentre dentro de un rango [A,B], donde A y B
serán nuevos parámetros para la función.
*/
#include <iostream>
using namespace std;

int entero(int, int);
/*
int main()
{
    cout << entero(5, 10) << endl;
    return 0;
}
*/
int entero(int a, int b)
{
    int numero = 0;
    do
    {
        cout << "Ingrese un numero: ";
        cin >> numero;
    } while (numero <= a + 1 or numero >= b + 1);
    return numero;
}