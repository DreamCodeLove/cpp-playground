/*
 * File:    array_avg.cpp
 * Author:  Ashish Rai
 * Date:    13 February 2026
 *
 * Program to calculate the average of an Array of Integers.
 *
 * This code is UNLICENSED (public domain).
 * See UNLICENSE file for details.
 */

#include <iostream>

int main() {
  int ages[] = {34, 94, 12, 19, 47, 02, 83, 10, 57};
  int age_sum = 0;
  int age_count = sizeof(ages) / sizeof(ages[0]);
  float age_avg;

  // Method–1 : sum of ages
  // for (int i = 0; i < age_count; i++)
    // age_sum = age_sum + ages[i];

  // Method–2 : sum of ages
  for (int age : ages)
    age_sum += age;

  // Average age
  age_avg = age_sum / age_count;

  // Output
  std::cout << "Sum of Ages: " << age_sum << std::endl;
  std::cout << "Average Age: " << age_avg << std::endl;

  return 0;
}
