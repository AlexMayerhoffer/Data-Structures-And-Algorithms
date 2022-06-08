#include "Coada.h"

int main()
{
    Coada q;
    init(q);
    push(q, 5);
    push(q, 1);
    push(q, 2);
    push(q, 14);
    push(q, 20);
    push(q, 99);
    push(q, 8);
    push(q, 14);
    push(q, 22);

    pop(q);
    pop(q);
    pop(q);
    pop(q);
    pop(q);
    pop(q);
    pop(q);
    pop(q);

    return 0;

}