#ifndef ITER_HPP
#define ITER_HPP

#include <string.h>
#include <iostream>

template <typename T> void iter(T *a, size_t size, void (*f)(T &))
{
    for (size_t i = 0; i < size; i++)
    {
        f(a[i]);
    }
}

template <typename T> void print(T &a)
{
    std::cout << a << std::endl;
}

#endif