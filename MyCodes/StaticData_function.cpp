// A program that outputs the total number of students (objects) recorded using a static data member.
#include <iostream>
using namespace std;

class Student
{
public:
    static int count;

    Student()
    {
        count++;
    }

    static int Average(double marks1, double marks2)
    {
        return (marks1 + marks2) / 2;
    }
};

int Student::count = 0;

int main()
{
    Student s1;
    Student s2;
    Student s3;

    double avg1 = Student::Average(85.5, 92.0);
    double avg2 = Student::Average(78.0, 88.5);
    double avg3 = Student::Average(90.0, 95.0);

    cout << "Total number of students: " << Student::count << endl;

    cout << "Average marks of First student: " << avg1 << endl;
    cout << "Average marks of Second student: " << avg2 << endl;
    cout << "Average marks of Third student: " << avg3 << endl;

    return 0;
}