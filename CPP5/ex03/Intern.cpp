#include "Intern.hpp"

Intern::Intern()
{
    return;
}

Form *Intern::makeForm(std::string form, std::string target)
{
    std::string commands[4] = {"robotomy request", "presidential pardon request", "shrubbery creation request"};
    int index = 10;
    
    for (int i = 0; i < 3; i++)
    {
        if (form == commands[i])
        {
            index = i;
            break;
        }
    }
    switch (index)
    {
        case 0:
            std::cout << "Intern creates " << form << std::endl;
            return(new RRF(target));
        case 1:
            std::cout << "Intern creates " << form << std::endl;
            return(new PPF(target));
        case 2:
            std::cout << "Intern creates " << form << std::endl;
            return(new PPF(target));
        default:
            std::cout << "Intern" << form << " don't exist"<< std::endl;
            return(nullptr);
    }
}

Intern::~Intern()
{
    return;
}