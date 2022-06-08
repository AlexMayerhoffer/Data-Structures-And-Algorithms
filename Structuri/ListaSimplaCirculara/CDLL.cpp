//
// Created by ottoa on 6/8/2022.
//

#include "CSLL.h"


void init(Nod*& cap)
{
    cap = nullptr;
}

void inserare(Nod*& cap, Nod*& cap2, int val)
{
    Nod* p = new Nod;
    p->data = val;
    if (cap == nullptr)
    {
        p->next = p;
        cap = p;
        cap2 = p;
    }
    else
    {
        p->next = cap;
        cap = p;
        cap2->next = cap;
    }
}

void afisare(Nod* cap)
{
    Nod* p = cap;
    std::cout << p->data << " ";
    p = p->next;
    while (p != cap)
    {
        std::cout << p->data << " ";
        p = p->next;
    }
}

void stergere(Nod*& cap, Nod*& cap2, int poz)
{
    if (poz == 1)
    {
        cap = cap->next;
        cap2->next = cap;
    }

    Nod* p = cap;
    p = p->next;
    int c = 2;

    while ( c != poz-1)
    {
        p = p->next;
        c = c + 1;
    }

    Nod* q = p->next;
    p->next = p->next->next;
    delete q;
}
