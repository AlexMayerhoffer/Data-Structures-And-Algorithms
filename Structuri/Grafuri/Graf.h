//
// Created by ottoa on 6/8/2022.
//

#ifndef GRAFURI_GRAF_H
#define GRAFURI_GRAF_H

#include <iostream>
#include <list>
#include <stack>
#include <vector>

struct Graph {
    int** mat_ad;
    int noduri;
    int muchii;
};

void citireGraph(Graph* g);
void DFS(Graph* g, std::list<int>& L, int* M, int i);

#endif //GRAFURI_GRAF_H
