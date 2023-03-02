#ifndef PPF_HPP
#define PPF_HPP

#include <string.h>
#include <iostream>
#include "Form.hpp"

class Bureaucrat;

class PPF : public Form
{
    private:
        std::string target;
    public:

        PPF(std::string target);
        PPF &operator=(const PPF &stats);
        PPF(const PPF &copy);
        void execute(Bureaucrat const & executor) const ;
        ~PPF();
};

#endif