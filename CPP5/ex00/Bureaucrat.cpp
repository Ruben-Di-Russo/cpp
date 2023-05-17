#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout << "Bureaucrat costructor called" << std::endl;
}

Bureaucrat::Bureaucrat( const std::string& name, int grade ) : name(name), grade(grade)
{
    if(grade > 150)
    {
        throw Bureaucrat::GradeTooLowException();
    }
    else if(grade < 1)
    {
        throw Bureaucrat::GradeTooHighException();
    }
    std::cout << "Bureaucrat " << " constructor called" << std::endl;
}

void Bureaucrat::increment()
{
    this->grade--;
    if(this->grade < 1)
        throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrement()
{
    this->grade++;
    if(this->grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

int Bureaucrat::getgrade() const
{
    return(this->grade);
}

std::string Bureaucrat::getname() const
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

std::ostream & operator<<(std::ostream &stream, const Bureaucrat &object)
{
	stream << "bureaucrat: " << object.getname() << ", " << object.getgrade() << std::endl;
	return stream;
}

Bureaucrat:: ~Bureaucrat()
{
   std::cout << "Bureaucrat Destrutor called" << std::endl;
}