/*Lab 3 (const & enum): Define an enum class called Color with values RED,
GREEN, and BLUE. Write a class Shape that has a private Color member. Provide
a constructor to initialize it and a const member function getColor() that returns
the color. In main(), create a Shape object and display its color. */

#include <iostream>
using namespace std;

// Define an enum class
enum class Color
{
    RED,
    GREEN,
    BLUE
};

// Define the Shape class
class Shape
{
private:
    Color color;

public:
    // Constructor to initialize color
    Shape(Color c)
    {
        color = c;
    }

    // Const member function to return color
    Color getColor() const
    {
        return color;
    }
};

int main()
{
    cout << "Enter color name (RED, GREEN, BLUE): ";
    string colorInput;
    cin >> colorInput;

    // Convert string input to Color enum

    Color inputColor;
    if (colorInput == "RED")
        inputColor = Color::RED;
    else if (colorInput == "GREEN")
        inputColor = Color::GREEN;
    else if (colorInput == "BLUE")
        inputColor = Color::BLUE;
    else
    {
        cerr << "Invalid color name!" << endl;
        return 1;
    }

    // Create a Shape object with the input color
    Shape shape(inputColor);

    cout << "Shape Color: ";

    // Display the color
    switch (shape.getColor())
    {
    case Color::RED:
        cout << "RED";
        break;
    case Color::GREEN:
        cout << "GREEN";
        break;
    case Color::BLUE:
        cout << "BLUE";
        break;
    }

    cout << endl;

    return 0;
}