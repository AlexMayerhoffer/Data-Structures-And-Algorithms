//
// Created by ottoa on 6/8/2022.
//

#include "Stiva.h"

void init(Stiva& s)
{
    s.vf = -1;
}

void push(Stiva& s, int val)
{
    if (!full(s))
    {
        s.vec[++s.vf] = val;
    }
    else
    {
        std::cout << "Stiva plina!\n";
    }
}

bool empty(Stiva s)
{
    if (s.vf == -1)
        return true;
    else
        return false;
}

bool full(Stiva s)
{
    if (s.vf == max-1)
        return true;
    else
        return false;
}

int pop(Stiva& s)
{
    int a = 0;
    if (!empty(s))
    {
        a = s.vec[s.vf];
        s.vf--;
    }
    else
    {
        std::cout << "Stiva goala!\n";
        return 0;
    }
    return a;
}

void top(Stiva s)
{
    int a = 0;
    if (!empty(s))
    {
        a = s.vec[s.vf];
        std::cout<<a;
    }
    else
    {
        std::cout << "Stiva goala!\n";
    }
}

