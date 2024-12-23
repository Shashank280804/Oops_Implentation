#include <iostream>
using namespace std;

// Base class: Device
class Device {
public:
    void powerOn() {
        cout << "Powering On..." << endl;
    }
};

// Intermediate class: Camera inherits from Device
class Camera : public Device {
public:
    void capturePhoto() {
        cout << "Capturing Photo..." << endl;
    }
};

// Derived class: SmartPhone inherits from Camera
class SmartPhone : public Camera {
public:
    void makeCall() {
        cout << "Making a Call..." << endl;
    }
};

// Main function
int main() {
    SmartPhone phone;

    phone.powerOn();       // Feature from Device
    phone.capturePhoto();  // Feature from Camera
    phone.makeCall();      // Feature specific to SmartPhone

    return 0;
}
