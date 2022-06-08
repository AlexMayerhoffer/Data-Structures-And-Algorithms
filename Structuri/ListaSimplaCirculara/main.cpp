#include "CSLL.h"

int main()
{
    Nod* cap;
    Nod* coada = 0;
    init(cap);

    inserare(cap, coada, 3);
    inserare(cap, coada, 4);
    inserare(cap, coada, 5);
    inserare(cap, coada, 6);

    afisare(cap);

    std::cout << std::endl;
    stergere(cap, coada, 4);

    afisare(cap);

    return 0;
}