#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <string.h>
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    private:
    public:
        void highFivesGuys(void);
        void attack(const std::string &target);
        FragTrap();
        FragTrap(std::string name);
        FragTrap    &operator=(const FragTrap &stats);
        FragTrap(const FragTrap &copy);
        ~FragTrap();
};

#endif