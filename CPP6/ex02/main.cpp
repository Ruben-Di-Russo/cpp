#include "Base.hpp"

int main ()
{
    Base* c ;
    c = generate();
    sleep(1);
    Base* b;
    b = generate();
    identify(c);
    identify(*b);

    delete c;
    delete b;
}