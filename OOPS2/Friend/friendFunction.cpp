#include <iostream>
using namespace std;

class SmartPhone {
private:
    int batteryPercentage; // Private member

public:
    // Constructor
    SmartPhone(int battery) {
        batteryPercentage = battery;
    }

    // Friend function declaration
    friend void showBattery(SmartPhone phone);
};

// Friend function definition
void showBattery(SmartPhone phone) {
    // Accessing private member
    cout << "The battery percentage of the smartphone is " << phone.batteryPercentage << "%" << endl;
}

int main() {
    SmartPhone myPhone(85);  // Creating an object of SmartPhone
    showBattery(myPhone);    // Calling the friend function to display battery percentage
    return 0;
}
