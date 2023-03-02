#ifndef SCF_HPP
#define SCF_HPP

#include <string.h>
#include <iostream>
#include <fstream>
#include "Form.hpp"

class Bureaucrat;

class SCF : public Form
{
    private:
        std::string target;
    public:

        SCF(std::string target);
        SCF &operator=(const SCF &stats);
        SCF(const SCF &copy);
        void execute(Bureaucrat const & executor) const ;
        ~SCF();
};

#endif