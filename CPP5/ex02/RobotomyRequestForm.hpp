#ifndef RRF_HPP
#define RRF_HPP

#include <string.h>
#include <iostream>
#include "Form.hpp"

class RRF : public Form
{
    private:
        
    public:

        RRF();
        RRF(std::string target);
        RRF &operator=(const RRF &stats);
        RRF(const RRF &copy);
        ~RRF();

};

#endif