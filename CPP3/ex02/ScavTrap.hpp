#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <string.h>
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    private:
    public:
        void guardGate(void);
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap    &operator=(const ScavTrap &stats);
        ScavTrap(const ScavTrap &copy);
        ~ScavTrap();
        void attack(const std::string &target);
};

#endif