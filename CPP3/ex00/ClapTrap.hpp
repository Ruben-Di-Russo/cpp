#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string.h>
#include <iostream>

class ClapTrap
{
    private:
        std::string name;
        unsigned int hp;
        unsigned int atk;
        unsigned int eng;
    public:
    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap    &operator=(const ClapTrap &stats);
    ClapTrap(const ClapTrap &copy);
    ~ClapTrap();

};

#endif