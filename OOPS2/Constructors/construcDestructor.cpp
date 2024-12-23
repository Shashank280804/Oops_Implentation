#include <iostream>
using namespace std;

// It is static so that every class object has the same value
static int Count = 0;

class SmartPhone {
public:
    // CONSTRUCTOR
    SmartPhone() {
        // Number of times constructor is called
        Count++;
        cout << "SmartPhone " << Count << " is powered ON." << endl;
    }

    // DESTRUCTOR
    ~SmartPhone() {
        // Number of times destructor is called
        cout << "SmartPhone " << Count << " is powered OFF." << endl;
        Count--;
    }
};

int main() {
    SmartPhone phone1, phone2, phone3;

    return 0;
}
