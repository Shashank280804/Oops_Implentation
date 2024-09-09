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

    // Friend function declaration
    friend void showSpeed(Vehicle& v);
};

// Friend function definition
void showSpeed(Vehicle& v) {
    // Accessing private member
    cout << "The speed of the vehicle is " << v.speed << " km/h" << endl;
}

int main() {
    Vehicle myVehicle(120);  // Creating an object of Vehicle
    showSpeed(myVehicle);    // Calling the friend function to display speed
    return 0;
}
