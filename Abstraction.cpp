#include<iostream>
using namespace std;

class Vehicle{
  public:

  virtual void start()=0;

  void stop(){
    cout<<"The vehicle has stopped "<<endl;
  }
};

class Car: public Vehicle{
    public:
        void start() override{
              cout<<"The car is starting!!"<<endl;
        }

};

int main(){
    Car myCar;
    myCar.start();
    myCar.stop();
    return 0;
}