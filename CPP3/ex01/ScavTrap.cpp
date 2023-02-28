#include "ScavTrap.hpp"


ScavTrap::ScavTrap()
{

    this->name = "NoName";
    this->atk = 20;
    this->eng = 50;
    this->hp = 100;

    this->setAtk(this->atk);
    this->setEng(this->eng);
    this->setHp(this->hp);
    this->setName(this->name);

    std::cout << "ScavTrap: " << this->name << " constructor called" << std::endl;
}

void ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap: " << this->name << " is now in Gate keeper mode" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{

    this->name = name;
    this->atk = 20;
    this->eng = 50;
    this->hp = 100;

    this->setAtk(this->atk);
    this->setEng(this->eng);
    this->setHp(this->hp);
    this->setName(this->name);

    std::cout << "ScavTrap: " << this->name << " constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
    *this = copy;
}

void    ScavTrap::attack(const std::string &target)
{
    if(this->eng <= 0)
    {
        std::cout << "ScavTrap: " << this->name << " is out of energy" << std::endl;
        return ;
    }
    if(this->hp <= 0)
    {
        std::cout << "ScavTrap: " << this->name << " is dead" << std::endl;
        return ;
    }   
    std::cout << "ScavTrap: " << this->name << " attacks " << target << ", causing " << this->atk << " points of damage!" <<std::endl;
    this->eng--;
}

ScavTrap &ScavTrap::operator=( const ScavTrap &stats )
{
    std::cout << "ScavTrap operator assignment called" << std::endl;
    this->name = stats.name;
    this->atk = stats.atk;
    this->eng = stats.eng;
    this->hp = stats.hp;
    return (*this);
}

ScavTrap:: ~ScavTrap()
{
    std::cout << "ScavTrap: " << this->name << " deconstructor called" << std::endl;

}