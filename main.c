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





    return 0;
}