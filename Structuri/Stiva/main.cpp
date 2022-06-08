#include "Stiva.h"

int main()
{
    Stiva st;
    init(st);
    push(st, 1);
    push(st, 3);
    push(st, 4);
    push(st, 12);
    push(st, 19);
    push(st, 87);

    int a=pop(st);
    int b=pop(st);

    std::cout << a << " " << b;

    return 0;
}