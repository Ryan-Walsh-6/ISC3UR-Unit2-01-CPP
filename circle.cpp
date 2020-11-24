// Copyright (c) 2020 Ryan Walsh All rights reserved
//
// Created by Ryan Walsh
// Created on November 22 2020
// This program calculates the area and perimeter of a circle

#include <iostream>
#include <cmath>

int main() {
    std::cout << "If circle has radius of 15mm" << std::endl;
    std::cout << std::endl;
    std::cout << "Area is" << M_PI *pow(15, 2) << "mm^2" << std::endl;
    std::cout << "Perimeter is " << 2*M_PI*15 << "mm" << std::endl;
}
