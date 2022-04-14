//
// Created by otto on 4/14/22.
//

#include "Labirint.h"

void printLabirint(char **labirint, int l, int c) {
    std::cout << "\nLabirint:\n";

    for (int i = 1; i <= l; i++)
    {
        for (int j = 1; j <= c; j++)
            std::cout << std::setw(2) << labirint[i][j];
        std::cout << std::endl;
    }
}

void createLabirint(char **&labirint, int l, int c) {
    int i,j;

    for (i = 1; i <= l; i++)
        for (j = 1; j <= c; j++)
            labirint[i][j] = EMPTY;

    for(i = 1; i <= l; i++)
    {
        labirint[i][1] = '+';
        labirint[i][c] = '+';
    }
    for(i = 1; i <= c; i++)
    {
        labirint[1][i] = '+';
        labirint[l][i] = '+';
    }
    labirint[2][7] = '+';
    labirint[3][2] = '+';
    labirint[3][3] = '+';
    labirint[3][5] = '+';
    labirint[3][6] = '+';
    labirint[3][7] = '+';
    labirint[4][7] = '+';
    labirint[5][2] = '+';
    labirint[5][3] = '+';
    labirint[5][5] = '+';

    labirint[4][8] = FINISH;
}

bool validPos(char** labirint, Vect2D pos)
{
    return labirint[pos.x][pos.y] == EMPTY;
}

void initLabirint(char **&labirint, int l, int c) {
    labirint = new char*[l+1];
    for(int index = 0; index <= l; index++)
        labirint[index] = new char[c+1];
}

int path(char **labirint, int l, int c, std::vector<Vect2D> *trail) {
    if(labirint[l][c] == FINISH) {
        trail->push_back(Vect2D{l,c});
        return 1;
    }

    if (validPos(labirint, Vect2D{l, c})) {
        labirint[l][c] = VISITED;
        trail->push_back(Vect2D{l, c});

    int found = path(labirint, l - 1, c, trail) ||
        path(labirint, l + 1, c, trail) ||
        path(labirint, l, c - 1, trail) ||
        path(labirint, l, c + 1, trail);

    if (!found) {
        trail->pop_back();
        labirint[l][c] = EMPTY;
    }
        return found;
    }
    return 0;
}

