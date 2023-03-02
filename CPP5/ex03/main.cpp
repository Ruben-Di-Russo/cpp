#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"
#include "Bureaucrat.hpp"

int main(void)
{
    Bureaucrat *meta = new Bureaucrat("ruben", 1);
    Intern *beta = new Intern();
    Form *form = beta->makeForm("robotomy request", "simo");
    try{
       form->beSigned(*meta);
       meta->signForm(*form);
       meta->executeForm(*form);
    } catch (Form::GradeTooLowException &e) {
        std::cout<<e.what()<<std::endl;
    }
    return(0);
}