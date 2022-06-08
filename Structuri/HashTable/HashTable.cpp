//
// Created by ottoa on 6/8/2022.
//

#include "HashTable.h"


void initLista(Nod*& cap)
{
    cap = nullptr;
}

void insertList(Nod*& cap, std::string nume)
{
    Nod* p = new Nod;
    p->data = nume;
    if (cap == nullptr)
    {
        p->next = nullptr;
        cap = p;
    }
    else
    {
        p->next = cap;
        cap = p;
    }
}

void stergeListPePozitie(Nod*& cap, int poz)
{
    Nod* q = cap;
    int count = 0;
    if (poz == 1)
    {
        cap = cap->next;
    }
    else
    {
        while (q != 0 && count != poz - 2)
        {
            q = q->next;
            count++;
        }
        if (count == poz - 2)
        {
            Nod* p = q->next;
            q->next = p->next;
            delete p;
        }
    }
}

void afisareLista(Nod* cap)
{
    Nod* p = cap;
    while (p != nullptr)
    {
        std::cout << p->data << " ";
        p = p->next;
    }
    std::cout << std::endl;
}

int hash(std::string nume)
{
    int a = 0;
    for (int i = 0; i < nume.length(); i++)
        a = a + nume[i];
    return a % 10;
}

void insertHT(Nod** ht, std::string nume)
{
    int key = hash(nume);
    insertList(ht[key], nume);
}

void afisareHash(Nod** ht)
{
    for (int i = 0; i < 10; i++)
    {
        std::cout << i << ": ";
        afisareLista(ht[i]);
    }
}