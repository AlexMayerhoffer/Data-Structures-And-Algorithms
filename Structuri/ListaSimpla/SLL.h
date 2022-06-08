//
// Created by ottoa on 6/8/2022.
//

#ifndef LISTASIMPLA_SLL_H
#define LISTASIMPLA_SLL_H

#include <iostream>

struct Nod {
    int data;
    Nod* next;
};

void init(Nod*& cap);
void insert_inceput(Nod*& cap, int data);
void insert_sfarsit(Nod*& cap, int data);
void sterge(Nod*& cap, int data);
void afisare(Nod* cap);


#endif //LISTASIMPLA_SLL_H
