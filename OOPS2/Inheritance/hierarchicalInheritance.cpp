#include <iostream>
using namespace std;

// Base class: Camera
class Camera {
public:
    void capturePhoto() {
        cout << "Capturing Photo..." << endl;
    }
};

// Derived class 1: SmartPhone inherits from Camera
class SmartPhone : public Camera {
public:
    void makeCall() {
        cout << "Making a Call..." << endl;
    }
};

// Derived class 2: ActionCamera inherits from Camera
class ActionCamera : public Camera {
public:
    void recordVideo() {
        cout << "Recording Video..." << endl;
    }
};

// Main function
int main() {
    SmartPhone phone;
    ActionCamera actionCam;

    phone.capturePhoto();     // Feature from Camera
    phone.makeCall();         // Feature specific to SmartPhone

    actionCam.capturePhoto(); // Feature from Camera
    actionCam.recordVideo();  // Feature specific to ActionCamera

    return 0;
}
