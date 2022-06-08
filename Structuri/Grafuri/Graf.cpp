//
// Created by ottoa on 6/8/2022.
//

#include "Graf.h"

void citireGraph(Graph *g) {
    std::cout << "Nr noduri: ";
    std::cin >> g->noduri;
    std::cout << "Nr muchii: ";
    std::cin >> g->muchii;
    std::cout << "Citeste muchii (x y): \n";
    int x, y;
    g->mat_ad = new int *[g->noduri];
    for (int i = 0; i < g->noduri; i++)
    {
        g->mat_ad[i] = new int[g->noduri];
        for(int j=0;j<g->noduri;j++)
            g->mat_ad[i][j] = 0;
    }
    for(int i=0;i<g->muchii;i++)
    {
        std::cin >> x;
        std::cin >> y;
        g->mat_ad[x][y] = g->mat_ad[y][x] = 1;
    }
}

void DFS(Graph *g, std::list<int> &L, int* M, int i) {
    std::stack<int> S; //AICI TREBUIE STACK SCRIS DE NOI, NU DIN STD
    S.push(i);
    while (!S.empty())
    {
        int j = S.top();
        S.pop();

        if(M[j] == 0)
        {
            L.push_back(j);
            M[j] = 1;
            for(int k=0;k<g->noduri;k++)
            {
                if (g->mat_ad[j][k] == 1)
                    S.push(k);
            }
        }
    }
}

