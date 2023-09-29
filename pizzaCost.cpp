// Copyright (c) 2021 Lily Carroll All rights reserved.
//
// Created by: Lily Carroll
// Created on: Sept/29/2023
// This program asks the user for the diameter
// of their pizza. It will then
// calculates the total cost with tax.
#include <iomanip>
#include <iostream>

int main() {
    // Declaring  my constants.
    const float LABOUR_COST = 2.00;
    const float RENTAL_COST = 2.25;
    const float INGREDIENT_COST = 1.50;
    const float HST = 0.13;

    // Declaring my variables.
    int diameter;
    float subtotal, tax, total;

    // Getting the user input for pizza diameter.
    std::cout << "Enter the diameter in inches: ";
    std::cin >> diameter;

    // Calculate the subtotal.
    subtotal = LABOUR_COST + RENTAL_COST + INGREDIENT_COST * diameter;

    // Calculate the tax.
    tax = subtotal * HST;

    // Calculate the total.
    total = subtotal + tax;

    // Displaying the total cost of the user's pizza.
    std::cout << "The total cost is: $" <<

        // Rounding the total cost to 2 decimal places.
        std::fixed << std::setprecision(2)
              << std::setfill('0') << total << "\n";
}
