#include <vector>
#include "easyfind.hpp"

int main()
{
    std::vector <int> cont;
    cont.push_back(0);
    cont.push_back(1);
    cont.push_back(2);
    cont.push_back(3);
    cont.push_back(4);
    cont.push_back(5);
    easyfind(cont, 9);
}
