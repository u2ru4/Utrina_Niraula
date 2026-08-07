/*Lab 17 (Returning Objects by Value vs Reference): Write a class Counter with an
int value. Implement member functions increment() (returns by value),
incrementByRef() (returns by reference), and incrementByPtr() (returns by
pointer). In main(), demonstrate the difference in chaining:
c.increment().increment() vs c.incrementByRef().incrementByRef(). Explain why
one works and the other doesn't.*/

#include <iostream>
using namespace std;

class Counter
{
private:
    int value;

public:
    // Constructor
    Counter(int v = 0)
    {
        value = v;
    }

    // Return by value
    Counter increment()
    {
        value++;
        return *this;
    }

    // Return by reference
    Counter &incrementByRef()
    {
        value++;
        return *this;
    }

    // Return by pointer
    Counter *incrementByPtr()
    {
        value++;
        return this;
    }

    // Display function
    void display() const
    {
        cout << "Value = " << value << endl;
    }
};

int main()
{
    Counter c(5);

    cout << "Initial Value: " << endl;
    c.display();

    // Returning by value
    c.increment();
    cout << "\nAfter increment() (Return by Value): ";
    c.display();

    // Chaining using reference
    c.incrementByRef().incrementByRef();
    cout << "After incrementByRef().incrementByRef(): ";
    c.display();

    // Chaining using pointer
    c.incrementByPtr()->incrementByPtr();
    cout << "After incrementByPtr()->incrementByPtr(): ";
    c.display();

    return 0;
}