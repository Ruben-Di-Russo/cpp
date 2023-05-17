#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string.h>
#include <iostream>

class WrongAnimal
{
    protected:
        std::string type;
        
    public:
        std::string     getType(void) const;
        void            makeSound(void) const;
        WrongAnimal();
        WrongAnimal(std::string name);
        WrongAnimal    &operator=(const WrongAnimal &stats);
        WrongAnimal(const WrongAnimal &copy);
        virtual ~WrongAnimal();

};

#endif