#include <iostream>
using namespace std;
class Vehicle
{
public:
    int speed;
    void accelerate()
    {
        cout << "The vehicle is accelerating!" << endl;
    }
};

class Engine
{
public:
    string fuelType;
    void startEngine()
    {
        cout << "The engine is starting" << endl;
    }
};

class Car : public Vehicle, public Engine
{
public:
    string brand;
    void showCarDetails()
    {
        cout << "The brand of the car is " << brand << endl;
        cout << "The maximum speed of this car is " << speed << endl;
        cout << "The fuel type of the car is" << fuelType << endl;
    }
};

class ElectricCar : public Car {
public:
    int batteryLife;
    void showDetails() {
        showCarDetails();
        cout << "The battery life of this electric car is " << batteryLife << " hours" << endl;
    }
};

int main() {
    ElectricCar myElectricCar;
    myElectricCar.speed = 200;
    myElectricCar.brand = "Nissan";
    myElectricCar.fuelType = "Electric";
    myElectricCar.batteryLife = 400;
    myElectricCar.accelerate();
    myElectricCar.startEngine();
    myElectricCar.showDetails();
}