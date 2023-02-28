#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap obj1("simo");

    ScavTrap obj2;
    obj2 = obj1;
    obj2.attack("Alex");
    obj2.guardGate();

}