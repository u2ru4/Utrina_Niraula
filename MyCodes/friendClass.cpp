// Write a C++ program to demonstrate the concept of a Friend Class.
#include <iostream>
using namespace std;

class B; // Forward declaration

// Class A
class A
{
private:
    int value;

public:
    A(int x) : value(x) {}

    int getValue() const { return value; }

    // Declare B as a friend class
    friend class B;
};

// Friend Class B
class B
{
private:
    int data;

public:
    B(int x) : data(x) {}

    // B can access private members of A
    void displayA(A &obj)
    {
        cout << "Value of A (accessed from friend class B): " << obj.value << endl;
    }

    void modifyA(A &obj, int newValue)
    {
        obj.value = newValue;
        cout << "A's value modified to: " << obj.value << endl;
    }

    void display()
    {
        cout << "Data of B: " << data << endl;
    }
};

int main()
{
    A objA(50);
    B objB(100);

    cout << "=== Friend Class Example ===" << endl;
    cout << endl;

    cout << "Initial values:" << endl;
    cout << "A's value: " << objA.getValue() << endl;
    objB.display();
    cout << endl;

    cout << "B accessing A's private member:" << endl;
    objB.displayA(objA);
    cout << endl;

    cout << "B modifying A's private member:" << endl;
    objB.modifyA(objA, 75);
    cout << endl;

    cout << "After modification:" << endl;
    cout << "A's value: " << objA.getValue() << endl;

    return 0;
}
