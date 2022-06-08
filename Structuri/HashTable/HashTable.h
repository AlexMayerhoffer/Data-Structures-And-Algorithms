//
// Created by ottoa on 6/8/2022.
//

#ifndef HASHTABLE_HASHTABLE_H
#define HASHTABLE_HASHTABLE_H

#include <iostream>
#include <string>

struct Nod {
    std::string data;
    Nod* next;
};

void initLista(Nod*& cap);
void insertList(Nod*& cap, std::string nume);
void stergeListPePozitie(Nod*& cap, int poz);
void afisareLista(Nod* cap);
int hash(std::string nume);
void insertHT(Nod** ht, std::string nume);
void afisareHash(Nod** ht);

#endif //HASHTABLE_HASHTABLE_H
