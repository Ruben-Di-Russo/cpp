#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <string.h>
#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{

    public:

        WrongCat();
        WrongCat &operator=(const WrongCat &stats);
        WrongCat(const WrongCat &copy);
        ~WrongCat();

};

#endif