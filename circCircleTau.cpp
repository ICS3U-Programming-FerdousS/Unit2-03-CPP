// Copyright (c) 2021 Ferdous Sediqi All rights reserved.
// Created by: Ferdous Sediqi
// Date: May 1, 2021
// This program asks the user for the radius and then
// displays the circumference using tau.


#include <iostream>


int main() {
  // declare constants
    const float Tau = 6.28;
  // declare variables
    float radius, circumference;
  // get the radius from the user
    std::cout << "Enter the radius (cm): ";
    std::cin >> radius;
  // calculate the circumference using tau
    circumference = Tau * radius;
  // display the circumference to the user
    std::cout << "\n";
    std::cout << "Circumference = " << circumference << " cm" << std::endl;
}
