#include <iostream>
using namespace std;

class Vehicle
{
public:
    int speed;
    void accelerate()
    {
        cout << "The vehicle is accelerating!!" << endl;
    }
};

class Engine
{
public:
    int horsepower1;
    void horsepower()
    {
        cout << "The Engine started horsepower is " << horsepower1 << "hp" << endl;
    }
};

class Car : public Engine, public Vehicle
{
public:
    string brand;
    void showDetails()
    {
        cout << "The maximum speed is " << speed << endl;
        cout << "The brand of this car is " << brand << endl;
        cout << "The horsepower of the engine is " << horsepower1 << "hp" << endl;
    }
};

int main()
{
    Car myCar;
    myCar.speed=420;
    myCar.brand = "Land Rover";
    myCar.horsepower1 = 450;

    // Calling methods from both base classes
    myCar.horsepower(); // From Engine class
    myCar.accelerate(); // From Vehicle class
    myCar.showDetails();
    
}