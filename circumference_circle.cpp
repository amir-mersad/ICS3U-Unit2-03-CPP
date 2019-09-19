// Copyright (c) 2019 Amirmahdi Mersad All rights reserved
//
// Created by Amir Mersad
// Created on September 2019
// This program calculates circumference of a circle
//     with user input


#include <iostream>

int main() {
    // this function calculates the circumference of a circle
    const double TAU = 6.28;
    int radius;
    double circumference;

    // input
    std::cout << "Enter radius of circle (mm): " << std::endl;
    std::cin >> radius;

    // process
    circumference = TAU * radius;

    // output
    std::cout << "" << std::endl;
    std::cout << "circumference is " << circumference << "mm" << std::endl;
}
