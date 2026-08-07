/*Lab 18 (Default & Parameterized Constructors): Write a class Circle with a
private data member radius. Provide a default constructor (sets radius to 0), a
parameterized constructor (sets radius to a given value), and a member function
area() to calculate the area. Create objects using both constructors and display
their areas. */

#include <iostream>
using namespace std;

class Circle
{
private:
    double radius;

public:
    // Default Constructor
    Circle()
    {
        radius = 0;
    }

    // Parameterized Constructor
    Circle(double r)
    {
        radius = r;
    }

    // Function to calculate area
    double area()
    {
        return 3.14159 * radius * radius;
    }

    // Function to display radius and area
    void display()
    {
        cout << "Radius = " << radius << endl;
        cout << "Area = " << area() << endl;
    }
};

int main()
{
    double r;

    // Object created using default constructor
    Circle c1;

    cout << "Circle created using Default Constructor:" << endl;
    c1.display();

    // Input radius for parameterized constructor
    cout << "\nEnter the radius of the second circle: ";
    cin >> r;

    // Object created using parameterized constructor
    Circle c2(r);

    cout << "\nCircle created using Parameterized Constructor:" << endl;
    c2.display();

    return 0;
}