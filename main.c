#include <stdio.h>
#include "double_list.h"

int main() {
    Nodo* cabeza = NULL;

    // nodos al inicio
    insertarAlInicio(&cabeza, 110);
    insertarAlInicio(&cabeza, 87);
    insertarAlInicio(&cabeza, 45);

    // nodos al final
    insertarAlFinal(&cabeza, 1);
    insertarAlFinal(&cabeza, 0);

    // nodo en una posicion especifica 
    insertarEnPosicion(&cabeza, 76, 5);

// imprimir la lista creada
    printf("Lista despues de agregar nodos:\n");
    imprimirLista(cabeza);

    // eliminar un nodo con el dato 76
    eliminarNodo(&cabeza, 76);

    // imprimir la lista despues de nodo eliminado
    printf("Lista despues de eliminar el nodo (dato 76):\n");
    imprimirLista(cabeza);

    // buscar un nodo con el dato 40
    Nodo* nodoEncontrado = buscarNodo(cabeza, 40);
    if (nodoEncontrado != NULL) {
        printf("Nodo con dato encontrado (40): %d\n", nodoEncontrado->dato);
    } else {
        printf("Nodo con dato no encontrado (40). \n");
    }

    // lista hacia adelante
    printf("Lista en orden normal:\n");
    imprimirLista(cabeza);

    // lista hacia atras
    printf("Lista en orden inverso:\n");
    imprimirListaAlReves(cabeza);

    // free memoria lista
    liberarLista(cabeza);


    return 0;
}