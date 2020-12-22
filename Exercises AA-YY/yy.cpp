/*Resolucion de Cuarta Evaluación 12/11/2020
*Análisis de Algoritmos sección 01 ciclo 02-20
*Autor: Natalia Alexandra Solórzano Paz 00120319
*Fecha: noviembre 2020
*/
/*
Hacer una función en C++ que dada una lista como la descrita en tt), escriba su contenido en un
archivo de texto llamado “data.csv” con el formato descrito en xx).
*/
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
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

void write_csv(std::string filename, std::string colname, std::vector<int> vals){
    std::ofstream myFile(filename);
    myFile << colname << "\n";
    for(int i = 0; i < vals.size(); ++i)
    {
        myFile << vals.at(i) << "\n";
    }
    myFile.close();
}

int main(void) {
    std::vector<int> vec(1, 15);
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
    
    write_csv("yymyCSV.csv", "Apple", vec);
    write_csv("yymyCSV.csv", "Apple", vec);
    write_csv("yymyCSV.csv", "nmkdis", vec);
    write_csv("yymyCSV.csv", "Consecutive", vec);
    write_csv("yymyCSV.csv", "Consecutive", vec);
    write_csv("yymyCSV.csv", "snadiksanl", vec);
    write_csv("yymyCSV.csv", "Pronouns", vec);
    write_csv("yymyCSV.csv", "Pronouns", vec);
    write_csv("yymyCSV.csv", "sndjuasnisa", vec);
    write_csv("yymyCSV.csv", "Hungry", vec);
    write_csv("yymyCSV.csv", "Hungry", vec);
    write_csv("yymyCSV.csv", "askansd", vec);
    write_csv("yymyCSV.csv", "Programming", vec);
    write_csv("yymyCSV.csv", "Programming", vec);
    write_csv("yymyCSV.csv", "nstdgs", vec);

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
