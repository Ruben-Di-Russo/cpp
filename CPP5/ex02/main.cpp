#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

#include "Bureaucrat.hpp"

int main(void)
{
    Bureaucrat *meta = new Bureaucrat("ruben", 1);
    SCF *beta = new SCF("simo");
    try{
        beta->beSigned(*meta);
        meta->signForm(*beta);
        meta->executeForm(*beta);
    } catch (Form::GradeTooLowException &e) {
        std::cout<<e.what()<<std::endl;
    }
    return(0);
}