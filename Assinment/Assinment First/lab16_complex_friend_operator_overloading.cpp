/* Lab 16 (Friend Function for Operator Overloading):
   Create a Complex class. Declare a friend function
   operator+(const Complex &c1, const Complex &c2)
   to overload the + operator. In main(), demonstrate
   that c1 + c2 works.
*/

#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imag;

public:
    // Parameterized Constructor
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }

    // Friend function declaration
    friend Complex operator+(const Complex &c1, const Complex &c2);

    // Display function
    void display() const
    {
        cout << real;

        if (imag >= 0)
            cout << " + " << imag << "i";
        else
            cout << " - " << -imag << "i";

        cout << endl;
    }
};

// Friend function definition
Complex operator+(const Complex &c1, const Complex &c2)
{
    Complex temp;

    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;

    return temp;
}

int main()
{
    int r1, i1, r2, i2;

    cout << "Enter first complex number: ";
    cin >> r1 >> i1;

    cout << "Enter second complex number: ";
    cin >> r2 >> i2;

    Complex c1(r1, i1);
    Complex c2(r2, i2);

    Complex c3 = c1 + c2;

    cout << "\nFirst Complex Number: ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    cout << "Sum: ";
    c3.display();

    return 0;
}