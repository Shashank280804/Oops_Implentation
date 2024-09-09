#include <iostream>
using namespace std;

class Vehicle {
private:
    int speed;

public:
    // Constructor
    Vehicle(int s) {
        speed = s;
    }

    // Declare the entire Car class as a friend
    friend class Car;
};

class Car {
public:
    // A member function that can access Vehicle's private members
    void showVehicleSpeed(Vehicle& v) {
        cout << "The speed of the vehicle is " << v.speed << " km/h" << endl;
    }
};

int main() {
    Vehicle myVehicle(180);  // Creating an object of Vehicle
    Car myCar;               // Creating an object of Car
    myCar.showVehicleSpeed(myVehicle);  // Car can access Vehicle's private members
    return 0;
}
