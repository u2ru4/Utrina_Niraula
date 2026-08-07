/* Lab 5 (Inline Function): Write a program that uses an inline function isEven(int) to
check if a number is even. In main(), ask the user for a number and use the inline
function to print whether it is even or odd. Also, create a non-inline function that
performs the same task (but is not inlined). Discuss the potential performance
difference by comparing a function call in a loop (e.g., 1 million iterations) with a
macro and the inline function.*/

#include <iostream>
using namespace std;

#define isEvenMacro(n) ((n) % 2 == 0) // Macro to check if a number is even

// inline function.
inline bool isEven(int n)
{
    return (n % 2 == 0);
}

// non inline function.
bool isEvenNonInline(int n)
{
    return (n % 2 == 0);
}

int main()
{
    int num;
    cout << "Enter The Number: ";
    cin >> num;

    cout << endl;
    if (isEven(num))
    {
        cout << "The Number " << num << " is Even.(Inline)" << endl;
    }
    else
    {
        cout << "The Number " << num << " is Odd.(Inline)" << endl;
    }

    // Using regular function
    if (isEvenNonInline(num))
    {
        cout << "The Number " << num << " is Even.(Non-Inline)" << endl;
    }
    else
    {
        cout << "The Number " << num << " is Odd.(Non-Inline)" << endl;
    }

    // Using macro
    if (isEvenMacro(num))
    {
        cout << "The Number " << num << " is Even.(Macro)" << endl;
    }
    else
    {
        cout << "The Number " << num << " is Odd.(Macro)" << endl;
    }
    cout << endl;

    // Compare macro, inline, and non-inline function.
    int count = 0;
    for (int i = 0; i < 1000000; i++)
    {
        isEvenMacro(i); // Call the macro in a loop
        count++;
    }
    cout << "Macro called " << count << " times." << endl;
    cout << endl;

    count = 0;
    for (int i = 0; i < 1000000; i++)
    {
        isEven(i); // Call the inline function in a loop
        count++;
    }
    cout << "Inline function called " << count << " times." << endl;
    cout << endl;

    count = 0;
    for (int i = 0; i < 1000000; i++)
    {
        isEvenNonInline(i); // Call the non-inline function in a loop
        count++;
    }
    cout << "Non-inline function called " << count << " times." << endl;

    cout << endl;
    cout << "Performance comparison completed." << endl;
    cout << "Macro, inline function, and non-inline function were each called 1,000,000 times." << endl;
}