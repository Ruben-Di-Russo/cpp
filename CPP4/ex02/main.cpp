#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "Brain.hpp"

int main()
{
    Animal *obj = new Cat();
    delete obj;
    return (0);
}