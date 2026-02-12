/*
 * File:    array_omit.cpp
 * Author:  Ashish Rai
 * Date:    12 February 2026
 *
 * Demonstrate the array with implicit size decleration and conditions 
 * required to implement it.
 */

#include <iostream>
#include <string>

int main() {
  // Explicit array size is optional
  std::string cars[] = {"Volvo", "BMW", "Mercedes", "Jaguar"};

  // Explicit array size is mandatory
  // int sales[];

  std::cout << "––– Omit Array Size –––" << std::endl;

  for (std::string car : cars) {
    std::cout << " • " << car << std::endl;
  }

  std::cout << "\n\nCongratulations! You declared an array with explicit "
            << "size." << std::endl;

  return 0;
}
