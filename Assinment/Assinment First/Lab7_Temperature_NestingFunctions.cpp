/*Lab 7 (Nesting of Member Functions): Create a class Temperature with private
data members for celsius. Implement a public member function display() that, in
turn, calls a private member function toFahrenheit() to convert and display the
temperature in Fahrenheit. The display() function should show both Celsius and
Fahrenheit. */
#include <iostream>
using namespace std;

class Temperature
{
private:
    double celsius;

    // Private member function to convert Celsius to Fahrenheit
    double toFahrenheit()
    {
        return (celsius * 9.0 / 5.0) + 32.0;
    }

public:
    // Constructor to initialize Celsius temperature
    Temperature(double c)
    {
        celsius = c;
    }
    // Public member function to display temperature in both Celsius and Fahrenheit
    void display()
    {
        cout << "Temperature Details:" << endl;
        cout << "Temperature in Celsius: " << celsius << " C" << endl;
        cout << "Temperature in Fahrenheit: " << toFahrenheit() << " F" << endl;
    }
};

int main()
{
    double celsiusInp;
    cout << "Enter temperature in Celsius: ";
    cin >> celsiusInp;

    // Create a Temperature object
    Temperature temp(celsiusInp);

    // Display the temperature in both Celsius and Fahrenheit
    temp.display();

    return 0;
}