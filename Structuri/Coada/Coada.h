//
// Created by ottoa on 6/8/2022.
//

#ifndef COADA_COADA_H
#define COADA_COADA_H

#include <iostream>
#define max 10

struct Coada
{
    int cap, coada;
    int vec[max];
};

void init(Coada& q);
bool full(Coada q);
bool empty(Coada q);
void push(Coada& q, int val);
void pop(Coada& q);

#endif //COADA_COADA_H
