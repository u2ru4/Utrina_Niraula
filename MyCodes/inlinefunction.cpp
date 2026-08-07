#include <iostream>
using namespace std;

inline int max(int a, int b)
{
    return (a > b) ? a : b; // Return the maximum of a and b
}

int main()
{
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "The maximum number is: " << max(num1, num2) << endl; // Call the inline function

    return 0;
}