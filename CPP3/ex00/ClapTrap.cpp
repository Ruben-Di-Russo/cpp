#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    this->name = "NoName";
    this->atk = 0;
    this->eng = 10;
    this->hp = 10;
    std::cout << "ClapTrap: " << this->name << " constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    this->name = name;
    this->atk = 0;
    this->eng = 10;
    this->hp = 10;
    std::cout << "ClapTrap: " << this->name << " constructor called" << std::endl;
}
ClapTrap:: ~ClapTrap()
{
    std::cout << "ClapTrap: " << this->name << " deconstructor called" << std::endl;

}

ClapTrap &ClapTrap::operator=( const ClapTrap &stats )
{
    std::cout << "ClapTrap operator assignment called" << std::endl;
    this->name = stats.name;
    this->atk = stats.atk;
    this->eng = stats.eng;
    this->hp = stats.hp;
    return (*this);
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
    *this = copy;
}
void    ClapTrap::attack(const std::string &target)
{
    if(this->eng <= 0)
    {
        std::cout << "ClapTrap: " << this->name << " is out of energy" << std::endl;
        return ;
    }
    if(this->hp <= 0)
    {
        std::cout << "ClapTrap: " << this->name << " is dead" << std::endl;
        return ;
    }   
    std::cout << "ClapTrap: " << this->name << " attacks " << target << ", causing " << this->atk << " points of damage!" <<std::endl;
    this->eng--;
}


void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap: " << this->name << "take " << amount << " points of damage!" << std::endl;
    this->hp -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(this->eng <= 0)
    {
        std::cout << "ClapTrap: " << this->name << " is out of energy" << std::endl;
        return ;
    }
    if(this->hp <= 0)
    {
        std::cout << "ClapTrap: " << this->name << " is dead" << std::endl;
        return ;
    }      
    std::cout << "ClapTrap: " << this->name << " repair " << amount << " points of health!" << std::endl;
    this->hp += amount;

}
