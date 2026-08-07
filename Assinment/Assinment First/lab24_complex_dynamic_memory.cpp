/*Lab 24 (Complex Class with Constructors & Destructor): Design a Complex
class that uses dynamic memory for its real and imag parts (use int*). Implement
a default constructor, a parameterized constructor, a copy constructor, and a
destructor. Write a function to display a complex number. In main(),
demonstrate all constructors and the destructor's effect. */

#include <iostream>
using namespace std;

class Complex
{
private:
    int *real;
    int *imag;

public:
    // Default Constructor
    Complex()
    {
        real = new int(0);
        imag = new int(0);
        cout << "Default Constructor Called" << endl;
    }

    // Parameterized Constructor
    Complex(int r, int i)
    {
        real = new int(r);
        imag = new int(i);
        cout << "Parameterized Constructor Called" << endl;
    }

    // Copy Constructor (Deep Copy)
    Complex(const Complex &c)
    {
        real = new int(*c.real);
        imag = new int(*c.imag);
        cout << "Copy Constructor Called" << endl;
    }

    // Display Function
    void display()
    {
        cout << *real;

        if (*imag >= 0)
            cout << " + " << *imag << "i";
        else
            cout << " - " << -*imag << "i";

        cout << endl;
    }

    // Destructor
    ~Complex()
    {
        delete real;
        delete imag;
        cout << "Destructor Called" << endl;
    }
};

int main()
{
    // Default Constructor
    Complex c1;

    // Parameterized Constructor
    Complex c2(5, 3);

    // Copy Constructor
    Complex c3 = c2;

    cout << "\nComplex Numbers:" << endl;

    cout << "c1 = ";
    c1.display();

    cout << "c2 = ";
    c2.display();

    cout << "c3 = ";
    c3.display();

    return 0;
}