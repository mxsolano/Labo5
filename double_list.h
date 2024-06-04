#ifndef DOUBLE_LIST_H
#define DOUBLE_LIST_H

// se define el nodo
typedef struct Nodo {
    int dato;
    struct Nodo* anterior;
    struct Nodo* siguiente;
} Nodo;

#endif