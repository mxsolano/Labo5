#include <stdio.h>
#include <stdlib.h>
#include "double_list.h"

// nuevo nodo
Nodo* crearNodo(int dato) {
    Nodo* nuevoNodo = (Nodo*)malloc(sizeof(Nodo));
    nuevoNodo->dato = dato;
    nuevoNodo->anterior = NULL;
    nuevoNodo->siguiente = NULL;
    return nuevoNodo;
}


// insertar un nodo al inicio
void insertarAlInicio(Nodo** cabeza, int dato) {
    Nodo* nuevoNodo = crearNodo(dato);
    if (*cabeza == NULL) {
        *cabeza = nuevoNodo; // lista estaba vacia
    } else {
        nuevoNodo->siguiente = *cabeza;
        (*cabeza)->anterior = nuevoNodo;
        *cabeza = nuevoNodo;
    }
}

// insertar un nodo al final
void insertarAlFinal(Nodo** cabeza, int dato) {
    Nodo* nuevoNodo = crearNodo(dato);
    if (*cabeza == NULL) {
        *cabeza = nuevoNodo; // lista estaba vacia
    } else {
        Nodo* actual = *cabeza;
        while (actual->siguiente != NULL) {
            actual = actual->siguiente;
        }
        actual->siguiente = nuevoNodo;
        nuevoNodo->anterior = actual;
    }
}

// insertar un nodo en una posicion especofica
void insertarEnPosicion(Nodo** cabeza, int dato, int posicion) {
    if (posicion == 0) {
        insertarAlInicio(cabeza, dato);
        return;
    }

    Nodo* nuevoNodo = crearNodo(dato);
    Nodo* actual = *cabeza;
    int indice = 0;

    // recorre la lista hasta encontrar la posicion  o llegar al final
    while (actual != NULL && indice < posicion - 1) {
        actual = actual->siguiente;
        indice++;
    }

    if (actual == NULL) {
        // posicion esta fuera del rango, insertar al final
        insertarAlFinal(cabeza, dato);
    } else if (actual->siguiente == NULL) {
        // posicion es al final de la lista
        actual->siguiente = nuevoNodo;
        nuevoNodo->anterior = actual;
    } else {
        // inserta en el medio de la lista
        nuevoNodo->siguiente = actual->siguiente;
        nuevoNodo->anterior = actual;
        actual->siguiente->anterior = nuevoNodo;
        actual->siguiente = nuevoNodo;
    }
}