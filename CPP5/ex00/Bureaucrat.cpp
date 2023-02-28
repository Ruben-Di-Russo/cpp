#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout << "Bureaucrat costructor called" << std::endl;
}

Bureaucrat::Bureaucrat( const std::string& name, int grade ) : name(name), grade(grade)
{
    if(grade > 150)
    {
        throw Bureaucrat::GradeTooHighException();
    }
    else if(grade < 1)
    {
        throw Bureaucrat::GradeTooLowException();
    }
    std::cout << "Bureaucrat " << " constructor called" << std::endl;
}

void Bureaucrat::increment()
{
    this->grade--;
}

void Bureaucrat::decrement()
{
    this->grade++;
}

int Bureaucrat::getgrade()
{
    return(this->grade);
}

std::string Bureaucrat::getname()
{
    return(this->name);
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
    *this = copy;
}

Bureaucrat &Bureaucrat::operator=( const Bureaucrat &stats )
{
    this->grade = stats.grade;
    return (*this);
}

Bureaucrat:: ~Bureaucrat()
{
   std::cout << "Bureaucrat Destrutor called" << std::endl;
}