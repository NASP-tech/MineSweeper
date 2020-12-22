/*Resolucion de Cuarta Evaluación 12/11/2020
*Análisis de Algoritmos sección 01 ciclo 02-20
*Autor: Natalia Alexandra Solórzano Paz 00120319
*Fecha: noviembre 2020
*/
/*
Modificar los casos aa), bb), cc) y dd) para que, coloque los 1 en la celda dada y en 4 celdas en la
dirección indicada.
*/
#include <iostream>
using namespace std;

void llenarUnoHH(int myArray[10][10], int fila, int columna, int numFilas, int direccion)
{
    int columnas = (sizeof(myArray[0]) / sizeof(myArray[0][0]));
    switch (direccion)
    {
    case 1: // left
        if (columna == 0)
        {
            myArray[fila][columna] = 1;
        }
        else
        {
            if (columna - 1 == 0)
            {
                myArray[fila][columna] = 1;
                myArray[fila][columna - 1] = 1;
            }
            else
            {
                if (columna - 2 == 0)
                {
                    myArray[fila][columna] = 1;
                    myArray[fila][columna - 1] = 1;
                    myArray[fila][columna - 2] = 1;
                }
                else
                {
                    if (columna - 3 == 0)
                    {
                        myArray[fila][columna] = 1;
                        myArray[fila][columna - 1] = 1;
                        myArray[fila][columna - 2] = 1;
                        myArray[fila][columna - 3] = 1;
                    }
                    else
                    {
                        myArray[fila][columna] = 1;
                        myArray[fila][columna - 1] = 1;
                        myArray[fila][columna - 2] = 1;
                        myArray[fila][columna - 3] = 1;
                        myArray[fila][columna - 4] = 1;
                    }
                }
            }
        }

        break;
    case 2: // Right
        if (columna <= columnas)
        {
            myArray[fila][columna] = 1;
            if (columna + 1 <= columnas)
            {
                myArray[fila][columna + 1] = 1;
                if (columna + 2 <= columnas)
                {
                    myArray[fila][columna + 2] = 1;
                    if (columna + 3 <= columnas)
                    {
                        myArray[fila][columna + 3] = 1;
                        if (columna + 4 <= columnas)
                        {
                            myArray[fila][columna + 4] = 1;
                        }
                    }
                }
            }
        }
        break;
    case 3: // Up
        if (fila == 0)
        {
            myArray[fila][columna] = 1;
        }
        else
        {
            if (fila - 1 == 0)
            {
                myArray[fila][columna] = 1;
                myArray[fila - 1][columna] = 1;
            }
            else
            {
                if (fila - 2 == 0)
                {
                    myArray[fila][columna] = 1;
                    myArray[fila - 1][columna] = 1;
                    myArray[fila - 2][columna] = 1;
                }
                else
                {
                    if (fila - 3 == 0)
                    {
                        myArray[fila][columna] = 1;
                        myArray[fila - 1][columna] = 1;
                        myArray[fila - 2][columna] = 1;
                        myArray[fila - 3][columna] = 1;
                    }
                    else
                    {
                        myArray[fila][columna] = 1;
                        myArray[fila - 1][columna] = 1;
                        myArray[fila - 2][columna] = 1;
                        myArray[fila - 3][columna] = 1;
                        myArray[fila - 4][columna] = 1;
                    }
                }
            }
        }

        break;
    case 4: // Down
        if (fila <= numFilas)
        {
            myArray[fila][columna] = 1;
            if (fila + 1 <= numFilas)
            {
                myArray[fila + 1][columna] = 1;
            }
            if (fila + 2 <= numFilas)
            {
                myArray[fila + 2][columna] = 1;
            }
            if (fila + 3 <= numFilas)
            {
                myArray[fila + 3][columna] = 1;
            }
            if (fila + 4 <= numFilas)
            {
                myArray[fila + 4][columna] = 1;
            }
        }
        break;
    default:
        break;
    }
}

/*
int main()
{
    int desplaza;
    cout << "Ingrese 1, 2, 3, o 4: ";
    cin >> desplaza;
    int arreglo[10][10];
    arreglo[0][0] = 1;
    arreglo[1][1] = 2;
    llenarUnoHH(arreglo, 2, 1, 9, desplaza);
    cout << "Resultado: ";
    cout << arreglo[3][1] << endl;
    return 0;
}
*/

