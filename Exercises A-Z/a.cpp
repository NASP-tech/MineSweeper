/*Resolucion de Cuarta Evaluación 12/11/2020
*Análisis de Algoritmos sección 01 ciclo 02-20
*Autor: Natalia Alexandra Solórzano Paz 00120319
*Fecha: noviembre 2020
*/
/*
Hacer una función en C++ que le pida al usuario su nombre y retorne este valor.
*/

#include <iostream>
#include <string>
using namespace std;

string nombre();
/*
int main()
{
    cout << nombre() << endl;
    return 0;
}
*/
string nombre()
{
    string myName;
    cout << "Ingrese su nombre: ";
    cin >> myName;
    return myName;
}