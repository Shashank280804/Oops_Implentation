#include <iostream>
using namespace std;

class SmartPhone {
public:
    // Overloaded function to display phone details
    void displayDetails(int storage) {
        cout << "SmartPhone with " << storage << "GB storage." << endl;
    }

    void displayDetails(int storage, int battery) {
        cout << "SmartPhone with " << storage << "GB storage and " << battery << "mAh battery." << endl;
    }

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
