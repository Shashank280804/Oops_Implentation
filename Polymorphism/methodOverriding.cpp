// RUNTIME POLYMORPHISM
#include <iostream>
using namespace std;

class Vehicle
{
public:
    int speed;

    // Virtual function to allow runtime polymorphism
    virtual void start()
    {
        cout << "Vehicle is starting" << endl;
    }
    void accelerate()
    {
        cout << "Vehicle is accelerating" << endl;
    }
};

class Car : public Vehicle
{
public:
    string brand;

    // Overriding the start function
    void start() override
    {
        cout << "Car is starting with brand " << brand << endl;
    }

    void showDetails()
    {
        cout << "This car is of brand " << brand << " and its speed is " << speed << endl;
    }
};

int main() {
    Vehicle* vehiclePtr;
    Car myCar;

    myCar.speed = 180;
    myCar.brand = "Audi";

    // Base class pointer pointing to derived class object
    vehiclePtr = &myCar;

    // Runtime polymorphism, calls Car's start method
    vehiclePtr->start();

    // Calls the accelerate method from Vehicle class (non-virtual, hence base class version is called)
    vehiclePtr->accelerate();

    return 0;
}