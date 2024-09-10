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

class Car : public Vehicle
{
public:
    string brand;

    void showCarDetails()
    {
        cout << "The maximum speed of the vehicle is " << speed << endl;
        cout << "The brand of this car is " << brand << endl;
    }
};

class ElectricCar : public Car
{
public:
    int batteryLife;
    void showDetails()
    {
        showCarDetails();
        cout << "The battery life of this electric car is " << batteryLife << endl;
    }
};

int main()
{
    ElectricCar myElectricCar;
    myElectricCar.speed = 180;
    myElectricCar.brand = "Tesla";
    myElectricCar.batteryLife = 500;
    myElectricCar.accelerate();
    myElectricCar.showDetails();
}