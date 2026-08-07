/*. Lab 22 (Constructor Initializer List): Write a class Point with const int x and const
int y. Since these are const, they must be initialized in a constructor initializer
list. Write a program that creates a Point object and displays its coordinates.*/

#include <iostream>
using namespace std;

class Point
{
private:
    const int x;
    const int y;

public:
    // Constructor using initializer list
    Point(int xValue, int yValue) : x(xValue), y(yValue)
    {
        // Constructor body can be empty
    }

    // Display function
    void display() const
    {
        cout << "Point Coordinates: (" << x << ", " << y << ")" << endl;
    }
};

int main()
{
    int x, y;

    cout << "Enter x-coordinate: ";
    cin >> x;

    cout << "Enter y-coordinate: ";
    cin >> y;

    // Create Point object
    Point p(x, y);

    // Display coordinates
    cout << "\nCoordinates of the Point:" << endl;
    p.display();

    return 0;
}