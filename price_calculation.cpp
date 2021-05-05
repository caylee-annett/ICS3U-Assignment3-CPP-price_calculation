// Copyright (c) 2021 Caylee Annett All rights reserved
//
// Created by Caylee Annett
// Created on May 2021
// This program calculates the total cost with HST and a discount if qualified

#include <iostream>
#include <iomanip>

int main() {
    // This function calculates the total cost
    const int PRICE = 100;
    const float DISCOUNT = 0.10;
    const float HST = 0.13;
    int numberOfItems;
    float subtotal;
    float discountedPrice;
    float total;

    // Input
    std::cout << "This program calculates your total cost, including HST "
        "and a discount if the cost is $1000 or more." << std::endl;
    std::cout << "Enter the quantity of items you are purchasing "
        "(each item is $100): ";
    std::cin >> numberOfItems;
    std::cout << "" << std::endl;

    // Process & Output
    if (numberOfItems >= 10) {
            subtotal = numberOfItems * PRICE;
            discountedPrice = subtotal - subtotal * DISCOUNT;
            total = discountedPrice + discountedPrice * HST;
            std::cout << "The subtotal with the discount is $" << std::fixed
                << std::setprecision(2) << std::setfill('0') << discountedPrice
                << ". The total including HST is $" << std::fixed
                << std::setprecision(2) << std::setfill('0') << total << "."
                << std::endl;
    } else {
        subtotal = numberOfItems * PRICE;
        total = subtotal + subtotal * HST;
        std::cout << "The subtotal is $" << std::fixed << std::setprecision(2)
            << std::setfill('0') << subtotal
            << ". The total including HST is $" << std::fixed
            << std::setprecision(2) << std::setfill('0') << total << "."
            << std::endl;
    }
    std::cout << "" << std::endl;
    std::cout << "Done." << std::endl;
}
