#ifndef DOUBLE_LIST_H
#define DOUBLE_LIST_H

// se define el nodo
typedef struct Nodo {
    int dato;
    struct Nodo* anterior;
    struct Nodo* siguiente;
} Nodo;

// para manipular la lista doblemente enlazada
Nodo* crearNodo(int dato);
void insertarAlInicio(Nodo** cabeza, int dato);
void insertarAlFinal(Nodo** cabeza, int dato);
void insertarEnPosicion(Nodo** cabeza, int dato, int posicion);
void eliminarNodo(Nodo** cabeza, int dato);

Nodo* buscarNodo(Nodo* cabeza, int dato);
void imprimirLista(Nodo* cabeza);
void imprimirListaAlReves(Nodo* cabeza);
void liberarLista(Nodo* cabeza);

#endif