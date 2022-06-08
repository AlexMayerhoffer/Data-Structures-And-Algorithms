#include "HashTable.h"
#define MAX_HT 10

int main()
{
    Nod** ht = new Nod*[MAX_HT];
    for (int i = 0; i < MAX_HT; i++)
    {
        initLista(ht[i]);
    }

    insertHT(ht, "ala");
    insertHT(ht, "sudoku");
    insertHT(ht, "Pui");
    insertHT(ht, "iphone");
    insertHT(ht, "samsung");
    insertHT(ht, "gigel");
    insertHT(ht, "tataie");
    insertHT(ht, "baaai");
    insertHT(ht, "lopata");
    insertHT(ht, "rog");
    insertHT(ht, "asus");
    insertHT(ht, "cafea");
    insertHT(ht, "habinii");

    afisareHash(ht);

    return 0;

}