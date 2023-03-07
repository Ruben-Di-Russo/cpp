#include "Converter.hpp"

int main(int argc, char **argv)
{
    if(argc == 2)
    {
        Converter conv;
        conv.Check(argv[1]);
    }
    else 
    {
        std::cout << "Error !" << std::endl;
    }
}