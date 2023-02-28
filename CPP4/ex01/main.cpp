#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "Brain.hpp"

int main()
{
    Animal *obj[10];
    for(int i = 0; i < 10 ; i++)
    {
        if(i < 5)
            obj[i] = new Cat();
        else
            obj[i] = new Dog();
    }
    for(int j = 0; j < 10 ; j++)
    {
        delete obj[j];
    }
    return (0);
}