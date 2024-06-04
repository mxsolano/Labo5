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
