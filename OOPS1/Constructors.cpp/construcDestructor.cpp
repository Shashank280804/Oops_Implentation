#include <iostream>
using namespace std;

// It is static so that every class object has the same
// value
static int Count = 0;
class Vehicle
{
public:
    // CONSTRUCTOR
    Vehicle()
    {
        // Number of times constructor is called
        Count++;
        cout << "Object's number which is created " << Count << endl;
    }

    // DESTRUCTOR
    ~Vehicle()
    {
        cout << "Object's number which is destroyed " << Count<<endl;
        Count--;
        // Number of times destructor is called
    }
};

int main()
{
    Vehicle Car1, Car2, Car3, Car4;

    return 0;
}
