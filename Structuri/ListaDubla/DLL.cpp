//
// Created by ottoa on 6/8/2022.
//
#include "DLL.h"

void init(Nod *&cap1, Nod *&cap2) {
    cap1 = cap2 = nullptr;
}

void insert_inceput(Nod *&cap1, Nod *&cap2, int data) {
    Nod* p = new Nod;
    p->data = data;
    p->prev = nullptr;
    if (cap1 == nullptr)
    {
        p->next = nullptr;
        cap1 = p;
        cap2 = p;
    }
    else
    {
        p->next = cap1;
        cap1 = p;
    }
}

void insert_sfarsit(Nod *&cap1, Nod *&cap2, int data) {
    Nod* p = new Nod;
    p->data = data;
    p->next = nullptr;
    if (cap2 == nullptr)
    {
        p->prev = nullptr;
        cap1 = p;
        cap2 = p;
    }
    else
    {
        p->prev = cap2;
        cap2 = p;
    }
}

void sterge(Nod *&cap1, Nod *&cap2, int data) {
    if (cap1 != nullptr && cap2 != nullptr)
    {
        if(cap1->data == data) {
            Nod *tmp = cap1;
            cap1 = cap1->next;
            cap1->prev = nullptr;
            delete[] tmp;
        }
        // DE TERMINAT STERGEREA--------------------
    }
}

void afisare(Nod *cap1, Nod *cap2) {
    if (cap1 == nullptr || cap2 == nullptr)
        std::cout<<"Lista este goala!\n";
    else
    {
        while(cap1 != nullptr)
        {
            std::cout << cap1->data << " ";
            cap1 = cap1->next;
        }
        std::cout << "\n";
    }
}



