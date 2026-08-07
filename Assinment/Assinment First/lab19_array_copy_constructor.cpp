/* Lab 19 (Copy Constructor): Create a class Array that dynamically allocates an
integer array. Implement a default constructor, parameterized constructor
(takes size), copy constructor (deep copy), and destructor. In main(),
demonstrate the creation of one array, copying it to another array, and modifying
the first array to prove that the copy is independent.*/

#include <iostream>
using namespace std;

class Array
{
private:
    int *arr;
    int size;

public:
    // Default Constructor
    Array()
    {
        size = 0;
        arr = NULL;
    }

    // Parameterized Constructor
    Array(int s)
    {
        size = s;
        arr = new int[size];

        cout << "Enter " << size << " elements: ";
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
    }

    // Copy Constructor (Deep Copy)
    Array(const Array &other)
    {
        size = other.size;
        arr = new int[size];

        for (int i = 0; i < size; i++)
        {
            arr[i] = other.arr[i];
        }
    }

    // Modify an element
    void modifyElement(int index, int value)
    {
        if (index >= 0 && index < size)
        {
            arr[index] = value;
        }
    }

    // Display array
    void display()
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    // Destructor
    ~Array()
    {
        delete[] arr;
    }
};

int main()
{
    int n;

    cout << "Enter array size: ";
    cin >> n;

    // Create first array
    Array arr1(n);

    // Copy arr1 to arr2
    Array arr2 = arr1;

    cout << "\nOriginal Array (arr1): ";
    arr1.display();

    cout << "Copied Array (arr2): ";
    arr2.display();

    // Modify original array
    arr1.modifyElement(0, 999);

    cout << "\nAfter modifying arr1:" << endl;

    cout << "arr1: ";
    arr1.display();

    cout << "arr2: ";
    arr2.display();

    return 0;
}
