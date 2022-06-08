//
// Created by ottoa on 6/8/2022.
//

#ifndef LISTASIMPLACIRCULARA_CSLL_H
#define LISTASIMPLACIRCULARA_CSLL_H

#include <iostream>

struct Nod {
    int data;
    Nod* next;
};

void init(Nod*& cap);
void inserare(Nod*& cap, Nod*& cap2, int val);
void afisare(Nod* cap);
void stergere(Nod*& cap, Nod*& cap2, int poz);

#endif //LISTASIMPLACIRCULARA_CSLL_H
