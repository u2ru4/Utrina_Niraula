/*Write a C++ program to demonstrate the use of an array of
objects for storing and displaying student information.*/
#include <iostream>
using namespace std;

class Student
{
private:
    char name[20];
    int age;

public:
    void getdata()
    {
        cout << "Enter the Name: ";
        cin >> name;
        cout << "Enter the age: ";
        cin >> age;
    }
    void putData()
    {
        cout << endl;
        cout << "The Name of Student: " << name << endl;
        cout << "The Age of Student: " << age << endl;
    }
};

int main()
{
    Student s[10];
    int n;
    cout << "Enter the Number of Student: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        s[i].getdata();
    }
    for (int i = 0; i < n; i++)
    {
        s[i].putData();
    }
}