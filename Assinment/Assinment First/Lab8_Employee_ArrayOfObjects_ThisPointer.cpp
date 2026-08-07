/*Lab 8 (Array of Objects & this pointer): Create a class Employee with data members id, name,
and salary. Write a member function setData() that uses the this pointer to assign values.
In main(), create an array of Employee objects, take input for 5 employees, and then write
a function (or a member function) to find and display the employee with the highest salary.*/
#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    int id;
    string name;
    double salary;

public:
    // Member function to set employee data using this pointer
    void setData(int empId, string empName, double empSalary)
    {
        this->id = empId;
        this->name = empName;
        this->salary = empSalary;
    }

    // Member function to display employee data
    void display()
    {
        cout << "Employee ID: " << id << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Employee Salary: " << salary << endl;
    }

    // Member function to get employee salary
    double getSalary()
    {
        return salary;
    }
};

int main()
{
    int num = 5;
    Employee emp[num];

    // Input data for employees
    for (int i = 0; i < num; ++i)
    {
        int empId;
        string empName;
        double empSalary;

        cout << "Enter details for Employee " << (i + 1) << ":" << endl;
        cout << "ID: ";
        cin >> empId;
        cin.ignore(); // Ignore newline character after ID input
        cout << "Name: ";
        getline(cin, empName);
        cout << "Salary: ";
        cin >> empSalary;

        emp[i].setData(empId, empName, empSalary);
        cout << endl;
    }

    // Find and display the employee with the highest salary
    int highest = 0;
    for (int i = 1; i < num; ++i)
    {
        if (emp[i].getSalary() > emp[highest].getSalary())
        {
            highest = i;
        }
    }

    cout << "Employee with the highest salary:" << endl;
    emp[highest].display();

    return 0;
}