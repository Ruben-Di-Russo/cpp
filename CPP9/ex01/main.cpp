#include <stack>
#include <iostream>

void opera(std::stack<int> &value, char op)
{
    int result;
    int primo = value.top();
    value.pop();
    int secondo = value.top();
    value.pop();
    if (op == '-')
        result = secondo - primo;
    else if (op == '+')
        result = primo + secondo;
    else if (op == '*')
        result = primo * secondo;
    else if (op == '/')
        result = secondo / primo;
    
    value.push(result);
}

bool isOperator(char op)
{
    if(op == '*' || op == '+' || op == '-' || op == '/')
        return true;
    else
        return false;
}

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Error 1" << std::endl;
        return 1;
    }
    int i = 0;
    int counter = 0;
    std::stack<int> stack;
    while (argv[1][i])
    {
        if (argv[1][i] == 32)
        {
            i++;
            continue;
        }
        else if (std::isdigit(argv[1][i]))
        {
            stack.push(argv[1][i] - 48);
            counter++;
            i++;
            continue;
        }
        else if (isOperator(argv[1][i]) && counter != 1)
        {
            opera(stack, argv[1][i]);
            counter--;
            i++;
            continue;
        }
        else
            std::cout << "Error 2" << std::endl;
            return 1;
    }
    if (counter == 1)
        std::cout << stack.top() << std::endl;
    else
    {
        std::cout << "Error 3" << std::endl;
        return 1;
    } 
    return 0;
}