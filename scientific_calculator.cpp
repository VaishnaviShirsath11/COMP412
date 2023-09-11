#include "scientific_calculator.h"
#include <iostream>
#include <math.h>
#include <cmath>

void Calculate::one_input(){
    std::cout << "Enter a Number: ";
    std::cin >> num1;
}

void Calculate::two_input(){
    std::cout << "Enter First Number (a): ";
	std::cin >> num1;
	std::cout << "Enter Second Number (b): ";
	std::cin >> num2;
}

float Calculate::addition(){
    return num1 + num2;
}

float Calculate::subtraction(){
    return num1 - num2;
}

float Calculate::multiplication(){
    return num1 * num2;
}

float Calculate::division(){
    return num1 / num2;
}

float Calculate::percentage(){
    return num1 * (num2/100);
}

float Calculate::power(){
    return pow(num1, num2);
}

float Calculate::square_root(){
    return sqrt(num1);
}

float Calculate::square(){
    return num1 * num1;
}

float Calculate::natural_log(){
    return log(num1);
}

float Calculate::log_10(){
    return log10(num1);
}