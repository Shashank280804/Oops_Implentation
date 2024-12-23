#include <iostream>
using namespace std;

class SmartPhone {
public:
    // Method to display storage
    void displayDetails(int storage) {
        cout << "SmartPhone with " << storage << "GB storage." << endl;
    }

    // Overloaded method to display storage and battery
    void displayDetails(int storage, int battery) {
        cout << "SmartPhone with " << storage << "GB storage and " << battery << "mAh battery." << endl;
    }

    // Overloaded method to display storage, battery, and camera
    void displayDetails(int storage, int battery, int camera) {
        cout << "SmartPhone with " << storage << "GB storage, " << battery << "mAh battery, and " << camera << "MP camera." << endl;
    }
};

int main() {
    SmartPhone myPhone;

    myPhone.displayDetails(128);                     // Single parameter
    myPhone.displayDetails(128, 5000);              // Two parameters
    myPhone.displayDetails(128, 5000, 108);         // Three parameters

    return 0;
}
