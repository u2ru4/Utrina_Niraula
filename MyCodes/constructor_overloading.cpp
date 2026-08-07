// Write a C++ program to demonstrate constructor overloading.
#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    Student()
    {
        name = "Unknown";
        age = 0;
    }
    // function overloading of constructor
    Student(string n)
    {
        name = n;
        age = 0;
    }

    Student(string n, int a)
    {
        name = n;
        age = a;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }

private:
    string name;
    int age;
};

int main()
{
    Student student1;                // Default constructor
    Student student2("Pawan");       // Constructor with one parameter
    Student student3("Narayan", 18); // Constructor with two parameters

    cout << "Student 1 details:" << endl;
    student1.display();

    cout << "Student 2 details:" << endl;
    student2.display();

    cout << "Student 3 details:" << endl;
    student3.display();

    return 0;
}