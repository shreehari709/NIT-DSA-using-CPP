#include <iostream>
using namespace std;

// Base class
class Base {
public:
    Base(int x) {  
        cout << "Base class constructor called " << x << endl;
    }
    ~Base() { // Destructor of the base class
        cout << "Base class destructor called" << endl;
    }
}; // End of Base class

// Derived class
class Derived : public Base {
public:
    Derived(int x,int y): Base(y) { // Constructor of the derived class
        cout << "Derived class constructor called with value: " << x << endl;
    }
    ~Derived() { // Destructor of the derived class
        cout << "Derived class destructor called" << endl;
    }
};

int main() {
    Derived obj(10,20); 
    return 0;
}
