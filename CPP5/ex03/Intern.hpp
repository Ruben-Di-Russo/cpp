#ifndef INTERN_HPP
#define INTERN_HPP

#include <string.h>
#include <iostream>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Bureaucrat;

class Intern {
    public:

        Intern();
        Intern &operator=(const Intern &stats);
        Intern(const Intern &copy);
        Form *makeForm(std::string form, std::string target);
        ~Intern();
};

#endif