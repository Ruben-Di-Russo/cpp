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

bool Form::getsign() const
{
    return(this->sign);
}

int Form::getexe(void) const
{
    return (this->exe);
}

int Form::getgrade(void) const
{
    return (this->grade);
}

std::string Form::getname() const
{
    return(this->name);
}

void Form::setsign()
{
    this->sign = true;
}

void Form::beSigned(Bureaucrat x)
{
    if(this->grade < x.getgrade())
        throw Form::GradeTooLowException();
    else 
        this->sign = true;
}

Form:: ~Form()
{
   return;
}