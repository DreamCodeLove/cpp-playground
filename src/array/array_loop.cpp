/*
 * File:    array_loop.cpp
 * Author:  Ashish Rai
 * Date:    11 February 2026
 *
 * Demonstrate the use of loops to traverse the array.
 *
 * This code is UNLICENSED (public domain).
 * See UNLICENSE file for details.
 */

#include <iostream>
#include <string>

int main() {
    // Create an array of strings
    std::string cars[] = {"BMW", "Porshe", "Ferrari", "Mercedes"};

    std::cout << "––– Traverse the Array ---" << std::endl;

    // Traverse through the array using the for loop
    for (int i = 0; i < 4; i++) {
        std::cout << " • " << cars[i];
    }

    std::cout << "\n" << std::endl;

    // Traverse through the array using the for-each loop
    for (std::string car : cars) {
        std::cout << " • " << car;
    }

    std::cout << "\n\nCongratulations! You can now traverse an array."
              << std::endl;

    return 0;
}
