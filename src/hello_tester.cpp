/*
 * File:    hello_tester.cpp
 * Author:  Ashish Rai
 * Date:    10 Februrary 2026
 *
 * Program to test whether the compiler is working properly.
 */

#include <iostream>
#include <string>
#include <vector>

int main() {
    std::vector<std::string> words = {"Hello,", "tester!"};

    std::cout << "--- C++ Compiler Test ---" << std::endl;

    // Using a standard range-based for loop (Supported since C++11)
    for (const auto& word : words) {
        std::cout << word << " ";
    }

    std::cout << "\n\nSuccess! Your C++ compiler is working." << std::endl;
    std::cout << "--------------------" << std::endl;

    return 0;
}
