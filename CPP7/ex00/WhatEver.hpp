#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <string.h>
#include <iostream>

template <typename t_swap> void swap(t_swap &a, t_swap &b)
{
    t_swap tmp;
    tmp = a;
    a = b;
    b = tmp;

}

template <typename t_max> t_max max(t_max a, t_max b)
{
    if (a > b)
        return(a);
    else
        return(b);
}

template <typename t_min> t_min min(t_min a, t_min b)
{
    if (a < b)
        return(a);
    else
        return(b);
}

#endif