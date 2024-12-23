#include <iostream>
using namespace std;

class Vehicle
{
public:
    int speed;
    void accelerate()
    {
        cout << "The vehicle is accelerating" << endl;
    }
};

class Car : public Vehicle
{
public:
    string brand;
    void showCarDetails()
    {
        cout << "The brand of the car " << brand << endl;
        cout << "The maximum speed of this car is " << speed << endl;
    }
};

class Bike : public Vehicle
{
public:
    string type;
    void showBikeDetails()
    {
        cout << "The type of the car " <<type<< endl;
        cout << "The maximum speed of this car is " << speed << endl;
    }
};
int main() {
    Car myCar;
    myCar.speed = 220;
    myCar.brand = "Audi";
    myCar.accelerate();
    myCar.showCarDetails();

    Bike myBike;
    myBike.speed = 120;
    myBike.type = "Mountain";
    myBike.accelerate();
    myBike.showBikeDetails();
}