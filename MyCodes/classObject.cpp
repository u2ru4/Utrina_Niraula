#include <iostream>
using namespace std;

class Car
{
public:            // Access specifier
    string brand;  // data member
    string series; // data member
    int speed;     // data member
    int year;      // data member

    void displayInfo()
    { // member function
        cout << "Brand: " << brand << endl;
        cout << "Series: " << series << endl;
        cout << "Speed: " << speed << endl;
        cout << "Year: " << year << endl;
    }
};

int main()
{
    // create object of Car class
    Car myCar;
    cout << "Enter car brand: ";
    cin >> myCar.brand;

    cout << "Enter car series: ";
    cin >> myCar.series;

    cout << "Enter car speed: ";
    cin >> myCar.speed;

    cout << "Enter car year: ";
    cin >> myCar.year;

    // display information about the car
    myCar.displayInfo();

    return 0;
}