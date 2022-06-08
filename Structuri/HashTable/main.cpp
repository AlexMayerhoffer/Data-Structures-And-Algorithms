#include "HashTable.h"
#define MAX_HT 10

int main()
{
    Nod** HT = new Nod*[MAX_HT];
    for (int i = 0; i < MAX_HT; i++)
    {
        initLista(HT[i]);
    }

    insertHT(HT, "ala");
    insertHT(HT, "sudoku");
    insertHT(HT, "Pui");
    insertHT(HT, "iphone");
    insertHT(HT, "samsung");
    insertHT(HT, "gigel");
    insertHT(HT, "tataie");
    insertHT(HT, "baaai");
    insertHT(HT, "lopata");
    insertHT(HT, "rog");
    insertHT(HT, "asus");
    insertHT(HT, "cafea");
    insertHT(HT, "habinii");

    afisareHash(HT);

    return 0;

}