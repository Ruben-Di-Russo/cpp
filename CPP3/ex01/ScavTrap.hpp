#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <string.h>
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    private:
        std::string name;
        unsigned int hp;
        unsigned int atk;
        unsigned int eng;
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