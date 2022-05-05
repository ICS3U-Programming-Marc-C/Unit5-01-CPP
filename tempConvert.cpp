// Copyright (c) 2022 Coffi All rights reserved.
// Created by: Marc Coffi
// Date: May 2022
// This program converts celsius to fahrenheit

#include <iostream>

void fahrenheit() {
       // Declaring variables
       float userNum, fahrenheit;
       std::string userInput;
       float division = 9.0/5.0;
       // input
       std::cout << "Enter a temperature in Celsius: ";
       std::cin >> userInput;
       try {
              userNum = std::stof(userInput);
              // fahrenheit conversion
              fahrenheit = (division * userNum) + 32.0;
              std::cout << userNum << " ℃ = "  << fahrenheit << " ℉";
        } catch (std::invalid_argument) {
              std::cout << "Invalid Input. Please enter";
              std::cout << "a proper Celsius value.\n";
       }
}

int main() {
       fahrenheit();
}
