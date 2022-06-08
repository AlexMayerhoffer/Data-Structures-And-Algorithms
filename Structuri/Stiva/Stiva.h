//
// Created by ottoa on 6/8/2022.
//

#ifndef STIVA_STIVA_H
#define STIVA_STIVA_H

#include <iostream>
#define max 100

struct Stiva {
    int vf;
    int vec[max];
};

void init(Stiva& s);
void push(Stiva& s, int val);
bool empty(Stiva s);
bool full(Stiva s);
int pop(Stiva& s);
void top(Stiva s);



#endif //STIVA_STIVA_H
