#include <iostream>
using namespace std;

class SmartPhone {
private:
    int cameraResolution; // Private member

public:
    // Constructor
    SmartPhone(int resolution) {
        cameraResolution = resolution;
    }

    // Declare the entire Camera class as a friend
    friend class Camera;
};

class Camera {
public:
    // A member function that can access SmartPhone's private members
    void showCameraResolution(SmartPhone phone) {
        cout << "The camera resolution of the smartphone is " << phone.cameraResolution << " MP" << endl;
    }
};

int main() {
    SmartPhone myPhone(108);  // Creating an object of SmartPhone
    Camera myCamera;          // Creating an object of Camera
    myCamera.showCameraResolution(myPhone);  // Camera can access SmartPhone's private members
    return 0;
}
