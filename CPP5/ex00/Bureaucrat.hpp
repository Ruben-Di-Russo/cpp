#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string.h>
#include <iostream>

class Bureaucrat
{
    private:
    const std::string name;
    int grade;
    protected:
        std::string type;
        
    public:
        Bureaucrat();
        Bureaucrat( const std::string& name, int grade);
        Bureaucrat    &operator=(const Bureaucrat &stats);
        Bureaucrat(const Bureaucrat &copy);
        void increment();
        void decrement();
        int getgrade();
        std::string getname();
        ~Bureaucrat();
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