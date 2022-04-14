//
// Created by otto on 4/14/22.
//

#ifndef LAB_8_LABIRINT_H
#define LAB_8_LABIRINT_H

#include <iostream>
#include <iomanip>
#include <vector>

struct Vect2D {
    int x;
    int y;
};

#define VISITED 'x'
#define EMPTY ' '
#define FINISH 'F'

void initLabirint(char**& labirint, int l, int c);
void printLabirint(char** labirint, int l, int c);
void createLabirint(char**& labirint, int l, int c);
bool validPos(char** labirint, Vect2D pos);
int path(char **labirint, int l, int c, std::vector<Vect2D>* trail);

#endif //LAB_8_LABIRINT_H
