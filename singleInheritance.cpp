#include <iostream>
using namespace std;

class Vehicle
{
public:
    int speed;
    void accelerate()
    {
        cout << "The vehicle is accelerating" << endl;
    }
};

class Car : public Vehicle
{
public:
string brand;
   void showDetails(){
    cout<<"The brand of this car is "<<brand<<endl;
    cout<<"The maximum speed of this car is "<<speed<<endl;
   }
};

int main(){
    Car myCar;
    myCar.speed=240;
    myCar.brand="BMW";
    myCar.accelerate();
    myCar.showDetails();
}