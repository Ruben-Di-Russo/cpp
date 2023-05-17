#ifndef FORM_HPP
#define FORM_HPP

#include <string.h>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
    const std::string name;
    bool sign;
    const int grade;
    const int exe;

    public:
        Form();
        Form( const std::string& name, int grade, const int exe);

        std::string getname() const;
        bool getsign() const;
        int getgrade() const;
        int getexe() const;
        void beSigned(Bureaucrat x);
        ~Form();
    class GradeTooHighException : public std::exception
    {
    public:
        virtual const char* what() const throw() 
        { 
            return "Grade too high"; 
        }
    };
    class GradeTooLowException : public std::exception
    {
    public:
        virtual const char* what() const throw() 
        { 
            return "Grade too low"; 
        }
    };
}; 
std::ostream & operator<<(std::ostream &stream, const Form &object);
#endif