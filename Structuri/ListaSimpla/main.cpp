#include <iostream>
#include "SLL.h"

int main() {
    Nod* lista;
    init(lista);

    insert_inceput(lista,2);
    insert_inceput(lista,1);
    insert_sfarsit(lista,3);
    insert_sfarsit(lista,4);

    afisare(lista);

    sterge(lista,3);

    afisare(lista);
    return 0;
}
