#include <iostream>
#include "Labirint.h"

#define L 6
#define C 9

int main() {
    char** labirint;
    initLabirint(labirint, L, C);
    createLabirint(labirint, L, C);

    std::vector<Vect2D> trail;
    path(labirint, 3, 4, &trail);

    printLabirint(labirint, L, C);

    for(auto it : trail)
        std::cout << "(" << it.x << " ," << it.y << ")\n";

    return 0;
}
