#include "Base.hpp"

Base* generate(void)
{
    srand(time(0));
    int random = rand() % 3+1;
    if (random == 1)
        return (new A);
    else if (random == 2)
        return (new B);
    else 
        return (new C);
    
}

void identify(Base* p)
{
    if(dynamic_cast< A* >(p))
        std::cout << "A" << std::endl;
    else if(dynamic_cast< B* >(p))
        std::cout << "B" << std::endl;
    else if(dynamic_cast< C* >(p))
        std::cout << "C" << std::endl;
}

void identify(Base& p)
{
    try {
        A& a = dynamic_cast< A& >( p );
        std::cout << "A" << std::endl;
        (void)a;
    } catch(const std::exception& e) {}
    try {
        B& b = dynamic_cast< B& >( p );
        std::cout << "B" << std::endl;
        (void)b;
    } catch( const std::exception& e ) {}
    try {
        C& c = dynamic_cast< C& >( p );
        std::cout << "C" << std::endl;
        (void)c;
    } catch( const std::exception& e ) {}
}