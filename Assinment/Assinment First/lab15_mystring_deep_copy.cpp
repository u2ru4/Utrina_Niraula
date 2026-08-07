/* Lab 15 (Copy Constructor & Deep Copy): Extend the previous MyString class.
Add a proper copy constructor that performs a deep copy. Also, add a function
append(const MyString &other) that concatenates another MyString object to
the current one (remember to reallocate memory). Write a main() function to
demonstrate these functionalities and the deep copy. */

#include <iostream>
#include <cstring>
using namespace std;

class MyString
{
private:
    char *data;

public:
    // Parameterized Constructor
    MyString(const char *str)
    {
        data = new char[strlen(str) + 1];
        strcpy(data, str);
    }

    // Copy Constructor (Deep Copy)
    MyString(const MyString &other)
    {
        data = new char[strlen(other.data) + 1];
        strcpy(data, other.data);
    }

    // Append another MyString object
    void append(const MyString &other)
    {
        int newLength = strlen(data) + strlen(other.data);

        char *temp = new char[newLength + 1];

        strcpy(temp, data);
        strcat(temp, other.data);

        delete[] data;
        data = temp;
    }

    // Display function
    void display() const
    {
        cout << data << endl;
    }

    // Destructor
    ~MyString()
    {
        delete[] data;
    }
};

int main()
{
    MyString str1("Hello");
    MyString str2(" World");

    cout << "Original Strings:" << endl;
    cout << "str1 = ";
    str1.display();

    cout << "str2 = ";
    str2.display();

    // Demonstrate append
    str1.append(str2);

    cout << "\nAfter Appending:" << endl;
    cout << "str1 = ";
    str1.display();

    // Demonstrate Deep Copy
    MyString str3 = str1;

    cout << "\nCopied String (Deep Copy):" << endl;
    cout << "str3 = ";
    str3.display();

    return 0;
}