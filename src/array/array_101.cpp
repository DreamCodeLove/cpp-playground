/*
 * File:    array_101.cpp
 * Author:  Ashish Rai
 * Date:    10 February 2026
 *
 * Program to demonstrate the basics of the Arrays data structure.
 *
 * This code is UNLICENSED (public domain).
 * See UNLICENSE file for details.
 */

#include <iomanip>  // setw()
#include <iostream>
#include <string>

int main() {
    // Array Decleration
    // std::string car[5];
    // Initialisation via indexing operator
    // car[0] = "BMW";

    // Aggregate Initialisation
    std::string car[5] = {"BMW", "Mercedes", "Toyota", "Volvo", "Jaguar"};
    int car_sales[5];

    // Access the elements
    car_sales[0] = 5;
    car_sales[1] = 9;
    car_sales[2] = 29;
    car_sales[3] = 17;
    car_sales[4] = 6;

    // Modify the element
    car[3] = "Ford";
    car[4] = "Ferrari";

    std::cout << "––– Getting started with Arrays ---" << std::endl;

    for (int i = 0; i < 5; i++) {
        std::cout << std::setw(8) << car[i] << " – " << car_sales[i]
                  << std::endl;
    }

    std::cout << "\n\nCongratulation! You got started with the Arrays."
              << std::endl;
    std::cout << "--------------------" << std::endl;

    return 0;
}
