// WAP to demonstrate the use of 'this' pointer in C++.
#include <iostream>
using namespace std;

class Teacher
{
private:
    string name;
    int age;

public:
    Teacher(string name, int age)
    {
        this->name = name;
        this->age = age;
    }

    void displayInfo()
    {
        cout << "Teacher Name: " << this->name << endl;
        cout << "Teacher Age: " << this->age << endl;
    }
};

int main()
{
    Teacher teacher("Pawan", 35);
    teacher.displayInfo();

    return 0;
}