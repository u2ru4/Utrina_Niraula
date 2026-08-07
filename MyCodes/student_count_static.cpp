// Write a C++ program to demonstrate the use of static data members and static member functions in a class.
#include <iostream>
using namespace std;

class Student
{
private:
    int rollNo; // Non-static data member

public:
    static int count; // Static data member

    Student(int r)
    {
        rollNo = r;
        count++; // Increment count whenever an object is created
    }

    void display()
    {
        cout << "Roll No: " << rollNo << endl;
    }
};

// Definition and initialization of static data member
int Student::count = 0;

int main()
{
    Student s1(101);
    Student s2(102);
    Student s3(103);
    Student s4(104);

    cout << "Student Details:" << endl;
    s1.display();
    s2.display();
    s3.display();
    s4.display();

    cout << "\nTotal Students Created: " << Student::count << endl;

    return 0;
}
