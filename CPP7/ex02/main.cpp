#include "Array.hpp"
#include <iostream>

#define MAX_VAL 750

void leaks() {
	system("leaks program");
}

int main() {
	Array<int> arr(10);
	for (int i = 0; i < (int) arr.size(); i++) {
        std::cout << i << " -> ";
		arr[i] = i + 1;
		std::cout << arr[i] << '\n';
	}
	// try {
	// 	// std::cout << arr[10] << '\n';
	// 	// std::cout << arr[10] << '\n';
	// } catch (const std::exception& e) {
	// 	std::cout << e.what() << '\n';
	// }
	// atexit(leaks);
}
