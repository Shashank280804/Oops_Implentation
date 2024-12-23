#include <iostream>
using namespace std;

// Abstract Class
class SmartPhone {
public:
    // Pure virtual function
    virtual void displayFeatures() = 0;

    // A concrete method
    void powerOn() {
        cout << "Smartphone is powering ON..." << endl;
    }
};

// Derived Class
class HighEndSmartPhone : public SmartPhone {
public:
    // Implementation of the pure virtual function
    void displayFeatures() override {
        cout << "Features: 108MP Camera, 5000mAh Battery, 120Hz Display, 5G Support" << endl;
    }
};

int main() {
    HighEndSmartPhone myPhone;

    myPhone.powerOn();         // Accessing concrete method from base class
    myPhone.displayFeatures(); // Accessing overridden method

    return 0;
}
