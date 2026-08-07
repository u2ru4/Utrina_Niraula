#include <iostream>
using namespace std;

// Function overloading for add() - Two integers
int add(int x, int y) {
    return (x + y);
}

// Function overloading for add() - Two floating-point numbers
double add(double x, double y) {
    return (x + y);
}

// Function overloading for add() - Three integers
int add(int x, int y, int z) {
    return (x + y + z);
}

// Inline function to calculate square of a number
inline int square(int num) {
    return (num * num);
}

int main() {
    cout << "==== Smart Calculator ====" << endl << endl;
    int a, b, c;
    double d, e;

    cout << "Enter three integers: ";//input  three integers
    cin >> a >> b >> c;

    cout << "Enter two floating-point numbers: ";//input two floating-point numbers
    cin >> d >> e;

    cout << endl;
    //output sum of two integers
    cout << "Sum of " << a << " and " << b << " is: " << add(a, b) << endl;

    //output sum of two floating-point numbers
    cout << "Sum of " << d << " and " << e << " is: " << add(d, e) << endl; 

    //output sum of three integers
    cout << "Sum of " << a << ", " << b << ", and " << c << " is: " << add(a, b, c) << endl;
    
    //output square of first integer
    cout << "Square of " << a << " is: " << square(a) << endl; 

    //output square of second integer
    cout << "Square of " << b << " is: " << square(b) << endl; 

    //output square of third integer
    cout << "Square of " << c << " is: " << square(c) << endl; 

    return 0;
}