/*
 * === Hello Tester ===
 *
 * File:    hello_tester.cpp
 * Author:  Ashish Rai
 * Date:    10 Februrary 2026
 *
 * Description:
 *      Program to check whether the compiler is working properly.
 *
 * Compile and Execute (Manual):
 *      mkdir -p ./build && \
 *      clang++ -std=c++20 ./src/tester.cpp -o ./build/tester && \
 *      ./build/tester
 *
 * Make (Recommended):
 *      make run file=hello_tester.cpp
 *      make clean
 *
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
