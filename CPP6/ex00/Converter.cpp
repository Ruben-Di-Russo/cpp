#include "Converter.hpp"

Converter::Converter()
{
    this->c = '\0';
    this->n = 0;
    this->f = 0.00f;
    this->d = 0.00;
}
void Converter::Check(std::string str)
{
    if(this->isChar(str))
        return ;
    else if(this->infinite(str))
        return ;
    else if (this->isInt(str))
        return ;
    else if (this->isFloat(str))
       return ;
    else if (this->isDouble(str))
       return ;
    else
    {
        std::cout << "input not valid" << std::endl;
        return ;
    }
}

bool Converter::infinite(std::string str)
{
    if (strcmp(str.c_str(), "nan") == 0 || strcmp(str.c_str(), "-inf") == 0 || strcmp(str.c_str(), "+inf") == 0)
    {
        std::cout << "char : impossible"<< std::endl;
        std::cout << "int : impossible" << std::endl;
        std::cout << "float : " << str << "f" << std::endl;
        std::cout << "double : " << str << std::endl; 
        return(true);
    }
    return(false);
}
    // char: impossible
    // int: impossible
    // double: nan
    // float: nanf

bool Converter::isChar(std::string str)
{
    if(str.length() == 1 && isalpha(str[0]))
    {
        this->c = str[0];
        this->ConvC(this->c);
        return (true);
    }
    else if (str.length() == 1 && ((str[0] > 32 && str[0] < 48) || (str[0] > 65)))
    {
        this->c = str[0];
        this->ConvC(this->c);
        return (true);
    }
    return (false);
}

bool Converter::isInt(std::string n)
{
    size_t x = 0;
    if(n[x] == '-' || n[x] == '+')
            x++;
    for(size_t i = x; i < n.length(); i++)
    {
        if(!isdigit(n[i]))
            return (false);
    }
    this->n = atoi (n.c_str());
    this->ConvI(this->n);
    return(true);
}

bool Converter::isFloat(std::string f)
{
    size_t x = 0;
    if(f[x] == '-' || f[x] == '+')
            x++;
    for(size_t i = x; i < f.length(); i++)
    {
        if(f[i] == '.' && x != 100)
        {
            x = 100;
            continue;
        }
        if(f.length() - 1 == i && f[i] == 'f')
            continue;
        if(!isdigit(f[i]))
            return (false);
    }
    this->f = atof (f.c_str());
    this->ConvF(this->f);
    return(true);
}

bool Converter::isDouble(std::string f)
{   
    size_t x = 0;
    if(f[x] == '-' || f[x] == '+')
            x++;
    for(size_t i = x; i < f.length(); i++)
    {
        if(f[i] == '.' && x != 100)
        {
            x = 100;
            continue;
        }
        if(!isdigit(f[i]))
            return (false);
    }
    this->f = atof (f.c_str());
    this->ConvD(this->f);
    return(true);
}

void Converter::ConvD(double d)
{
    this->d = d;
    this->n = this->d;
    this->f = static_cast<float>(this->d);
    if( (this->n >= 0 && this->n <= 31) || this->n == 127 || this->n < 0)
         std::cout << "char : non displayable" << std::endl;
    else
    {
        this->c = this->d;
        std::cout << "char : " << this->c << std::endl;
    }
    std::cout << "int : " << this->n << std::endl;
    std::cout << "double : "<<std::fixed << std::setprecision(1) << this->d << std::endl; 
    std::cout << "float : "<<std::fixed << std::setprecision(1) <<  this->f << "f" << std::endl;
}

void Converter::ConvF(float f)
{
    this->f = f;
    this->n = this->f;
    this->d = static_cast<double>(this->f);
    if( (this->n >= 0 && this->n <= 31) || this->n == 127 || this->n < 0)
         std::cout << "char : non displayable" << std::endl;
    else
    {
        this->c = this->d;
        std::cout << "char : " << this->c << std::endl;
    }
    std::cout << "int : " << this->n << std::endl;
    std::cout << "double : "<<std::fixed << std::setprecision(1) << this->d << std::endl; 
    std::cout << "float : "<<std::fixed << std::setprecision(1) <<  this->f << "f" << std::endl;
}

void Converter::ConvC(char c)
{
    this->c = c;
    this->n = this->c;
    this->d = static_cast<double>(this->n);
    this->f = static_cast<float>(this->n);
    std::cout << "char : " << this->c << std::endl;
    std::cout << "int : " << this->n << std::endl;
    std::cout << "double : "<<std::fixed << std::setprecision(1) << this->d << std::endl; 
    std::cout << "float : "<<std::fixed << std::setprecision(1) <<  this->f << "f" << std::endl; 
}

void Converter::ConvI(int n)
{
    this->n = n;
    this->d = static_cast<double>(this->n);
    this->f = static_cast<float>(this->n);
    if( (this->n >= 0 && this->n <= 31) || this->n == 127 || this->n < 0)
         std::cout << "char : non displayable" << std::endl;
    else
    {
        this->c = this->d;
        std::cout << "char : " << this->c << std::endl;
    }
    std::cout << "int : " << this->n << std::endl;
    std::cout << "double : "<<std::fixed << std::setprecision(1) << this->d << std::endl; 
    std::cout << "float : "<<std::fixed << std::setprecision(1) <<  this->f << "f" << std::endl; 
}

Converter::~Converter()
{
    return ;
}
