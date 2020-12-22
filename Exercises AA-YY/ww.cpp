/*Resolucion de Cuarta Evaluación 12/11/2020
*Análisis de Algoritmos sección 01 ciclo 02-20
*Autor: Natalia Alexandra Solórzano Paz 00120319
*Fecha: noviembre 2020
*/
/*
Hacer una función que dada una lista como la descrita en tt), y que si la lista tiene más de
10 nodos, recorte nodos desde el final hasta que queden 10.
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
bool removeFirst(T e, node** front);
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
    pushBack(T(16, "snadiksanl"), &dl);
    pushBack(T(17, "Pronouns"), &dl);
    pushBack(T(18, "sndjuasnisa"), &dl);
    pushBack(T(19, "Hungry"), &dl);
    pushBack(T(20, "askansd"), &dl);
    pushBack(T(21, "Programming"), &dl);    
    pushBack(T(22, "nstdgs"), &dl);
    cout << "WRITING LIST" << endl;
    traverseBegin(dl.front);

    //2,5,8,11,14
    pushAt(1, T(2, "Natalia"), &dl.front);
    pushAt(4, T(5, "Alexandra"), &dl.front);
    pushAt(7, T(8, "Solórzano"), &dl.front);
    pushAt(10, T(11, "Paz"), &dl.front);
    pushAt(13, T(14, "Analisis"), &dl.front);
    cout << "READING LIST" << endl;
    traverseBegin(dl.front);

    cout << "Deleting 12 elements until 10: " << endl;
    removeFirst(T(11, "Paz"), &dl.front);
    removeFirst(T(12, "askansd"), &dl.front);
    removeFirst(T(13, "Programming"), &dl.front);
    removeFirst(T(14, "Analisis"), &dl.front);
    removeFirst(T(15, "nstdgs"), &dl.front);
    removeFirst(T(16, "snadiksanl"), &dl.front);
    removeFirst(T(17, "Pronouns"), &dl.front);
    removeFirst(T(18, "sndjuasnisa"), &dl.front);
    removeFirst(T(19, "Hungry"), &dl.front);
    removeFirst(T(20, "askansd"), &dl.front);
    removeFirst(T(21, "Programming"), &dl.front);
    removeFirst(T(22, "nstdgs"), &dl.front);
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
bool removeFirst(T e, node** front) {
    if(*front) {
        if((*front)->info == e) {
            if(!(*front)->prev) {
                *front = (*front)->next;
                (*front)->prev = NULL;
            }
            else {
                node* prev = (*front)->prev;
                *front = (*front)->next;
                
                if(*front)
                    (*front)->prev = prev;

                prev->next = *front;
            }
            return true;
        }
        else
            return false + removeFirst(e, &(*front)->next);
    }
    else
        return false;
}