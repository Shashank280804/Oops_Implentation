#include <iostream>
using namespace std;

class Vehicle
{
public:
    void start()
    {
        cout << "Vehicle has started" << endl;
    }

    void start(string fueltype)
    {
        cout << "Vehicle has started with " << fueltype << " as fuel " << endl;
    }
};

int main()
{
    Vehicle myVehicle;
    
    // Calls the version with no parameters
    myVehicle.start();

    // Calls the version with one string parameter
    myVehicle.start("petrol");
    return 0;
}
