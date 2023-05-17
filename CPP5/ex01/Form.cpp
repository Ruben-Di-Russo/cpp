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

std::string Form::getname() const
{
    return(this->name);
}

int Form::getgrade() const
{
    return(this->grade);
}

int Form::getexe() const
{
    return(this->exe);
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

std::ostream & operator<<(std::ostream &stream, const Form &object)
{
	stream << "form: " << object.getname() << ", grade: " << object.getgrade() << ", exe: " << object.getexe() << ", signed: " << object.getsign() << std::endl;
	return stream;
}

Form:: ~Form()
{
   return;
}