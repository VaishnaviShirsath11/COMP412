#include "vaishnavi_scientific_calculator.h"
#include <iostream>
#include <cmath>
#include <stdexcept>


void Calculate::one_input() {
    while (true) {
        std::cout << "Enter a Number: ";
        if (std::cin >> num1) {
            break; 
        } else {
            std::cin.clear();             
            std::cin.ignore(1000, '\n');  
            std::cout << "Invalid input. Please enter a valid number." << std::endl;
        }
    }
}


void Calculate::two_input() {
    while (true) {
        std::cout << "Enter First Number (a): ";
        if (std::cin >> num1) {
            std::cout << "Enter Second Number (b): ";
            if (std::cin >> num2) {
                break; 
            } else {
                std::cin.clear();             
                std::cin.ignore(1000, '\n');  
                std::cout << "Invalid input for the second number. Please enter a valid number." << std::endl;
            }
        } else {
            std::cin.clear();            
            std::cin.ignore(1000, '\n');  
            std::cout << "Invalid input for the first number. Please enter a valid number." << std::endl;
        }
    }
}


double Calculate::addition(){
    return num1 + num2;
}

double Calculate::subtraction(){
    return num1 - num2;
}

double Calculate::multiplication(){
    return num1 * num2;
}

double Calculate::division(){
    try {
            if (num2 == 0){
                throw std::runtime_error ("Divide by zero ");
            }
    return num1 / num2;
    }

    catch (const std::exception& e){
                std::cout << "Exception caught: " <<e.what() <<std::endl;
            }
}

double Calculate::percentage(){
    return num1 * (num2/100);
}

double Calculate::power(){
    return pow(num1, num2);
}

double Calculate::square_root(){
    try {
            if (num1 < 0){
                throw std::runtime_error ("Non-positive number");
            }
    return sqrt(num1);
    }

    catch (const std::exception& e){
                std::cout << "Exception caught: " <<e.what() <<std::endl;
            }
}

double Calculate::square(){
    return num1 * num1;
}

double Calculate::natural_log(){
    try {
            if (num1 < 0){
                throw std::runtime_error ("Non-positive number");
            }
    return log(num1);
    }

    catch (const std::exception& e){
                std::cout << "Exception caught: " <<e.what() <<std::endl;
            }
}

double Calculate::log_10(){
     try {
            if (num1 < 0){
                throw std::runtime_error ("Non-positive number");
            }
    return log10(num1);
    }

    catch (const std::exception& e){
                std::cout << "Exception caught: " <<e.what() <<std::endl;
            }
}