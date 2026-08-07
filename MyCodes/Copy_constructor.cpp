// Write a C++ program to demonstrate the use of a copy constructor.
#include <iostream>
using namespace std;

class Person
{
private:
    string name;
    int age;

public:
    Person(string n, int a) : name(n), age(a) {}

    // Copy constructor
    Person(const Person &p) : name(p.name), age(p.age) {}

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main()
{
    Person person1("Narayan", 18);
    Person person2 = person1; // Using the copy constructor

    cout << "Person 1 details:" << endl;
    person1.display();

    cout << "Person 2 details (copied from Person 1):" << endl;
    person2.display();

    return 0;
}