/*Lab 4 (Function Overloading & Default Arguments): Create a class
MathOperations. Overload a function multiply to handle:
a. Two integers.
b. Three integers.
c. A double and an integer (where the integer is a multiplier). Add default
arguments to one of the functions (e.g., for the three-integer version, set
the third integer to 1 by default). Demonstrate all functions in main(). */
#include <iostream>
using namespace std;

class MathOperations
{
public:
    // Overload multiply for two integers with default argument.
    int multiply(int a, int b = 2)
    {
        return a * b;
    }

    // Overload multiply for three integers
    int multiply(int a, int b, int c)
    {
        return a * b * c;
    }

    // Overload multiply for a double and an integer
    double multiply(double a, int b)
    {
        return a * b;
    }
};

int main()
{
    MathOperations math;

    cout << "Default & Function Overloading Display:" << endl;

    int result = math.multiply(45);
    cout << "Mutiply of one integer: " << result << endl;

    int result2 = math.multiply(12, 56);
    cout << "Mutiply of Two integer: " << result2 << endl;

    int result3 = math.multiply(12, 13, 45);
    cout << "Mutiply of Three integer: " << result3 << endl;

    double result4 = math.multiply(45.56, 59);
    cout << "Mutiply of  Double & integer: " << result4 << endl;
}