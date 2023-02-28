#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap obj("luca");
    ClapTrap obj1;
    obj1 = obj;
   obj1.attack("giovanni");
   obj1.attack("giovanni");
   obj1.attack("giovanni");
   obj1.attack("giovanni");
   obj1.attack("giovanni");
   obj1.attack("giovanni");
   obj1.attack("giovanni");
   obj1.attack("giovanni");
   obj1.beRepaired(1);
   obj1.takeDamage(11);
   obj1.attack("kaka");
    return (0);
}