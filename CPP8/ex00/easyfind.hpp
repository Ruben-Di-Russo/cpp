#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <string.h>
#include <iostream>
#include <algorithm>


template <typename t_find> void easyfind(t_find a, int b)
{
    for(int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
        {
            std::find(3)
            std::cout << "occurence finded" << std::endl;
            return ;
        }
    }
    std::cout << "occurence don't finded" << std::endl;

}

#endif