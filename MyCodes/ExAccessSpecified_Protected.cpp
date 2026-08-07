/*Write a C++ program to demonstrate parameterized constructor
in single inheritance and modification of protected data members.*/
#include <iostream>
using namespace std;

class Vehicle
{
protected:
    string brand; // protected member variable
    int Maxspeed; // protected member variable
public:
    Vehicle(string b, int s) : brand(b), Maxspeed(s) {} // constructor to initialize brand and Maxspeed
    void displayInfo()
    {
        cout << "Brand: " << brand << endl;
        cout << "Max Speed: " << Maxspeed << " km/h" << endl;
    }
};

class Sportcar : public Vehicle
{
public:
    Sportcar(string b, int s) : Vehicle(b, s) {} // constructor to initialize brand and Maxspeed
    void boost()
    {
        Maxspeed += 50; // increase max speed by 50 km/h
        cout << "Boosted Max Speed: " << Maxspeed << " km/h" << endl;
    }
};

int main()
{
    Sportcar myCar("Ferrari", 300);
    myCar.displayInfo(); // Output: Brand: Ferrari, Max Speed: 300 km/h
    myCar.boost();       // Output: Boosted Max Speed: 350 km/h
    return 0;
}