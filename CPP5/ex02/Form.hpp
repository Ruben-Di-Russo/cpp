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
    protected:
        std::string type;
        
    public:
        Form();
        Form( const std::string& name, int grade, const int exe);

        bool getsign();
        void beSigned(Bureaucrat x);
        std::string getname();
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
#endif