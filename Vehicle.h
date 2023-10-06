#ifndef VEHICLE_H
#define VEHICLE_H

class Vehicle {
public:
    Vehicle();
    virtual ~Vehicle(); //to make sure that objects of the derived class (car) are destructed properly. 
    
    void accelerate();
    void brake();
    void gearShift(int changegear);
    
    int getSpeed() const;
    int getGear() const;
    
protected:
    int speed;
    int gear;
};

#endif 
