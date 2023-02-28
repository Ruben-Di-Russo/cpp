#ifndef PPF_HPP
#define PPF_HPP

#include <string.h>
#include <iostream>
#include "Form.hpp"

class PPF : public Form
{
    private:
        
    public:

        PPF();
        PPF &operator=(const PPF &stats);
        PPF(const PPF &copy);
        ~PPF();

};

#endif