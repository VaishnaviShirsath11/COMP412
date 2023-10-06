#include "Vehicle.h"

Vehicle::Vehicle() : speed(0), gear(1) {}

Vehicle::~Vehicle() {}

void Vehicle::accelerate() {
    speed += 10;
}

void Vehicle::brake() {
    if (speed >= 10) {
        speed -=10;
    } 
    else {
        speed = 0;
    }
}

void Vehicle::gearShift(int changegear) {
    gear = changegear;
}

int Vehicle::getSpeed() const {
    return speed;
}

int Vehicle::getGear() const {
    return gear;
}
