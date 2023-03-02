#ifndef RRF_HPP
#define RRF_HPP

#include <string.h>
#include <iostream>
#include "Form.hpp"

class Bureaucrat;

class RRF : public Form
{
    private:
        std::string target;
    public:

        RRF(std::string target);
        RRF &operator=(const RRF &stats);
        RRF(const RRF &copy);
        void execute(Bureaucrat const & executor) const ;
        ~RRF();
};

#endif