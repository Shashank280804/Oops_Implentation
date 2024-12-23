//RUNTIME POLYMORPHISM
#include <iostream>
using namespace std;

// Abstract class with at least one pure virtual function
class Vehicle {
public:
    int speed;

    // Pure virtual function making Vehicle an abstract class
    virtual void start() = 0;

    void accelerate() {
        cout << "Vehicle is accelerating" << endl;
    }
};

class Car : public Vehicle {
public:
    string brand;

    // Overriding the pure virtual function in derived class
    void start() override {
        cout << "Car is starting with brand " << brand << endl;
    }

    void showDetails() {
        cout << "This car is of brand " << brand << " and its speed is " << speed << endl;
    }
};

int main() {
    Vehicle* vehiclePtr;
    Car myCar;

    myCar.speed = 200;
    myCar.brand = "BMW";

    // Base class pointer pointing to derived class object
    vehiclePtr = &myCar;

    // Calls the overridden start method in Car
    vehiclePtr->start();

    // Calls the accelerate method from Vehicle
    vehiclePtr->accelerate();

    return 0;
}
