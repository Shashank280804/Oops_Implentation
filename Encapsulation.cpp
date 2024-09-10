#include <iostream>
using namespace std;

class Vehicle
{
private:
    int speed;

public:
    int getSpeed()
    {
        return speed;
    }

    void setSpeed(int s)
    {

        speed = s;
        
    }
};

int main()
{
    Vehicle BMW;
    BMW.setSpeed(180);
    cout << "The speed of the vehicle is " << BMW.getSpeed() << " km/h" << endl;

    return 0;
}
