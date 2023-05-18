#include "Span.hpp"

int main()
{
    Span c(967294);
    c.fillSpan(967294);
    std::cout << c.longestSpan() << std::endl;
    std::cout << c.shortestSpan() << std::endl;
}

// int main()
// {
//     Span sp = Span(5);

//     sp.addNumber(6);
//     sp.addNumber(3);
//     sp.addNumber(17);
//     sp.addNumber(9);
//     sp.addNumber(11);
//     std::cout << sp.shortestSpan() << std::endl;
//     std::cout << sp.longestSpan() << std::endl;
//     return 0;
// }