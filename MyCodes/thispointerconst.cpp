// Write a Program (WAP) to demonstrate the concept of Method Chaining using the 'this' pointer in C++.
#include <iostream>
using namespace std;

class Calculator
{
private:
    int value;

public:
    // Constructor to initialize the value
    Calculator()
    {
        value = 0;
    }

    Calculator &add(int num)
    {
        value += num;
        return *this; // Return the current object
    }

    Calculator &multiply(int num)
    {
        value *= num;
        return *this; // Return the current object
    }

    void displayValue() const
    {
        cout << "Value: " << value << endl;
    }
};

int main()
{
    Calculator calc;
    calc.add(5).multiply(3).displayValue(); // Chaining method calls

    return 0;
}