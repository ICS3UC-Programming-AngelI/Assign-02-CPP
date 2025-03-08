// Copyrights (c) 2025 Angel All rights reserved.
// Created by: Angel
// Date: March 03,2025
// This program asks the user for the length P,
// length Q for the perimeter and the side A and
// side B for the area of a kite. It the calculates
// the area and perimeter of a kite.


#include <cmath>
#include <iostream>


int main() {
    // declare the variable
    double P, Q;
    float sideA;//declare sideA
    float sideB;//declare sideB
    double area;//declare variable for area
    double perimeter;//declare variable for perimeter


    // Input lengths of the diagonals and sides
    std::cout << "Enter the length of diagonal P: ";
    std::cin >> P;// read the value for P
    std::cout << "Enter the length of diagonal Q: ";
    std::cin >> Q;
    std::cout << "Enter the length of sideA (first pair of equal sides): ";
    std::cin >> sideA;
    std::cout << "Enter the length of sideB (second pair of equal sides): ";
    std::cin >> sideB;


    // Calculating the area and perimeter
    area = P * Q / 2;
    perimeter = 2 * (sideA + sideB);


    std::cout << "The area of the kite is: " << area << " cm^2" << std::endl;
    std::cout << "The perimeter of the kite is: " << perimeter << " mm" << std::endl;