#include "Form.hpp"

Form::Form( const std::string& name, const int grade, const int exe) : name(name), grade(grade), exe(exe)
{
    this->sign = false;
    if(grade > 150)
    {
        throw Bureaucrat::GradeTooLowException();
    }
    else if(grade < 1)
    {
        throw Bureaucrat::GradeTooHighException();
    }
}

bool Form::getsign()
{
    return(this->sign);
}

std::string Form::getname()
{
    return(this->name);
}

void Form::beSigned(Bureaucrat x)
{
    if(this->grade < x.getgrade())
    {
        throw Form::GradeTooLowException();
    }
    else 
        this->sign = true;
}

Form:: ~Form()
{
   return;
}