#ifndef CONVERTER_HPP
#define CONVERTER_HPP

#include <string.h>
#include <iostream>
#include <cctype>
#include <stdlib.h>  
#include <iomanip>

class Converter
{
    private:
        char c;
        int n;
        float f;
        double d;
        std::string type;
    public:
        Converter();
        Converter(std::string name);
        Converter    &operator=(const Converter &stats);
        Converter(const Converter &copy);
        ~Converter();
        
        bool isChar(std::string str);
        bool isInt(std::string n);
        bool isFloat(std::string f);
        bool isDouble(std::string d);
        bool infinite(std::string str);

        void Check(std::string str);
        void ConvC(char c);
        void ConvI(int n);
        void ConvF(float f);
        void ConvD(double d);




};

#endif