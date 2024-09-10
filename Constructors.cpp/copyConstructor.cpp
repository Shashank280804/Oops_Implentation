#include <iostream>
using namespace std;

class Vehicle
{
public:
    int speed;
    // Constructor
    Vehicle(int s)
    {
        speed = s;
    }

    Vehicle(const Vehicle &v)
    {
        speed = v.speed;
        cout << "Copy Constructor called!!" << endl;
    }

    void showSpeed()
    {
        cout << "Speed: " << speed << "Km/h" << endl;
    }
};

int main()
{
    Vehicle car1(200);   // Normal constructor
    Vehicle car2 = car1; // Copy constructor

    car1.showSpeed();
    car2.showSpeed(); // car2 has the same speed as car1
    return 0;
}
