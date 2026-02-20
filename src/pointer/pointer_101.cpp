/*
 * File: pointer_101.cpp
 * Author: Ashish Rai <ashishrai@duck.com>
 * Date: 21/02/2026
 *
 * Introduce the concept of pointers in C++. Demonstrate the basic use of
 * pointers and syntax.
 *
 * This code is UNLICENSED (public domain).
 * See UNLICENSE file for details.
 */

#include <iostream>
#include <string>

int main() {
  std::string food = "Pizza";
  std::string* ptr_food = &food;

  std::cout << food << std::endl;
  std::cout << "Address of " << food << " : " << ptr_food << std::endl;

  return 0;
}

