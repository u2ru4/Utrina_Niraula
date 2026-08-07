/*Lab 10 (Returning Objects): For the Complex class created above, write a
member function add(const Complex &c) that returns a new Complex object
(the sum). Demonstrate chaining of operations, e.g., c1.add(c2).add(c3).*/

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

    Complex add(const Complex &c) const
    {
        return Complex(getReal() + c.getReal(), getImag() + c.getImag());
    }
};

int main()
{
    Complex c1(3, 4);
    Complex c2(1, 2);
    Complex c3(5, 6);

    // Chaining of operations
    Complex result = c1.add(c2).add(c3);

    cout << "Result: " << result.getReal() << " + " << result.getImag() << "i" << endl;

    return 0;
}