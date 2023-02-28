#ifndef CAT_HPP
#define CAT_HPP

#include <string.h>
#include <iostream>
#include "Animal.hpp"

class Cat : public Animal
{

    public:

        Cat();
        Cat &operator=(const Cat &stats);
        void            makeSound(void) const;
        Cat(const Cat &copy);
        ~Cat();

};

#endif