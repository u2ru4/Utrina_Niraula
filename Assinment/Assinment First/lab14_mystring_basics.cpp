/*. Lab 14 (String Class - Basics): Create a class MyString that has a char* data
member to hold a C-style string. Implement the following member functions:
a. A constructor that takes a const char* and allocates memory.
b. A destructor to free the memory.
c. A member function display() to print the string.
d. Do not implement the copy constructor or assignment operator yet. In
main(), create a MyString object and pass it by value to a function. You
should observe the program crash or double free. Explain why this
happens. (This is a lead-in to the next lab). */

#include <iostream>
#include <cstring>
using namespace std;

class MyString
{
private:
    char *str;

public:
    // Constructor
    MyString(const char *s)
    {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }

    // Destructor
    ~MyString()
    {
        delete[] str;
    }

    // Display function
    void display()
    {
        cout << str << endl;
    }
};

// Function to demonstrate passing by value
void printString(MyString s)
{
    s.display();
}

int main()
{
    MyString myStr("Hello, World!");

    cout << "Original Object:" << endl;
    myStr.display();

    cout << "\nPassing object by value." << endl;
    printString(myStr); // pass by value

    return 0;
}