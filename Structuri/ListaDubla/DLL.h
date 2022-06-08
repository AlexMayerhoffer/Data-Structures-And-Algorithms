//
// Created by ottoa on 6/8/2022.
//

#ifndef LISTADUBLA_DLL_H
#define LISTADUBLA_DLL_H

#include <iostream>

struct Nod {
    int data;
    Nod* next;
    Nod* prev;
};

void init(Nod*& cap1, Nod*& cap2);
void insert_inceput(Nod*& cap1, Nod*& cap2, int data);
void insert_sfarsit(Nod*& cap1, Nod*& cap2, int data);
void sterge(Nod*& cap, Nod*& cap2, int data);
void afisare(Nod* cap1, Nod* cap2);

#endif //LISTADUBLA_DLL_H
