#include "Form.hpp"

#include "Bureaucrat.hpp"

int main(void)
{
    Bureaucrat *meta = new Bureaucrat("ruben", 100);
    try {
        Form *beta = new Form("ruben_form", 1, 10);
        try{
            beta->beSigned(*meta);
            meta->signForm(*beta);
        } catch (Form::GradeTooLowException &e) {
            std::cout<<e.what()<<std::endl;
            meta->signForm(*beta);
        }
    } catch (Form::GradeTooHighException &e) {
        std::cout<<e.what()<<std::endl;
    }
    return(0);
}