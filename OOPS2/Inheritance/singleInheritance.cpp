#include <iostream>
using namespace std;

// Base class: Camera
class Camera {
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

    phone.capturePhoto();  // Feature from Camera
    phone.makeCall();      // Feature specific to SmartPhone

    return 0;
}
