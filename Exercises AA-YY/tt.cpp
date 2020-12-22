/*Resolucion de Cuarta Evaluación 12/11/2020
*Análisis de Algoritmos sección 01 ciclo 02-20
*Autor: Natalia Alexandra Solórzano Paz 00120319
*Fecha: noviembre 2020
*/
/*
Hacer las funciones en C++ necesarias para manejar una lista doblemente enlazada que en cada
nodo contendrá dos datos: un entero y una cadena de caracteres. (Puede basarse en las vistas en
clase y en las SDA).
*/
#include <iostream>

using namespace std;

struct nodeinfo {
    int n;
    string c;

    nodeinfo() {}
    nodeinfo(int _number, string character) : n(_number), c(character) {}

    bool operator==(const nodeinfo& r) {
        return this->n == r.n && this->c == r.c;
    }

    bool operator!=(const nodeinfo& r) {
        return this->n != r.n && this->c != r.c;
    }

    string toString() {
        return to_string(this->n) + "," + this->c;
    }
};
typedef nodeinfo T;
/*
STRUCTURE WITH REFERENCE TO THE NEXT AND PREVIOUS NODES
*/
struct node {
    T info;
    node* prev, *next;
};
/*
STRUCTURE WITH FRONT AND REAR ELEMENTS
*/
struct doubleLinked {
    node* front,* back;

    doubleLinked () {
        front = back = NULL;
    }
};

void traverseBegin(node* front);
void pushBack(T info, doubleLinked* dl);
void pushAt(int pos, T info, node** front);

int main(void) {
    doubleLinked dl;
    /*
    Apple
    nmkdis
    Consecutive
    snadiksanl
    Pronouns
    sndjuasnisa
    Hungry
    sdkansd
    Programming
    */

    pushBack(T(1, "Apple"), &dl);
    pushBack(T(3, "nmkdis"), &dl);
    pushBack(T(4, "Consecutive"), &dl);
    pushBack(T(6, "snadiksanl"), &dl);
    pushBack(T(7, "Pronouns"), &dl);
    pushBack(T(9, "sndjuasnisa"), &dl);
    pushBack(T(10, "Hungry"), &dl);
    pushBack(T(12, "askansd"), &dl);
    pushBack(T(13, "Programming"), &dl);    
    pushBack(T(15, "nstdgs"), &dl);
    cout << "WRITING LIST" << endl;
    traverseBegin(dl.front);

    //2,5,8,11,14
    pushAt(1, T(2, "Apple"), &dl.front);
    pushAt(4, T(5, "Consecutive"), &dl.front);
    pushAt(7, T(8, "Pronouns"), &dl.front);
    pushAt(10, T(11, "Hungry"), &dl.front);
    pushAt(13, T(14, "Programming"), &dl.front);
    cout << "READING LIST" << endl;
    traverseBegin(dl.front);

    return 0;
}

void pushBack(T info, doubleLinked* dl) {
    node* n = new node;
    n->info = info;
    n->next = NULL;

    /*
    SAME AS PUSHFRONT
     */
    if(!dl->front) {
        dl->front = dl->back = n;
        n->prev = n->next = NULL;

        return;
    }

    /*THE LIST IS CHECKED
    THE LIST WILL POINT TO THE NEW NODE
    THE REFERENCE TO THE POINTER IS CHANGED
    */
    n->prev = dl->back;
    dl->back->next = n;
    dl->back = n;
}

void pushAt(int pos, T info, node** front) {
    node* n = new node;
    n->info = info;
    n->prev = n->next = NULL;
    /*
    INSERT A NODE WITH PUSHFRONT
    */
    if(pos == 0) {
        (*front)->prev = n;
        n->next = *front;

        *front = n;

        return;
    }

    int counter = 0;
    /*
    SWITCH TO PUSH POSITION
    */
    node* aux = *front;
    while(counter < pos - 1) {
        aux = aux->next;
        counter++;
    }

    /*
    MODIFY REFERENCES
    */
    n->prev = aux;
    n->next = aux->next;
    aux->next->prev = n;
    aux->next = n;
}

void traverseBegin(node* front) {
    if(front) {
        cout << front->info.toString() << "  ";
        traverseBegin(front->next);
    }
    else
        cout << endl;
}
