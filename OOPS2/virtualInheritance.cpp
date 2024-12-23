//Solution to Diamond problem that is virtual inheritance


#include <iostream>
using namespace std;

// Base class A
class A {
public:
    void show() {
        cout << "Class A" << endl;
    }
};

// Derived class B inheriting virtually from A
class B : virtual public A {
public:
    void show() {
        cout << "Class B" << endl;
    }
};

// Derived class C inheriting virtually from A
class C : virtual public A {
public:
    void show() {
        cout << "Class C" << endl;
    }
};

// Derived class D inheriting from both B and C
class D : public B, public C {
public:
    void show() {
        // Explicitly call the show method from A to avoid ambiguity
        A::show();
    }

    void display() {
        show(); // Will call A's show method explicitly
        cout << "Class D" << endl;
    }
};

int main() {
    D obj;
    obj.display();
    return 0;
}
