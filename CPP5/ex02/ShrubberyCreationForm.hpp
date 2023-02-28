#ifndef SCF_HPP
#define SCF_HPP

#include <string.h>
#include <iostream>
#include "Form.hpp"

class SCF : public Form
{
    private:
        
    public:

        SCF();
        SCF &operator=(const SCF &stats);
        SCF(const SCF &copy);
        ~SCF();

};

#endif