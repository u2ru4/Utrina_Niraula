/*Lab 23 (Constructor & Destructor Ordering): Create a base class Base and a
derived class Derived. Each class should have a constructor that prints a
message and a destructor that prints a message. In main(), create an object of
Derived and observe the order of constructor and destructor calls. Explain the
output. */

#include <iostream>
using namespace std;

// Base class
class Base
{
public:
    // Constructor
    Base()
    {
        cout << "Base Class Constructor Called" << endl;
    }

    // Destructor
    ~Base()
    {
        cout << "Base Class Destructor Called" << endl;
    }
};

// Derived class
class Derived : public Base
{
public:
    // Constructor
    Derived()
    {
        cout << "Derived Class Constructor Called" << endl;
    }

    // Destructor
    ~Derived()
    {
        cout << "Derived Class Destructor Called" << endl;
    }
};

int main()
{
    // Create object of Derived class
    Derived obj;

    return 0;
}