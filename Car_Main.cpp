#include <iostream>
#include "Car.h"

int main() {
    try {
        Car* car = new Car();
        std::cout << "Car is starting with the speed: " << car->getSpeed() << std::endl;

        std::cout << "Car is running..."<<std::endl;
        for (int run =0; run < 5; run++)
        {
        car->accelerate();
        std::cout<< "Current speed: " << car->getSpeed() << std::endl;
        };

        std::cout << "Applying brakes..."<<std::endl;
        for(int brk = 0; brk < 5; brk++)
        {
        car->brake();
        std::cout<< "Current speed: " << car->getSpeed() << std::endl;
        };

        //clean up memory 
        delete car;
    } 

    catch (std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
