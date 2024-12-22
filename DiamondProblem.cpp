#include <iostream>
using namespace std;

// Base class A
class A {
public:
    void show() {
        cout << "Class A" << endl;
    }
};

// Derived class B inheriting from A
class B : public A {
public:
    void show() {
        cout << "Class B" << endl;
    }
};

// Derived class C inheriting from A
class C : public A {
public:
    void show() {
        cout << "Class C" << endl;
    }
};

// Derived class D inheriting from both B and C
class D : public B, public C {
public:
    // This will cause ambiguity due to diamond inheritance
    void display() {
        // We cannot directly call show() as it's ambiguous
        // B::show(); // No ambiguity if we specify the class
        // C::show(); // No ambiguity if we specify the class
        cout << "Class D" << endl;
    }
};

int main() {
    D obj;
    obj.display();
    // obj.show(); // This would cause ambiguity as there are two show() functions inherited
    return 0;
}
