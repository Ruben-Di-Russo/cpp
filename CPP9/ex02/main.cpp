#include <iostream>
#include <vector>
#include <deque>
#include "Vector.hpp"
#include "Deque.hpp"



int main(int argc, char **argv) {
    if (argc != 2)
    {
        std::cout << "Error 1" << std::endl;
        return 1;
    }

    int i = 0;
    std::vector<int> array;
    std::deque<int> myDeque;
    while(argv[1][i])
    {
        if (argv[1][i] == 32)
        {
            i++;
            continue;
        }
        array.push_back(argv[1][i] - 48);
        myDeque.push_back(argv[1][i] - 48);
        i++;
    }
    std::cout << std::endl;
    i = 0;
    std::cout << "Array non ordinato: ";
    while(array[i])
    {
        std::cout << array[i] << " ";
        i++;
    }
    std::cout << std::endl;

    // Ordina l'array utilizzando merge-insertion sort
    std::chrono::high_resolution_clock::time_point startTime = std::chrono::high_resolution_clock::now();
    std::vector<int> sortedArray = mergeInsertionSort(array);
    std::chrono::high_resolution_clock::time_point endTime = std::chrono::high_resolution_clock::now();
    std::chrono::microseconds duration = std::chrono::duration_cast<std::chrono::microseconds>(endTime - startTime);

    std::chrono::high_resolution_clock::time_point startTime2 = std::chrono::high_resolution_clock::now();
    std::deque<int> sortedDeque = mergeInsertionSort2(myDeque);
    std::chrono::high_resolution_clock::time_point endTime2 = std::chrono::high_resolution_clock::now();
    std::chrono::microseconds duration2 = std::chrono::duration_cast<std::chrono::microseconds>(endTime2 - startTime2);
    
    std::cout << "Array ordinato: ";
    i = 0;
    while(array[i])
    {
        std::cout << array[i] << " ";
        i++;
    }
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "Conteiner = Vector, " << "Tempo impiegato: " << duration.count() << " microsecondi" << std::endl;
    std::cout << "Conteiner = Deque, " << "Tempo impiegato: " << duration2.count() << " microsecondi" << std::endl;


    return 0;


}