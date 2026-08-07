/*Lab 20 (Overloaded Constructors): Define a class Time with data members for
hours, minutes, and seconds. Provide three constructors:
a. Default: sets to 00:00:00.
b. Parameterized: takes hours, minutes, and seconds.
c. Single integer: takes total seconds and converts it to hours, minutes,
seconds. Write a display() function to show the time in HH:MM:SS format.*/

#include <iostream>
#include <iomanip> // for std::setw and std::setfill
using namespace std;

class Time
{
private:
    int hours;
    int minutes;
    int seconds;

public:
    // Default Constructor
    Time() : hours(0), minutes(0), seconds(0) {}

    // Parameterized Constructor
    Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {}

    // Single Integer Constructor (total seconds)
    Time(int totalSeconds)
    {
        hours = totalSeconds / 3600;
        totalSeconds %= 3600;
        minutes = totalSeconds / 60;
        seconds = totalSeconds % 60;
    }

    // Display function
    void display()
    {
        cout << setfill('0') << setw(2) << hours << ":"
             << setfill('0') << setw(2) << minutes << ":"
             << setfill('0') << setw(2) << seconds << endl;
    }
};

int main()
{
    // Using Default Constructor
    Time t1;
    cout << "Default Constructor: ";
    t1.display();

    // Using Parameterized Constructor
    Time t2(12, 30, 45);
    cout << "Parameterized Constructor: ";
    t2.display();

    // Using Single Integer Constructor
    Time t3(3665); // 1 hour, 1 minute, and 5 seconds
    cout << "Single Integer Constructor: ";
    t3.display();

    return 0;
}