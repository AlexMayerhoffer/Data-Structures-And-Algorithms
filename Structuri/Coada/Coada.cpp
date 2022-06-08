//
// Created by ottoa on 6/8/2022.
//
#include "Coada.h"

void init(Coada& q)
{
    q.cap = q.coada = 0;
}

bool full(Coada q)
{
    if (q.cap == 1 && q.coada == max)
        return true;
    else
        return false;
}

bool empty(Coada q)
{
    if (q.cap == q.coada)
        return true;
    else
        return false;
}

void push(Coada& q, int val)
{
    if (full(q) == 0)
    {

        q.vec[q.coada] = val;
        q.coada++;
    }
    else
    {
        std::cout << "Coada este plina!\n";
    }

}

void pop(Coada& q)
{
    if (empty(q) == 0)
    {
        std::cout << q.vec[q.cap] << '\n';
        q.cap++;
    }
    else
    {
        std::cout << "Coada goala!\n";
    }
}
