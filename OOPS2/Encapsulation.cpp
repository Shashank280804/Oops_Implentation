#include <iostream>
using namespace std;

class SmartPhone {
private:
    int megapixels;

public:
    // Getter method to access the private attribute
    int getMegapixel() {
        return megapixels;
    }

    // Setter method to modify the private attribute
    void setMegapixel(int mp) {
        megapixels = mp;
    }
};

int main() {
    SmartPhone myPhone;
    myPhone.setMegapixel(48);  // Setting the camera resolution to 48 megapixels
    cout << "The camera resolution is " << myPhone.getMegapixel() << " megapixels." << endl;

    return 0;
}
