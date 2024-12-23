#include <iostream>
using namespace std;

class SmartPhone {
public:
    int storage;

    // Constructor
    SmartPhone(int s) {
        storage = s;
    }

    // Copy Constructor
    SmartPhone(const SmartPhone &phone) { // Pass by reference
        storage = phone.storage;
        cout << "Copy Constructor called!!" << endl;
    }

    void showStorage() {
        cout << "Storage: " << storage << "GB" << endl;
    }
};

int main() {
    SmartPhone phone1(128);    // Normal constructor
    SmartPhone phone2 = phone1; // Copy constructor

    phone1.showStorage();
    phone2.showStorage(); // phone2 has the same storage as phone1

    return 0;
}
