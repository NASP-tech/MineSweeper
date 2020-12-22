/*Resolucion de Cuarta Evaluación 12/11/2020
*Análisis de Algoritmos sección 01 ciclo 02-20
*Autor: Natalia Alexandra Solórzano Paz 00120319
*Fecha: noviembre 2020
*/
/*
Modificar Quicksort para que sea capaz de ordenar descendentemente una lista como la descrita
en tt), usando como criterio de comparación la cadena de caracteres (orden lexicográfico) que
hay en cada nodo.
*/
#include <iostream>

using namespace std;

struct nodeinfo {
    int n;
    string c;
    int data;
    nodeinfo *next;
    nodeinfo *prev;

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
void swap ( int* a, int* b )  
{ int t = *a; *a = *b; *b = t; }  

nodeinfo *lastNode(nodeinfo *root)  
{  
    while (root && root->next)  
        root = root->next;  
    return root;  
}  

nodeinfo* partition(nodeinfo *l, nodeinfo *h)  
{  
    int x = h->data;  
    nodeinfo *i = l->prev;  
    for (nodeinfo *j = l; j != h; j = j->next)  
    {  
        if (j->data <= x)  
        {  
            i = (i == NULL)? l : i->next; 
            swap(&(i->data), &(j->data));  
        }  
    }  
    i = (i == NULL)? l : i->next; 
    swap(&(i->data), &(h->data));  
    return i;  
}  

void _quickSort(nodeinfo* l, nodeinfo *h)  
{  
    if (h != NULL && l != h && l != h->next)  
    {  
        nodeinfo *p = partition(l, h);  
        _quickSort(l, p->prev);  
        _quickSort(p->next, h);  
    }  
}  

void quickSort(nodeinfo *head)  
{  
    nodeinfo *h = lastNode(head);  
    _quickSort(head, h);  
}  

void printList(nodeinfo *head)  
{  
    while (head)  
    {  
        cout << head->data << " ";  
        head = head->next;  
    }  
    cout << endl;  
}  

void push(nodeinfo** head_ref, int new_data)  
{  
    nodeinfo* new_node = new nodeinfo; 
    new_node->data = new_data;  
    new_node->prev = NULL;  
    new_node->next = (*head_ref);  
    if ((*head_ref) != NULL) (*head_ref)->prev = new_node ;  
    (*head_ref) = new_node;  
}  
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
void traverseEnd(node* back);
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

    pushBack(T(1, "Zebra"), &dl);
    pushBack(T(3, "sndjuasnisa"), &dl);
    pushBack(T(4, "snadiksanl"), &dl);
    pushBack(T(6, "sdkansd"), &dl);
    pushBack(T(7, "Pronouns"), &dl);
    pushBack(T(9, "nmkdis"), &dl);
    pushBack(T(10, "Hungry"), &dl);
    pushBack(T(12, "Consecutive"), &dl);
    pushBack(T(13, "askansd"), &dl);    
    pushBack(T(15, "Apple"), &dl);
    cout << "WRITING LIST" << endl;
    traverseEnd(dl.back);

    //2,5,8,11,14
    pushAt(1, T(2, "Zebra"), &dl.front);
    pushAt(4, T(5, "Pronouns"), &dl.front);
    pushAt(7, T(8, "Hungry"), &dl.front);
    pushAt(10, T(11, "Consecutive"), &dl.front);
    pushAt(13, T(14, "Apple"), &dl.front);
    cout << "READING LIST" << endl;
    traverseEnd(dl.back);

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
void traverseEnd(node* back) {
    if(back) {
        cout << back->info.toString() << "  ";
        // traverseBegin(back->prev); Line with error, wrong recursive call
        traverseEnd(back->prev);
    }
    else
        cout << endl;
}
