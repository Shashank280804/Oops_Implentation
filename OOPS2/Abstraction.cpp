#include <iostream>
using namespace std;

// Abstract class
class Camera {
public:
    // Pure virtual function for capturing photo (abstract method)
    virtual void capturePhoto() = 0;

    // A concrete method
    void showCameraStatus() {
        cout << "Camera is ready." << endl;
    }
};

// Derived class
class SmartPhoneCamera : public Camera {
public:
    // Implementation of the pure virtual function
    void capturePhoto() override {
        cout << "Capturing photo with SmartPhone camera..." << endl;
    }
};

int main() {
    SmartPhoneCamera myCamera;

    myCamera.showCameraStatus(); // Calling concrete method
    myCamera.capturePhoto();     // Calling implemented abstract method

    return 0;
}
