//
// Created by ottoa on 6/8/2022.
//
#include "SLL.h"

void init(Nod *&cap) {
    cap = nullptr;
}

void insert_inceput(Nod *&cap, int data) {
    Nod* p = new Nod;
    p->data = data;
    if(cap == nullptr)
    {
        cap = p;
        cap->next = nullptr;
    }
    else
    {
        p->next = cap;
        cap = p;
    }
}

void insert_sfarsit(Nod *&cap, int data) {
    Nod* p = new Nod;
    p->data = data;
    p->next = nullptr;
    if (cap == nullptr)
    {
        cap = p;
    }
    else
    {
        Nod* tmp = cap;
        while(tmp->next != nullptr)
        {
            tmp = tmp->next;
        }
        tmp->next = p;
    }
}

void sterge(Nod *&cap, int data) {
    if (cap != nullptr)
    {
        if (cap->data == data)
        {
            Nod* tmp = cap;
            cap = cap->next;
            delete[] tmp;
        }
        else
        {
            Nod* tmp = cap;
            while(tmp != nullptr && tmp->next->data != data)
            {
                tmp = tmp->next;
            }
            if(tmp!= nullptr)
            {
                Nod* tmp2 = tmp->next;
                tmp->next = tmp->next->next;
                delete[] tmp2;
            }
            else
            {
                std::cout << "Obiectul nu exista in lista!\n";
            }
        }
    }
}

void afisare(Nod *cap) {
    while(cap!= nullptr)
    {
        std::cout<< cap->data << " ";
        cap = cap->next;
    }
    std::cout << "\n";
}

