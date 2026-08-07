/*Lab 9 (Passing Objects by Reference): Define a class Complex with integer data
members real and imag. Write a global function addComplex(const Complex
&c1, const Complex &c2) that takes two Complex objects by const reference
and returns a Complex object. In main(), create two Complex numbers, add
them, and display the result.*/

#include <iostream>
using namespace std;

class Complex
{
    // Data members for real and imaginary parts
private:
    int real;
    int imag;

public:
    Complex(int r = 0, int i = 0) : real(r), imag(i) {} // Constructor to initialize Complex object

    int getReal() const { return real; }
    int getImag() const { return imag; }
};

Complex addComplex(const Complex &c1, const Complex &c2)
{
    return Complex(c1.getReal() + c2.getReal(), c1.getImag() + c2.getImag());
}

int main()
{
    Complex c1(3, 4);
    Complex c2(1, 2);
    Complex result = addComplex(c1, c2);

    cout << "Result: " << result.getReal() << " + " << result.getImag() << "i" << endl;

    return 0;
}