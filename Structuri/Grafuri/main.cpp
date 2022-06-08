#include <iostream>
#include "Graf.h"

int main() {
    Graph* g = new Graph;
    citireGraph(g);

    std::list<int> L;
    int* M = new int[g->noduri];
    for(int i=0;i<g->noduri;i++)
        M[i] = 0;
    DFS(g,L,M,0);

    for(auto it: L)
        std::cout<<it <<" ";
    return 0;
}
