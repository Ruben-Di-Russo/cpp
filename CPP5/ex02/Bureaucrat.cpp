#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
   return;
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
}

void Bureaucrat::executeForm(Form &form) const
{
    try
    {
        form.execute(*this);
        std::cout << form.getname() << " executed" << std::endl;
    }
    catch(const std::exception& e)
    {   
        std::cout<<e.what()<<std::endl;
        std::cout << form.getname() << " not executed" << std::endl;
    }
}


void Bureaucrat::signForm(Form &x) const
{
    try
    {
        x.getsign();
        std::cout << this->name <<  " signed " << x.getname() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout<<e.what()<<std::endl;
        std::cout << this->name <<  " couldn't signed " << x.getname() << "Grade too low" << std::endl;
    }
}
void Bureaucrat::increment()
{
    this->grade--;
}

void Bureaucrat::decrement()
{
    this->grade++;
}

int Bureaucrat::getgrade() const
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
   return;
}