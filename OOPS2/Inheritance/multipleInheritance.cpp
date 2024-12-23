#include <iostream>
using namespace std;

// Base class 1: Camera
class Camera {
public:
    void capturePhoto() {
        cout << "Capturing Photo..." << endl;
    }
};

// Base class 2: MusicPlayer
class MusicPlayer {
public:
    void playMusic() {
        cout << "Playing Music..." << endl;
    }
};

// Derived class: SmartPhone inherits from Camera and MusicPlayer
class SmartPhone : public Camera, public MusicPlayer {
public:
    void makeCall() {
        cout << "Making a Call..." << endl;
    }
};

// Main function
int main() {
    SmartPhone phone;

    phone.capturePhoto();  // Feature from Camera
    phone.playMusic();     // Feature from MusicPlayer
    phone.makeCall();      // Feature specific to SmartPhone

    return 0;
}
