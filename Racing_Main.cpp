#include <iostream>
#include "Racing.h"

int main() {
    try {
        Racing* cars[4]; // Create an array of 4 Racing cars
        
        for (int i = 0; i < 4; ++i) {
            cars[i] = new Racing();
            std::cout << "Car " << i+1 << " is starting with the speed: " << cars[i]->getSpeed() << std::endl;
        }

        // Simulate racing scenario
        for (int i = 0; i < 5; ++i) {
            for (int j = 0; j < 4; ++j) {
                cars[j]->accelerate(); 
                std::cout << "Car " << j+1 << " is running..."<<std::endl;
                std::cout << "Current speed: " << cars[j]->getSpeed() << std::endl;
            }

            // Apply brakes to odd-indexed cars
            if (i % 2 != 0) {
                for (int j = 0; j < 4; j += 2) {
                    cars[j]->brake(); 
                    std::cout << "Car " << j+1 << " is applying brakes..." <<std::endl;
                    std::cout << "Current speed: " << cars[j]->getSpeed() << std::endl;
                 }
            }
        }

        // Clean up memory
        for (int i = 0; i < 4; ++i) {
            delete cars[i];
        }
    } catch (std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
