/* Lab 2 (new & delete): Write a program that defines a Student struct with name
and rollNumber. In main(), dynamically allocate an array of Student objects
based on a user-provided number. Prompt the user to enter the data for each
student and then display it. Ensure proper deallocation of memory. */

#include <iostream>
#include <string>
using namespace std;

// Define the Student struct
struct Student
{
    string name;
    int rollNumber;
};

int main()
{
    // Create a Student object
    Student student;
    int n;

    // Enter the number of students
    cout << "Enter the number of students: ";
    cin >> n;
    Student *students = new Student[n];

    // Input data for each student
    for (int i = 0; i < n; i++)
    {
        cout << "Enter name for student " << (i + 1) << ": ";
        // Ignore the newline character left in the buffer
        cin.ignore();
        // Use getline to read the full name including spaces
        getline(cin, students[i].name);
        cout << "Enter roll number for student " << (i + 1) << ": ";
        cin >> students[i].rollNumber;
    }

    // Display the entered data
    cout << endl
         << "Student Details:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Student " << (i + 1) << ": " << students[i].name << endl;
        cout << "Roll Number: " << students[i].rollNumber << endl;
    }

    // Deallocate the dynamically allocated memory
    delete[] students;
    return 0;
}