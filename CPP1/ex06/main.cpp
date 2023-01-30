#include "Harl.hpp"

int main(int ac, char **av)
{
    int i;
    Harl k;

    i = 1;
    if(ac == 2)
    {
        k.complain(av[1]); 
    }
    else
    {
         std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
    return(0);
}