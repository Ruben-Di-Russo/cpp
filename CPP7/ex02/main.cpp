#include "Array.hpp"
#include <iostream>

#define MAX_VAL 750

void leaks() {
	system("leaks program");
}

int main() {
	// Array<int> arr(10);
	// for (int i = 0; i < (int) arr.size(); ++i) {
	// 	std::cout << arr[i] << " -> ";
	// 	arr[i] += i;
	// 	std::cout << arr[i] << '\n';
	// }
	// try {
	// 	std::cout << arr[10] << '\n';
	// } catch (const std::exception& e) {
	// 	std::cout << e.what() << '\n';
	// }
	// Array<std::string> arr2(10);
	// for (int i = 0; i < (int) arr2.size(); ++i) {
	// 	arr2[i] += "Hey!";
	// 	std::cout << arr2[i] << " -> ";
	// 	arr2[i] += " Hello World!";
	// 	std::cout << arr2[i] << '\n';
	// }
	// try {
	// 	std::cout << arr2[10] << '\n';
	// } catch (const std::exception& e) {
	// 	std::cout << e.what() << '\n';
	// }
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete[] mirror;
	atexit(leaks);
}
