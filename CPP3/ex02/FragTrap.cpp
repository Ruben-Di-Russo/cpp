#include "FragTrap.hpp"


FragTrap::FragTrap()
{

    this->name = "NoName";
    this->atk = 30;
    this->eng = 100;
    this->hp = 100;

    this->setAtk(this->atk);
    this->setEng(this->eng);
    this->setHp(this->hp);
    this->setName(this->name);

    std::cout << "FragTrap: " << this->name << " constructor called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap: " << this->name << " say : hey give me a five " << std::endl;
}

FragTrap::FragTrap(std::string name)
{

    this->name = name;
    this->atk = 20;
    this->eng = 50;
    this->hp = 100;

    this->setAtk(this->atk);
    this->setEng(this->eng);
    this->setHp(this->hp);
    this->setName(this->name);

    std::cout << "FragTrap: " << this->name << " constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy)
{
    *this = copy;
}

FragTrap &FragTrap::operator=( const FragTrap &stats )
{
    std::cout << "FragTrap operator assignment called" << std::endl;
    this->name = stats.name;
    this->atk = stats.atk;
    this->eng = stats.eng;
    this->hp = stats.hp;
    return (*this);
}

FragTrap:: ~FragTrap()
{
    std::cout << "FragTrap: " << this->name << " deconstructor called" << std::endl;

}

void    FragTrap::attack(const std::string &target)
{
    if(this->eng <= 0)
    {
        std::cout << "FragTrap: " << this->name << " is out of energy" << std::endl;
        return ;
    }
    if(this->hp <= 0)
    {
        std::cout << "FragTrap: " << this->name << " is dead" << std::endl;
        return ;
    }   
    std::cout << "FragTrap: " << this->name << " attacks " << target << ", causing " << this->atk << " points of damage!" <<std::endl;
    this->eng--;
}
