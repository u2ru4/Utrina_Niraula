#include <iostream>
#include <iomanip>
using namespace std;

// Overload function for Full-time employee (basic salary only)
double calculateSalary(double basicSalary)
{
    return basicSalary;
}

// Overload function for Employee with bonus
double calculateSalary(double basicSalary, double bonus)
{
    return basicSalary + bonus;
}

// Overload function for Employee with bonus and overtime
double calculateSalary(double basicSalary, double bonus, double overtimeHours, double hourlyRate)
{
    double overtimePay = overtimeHours * hourlyRate;
    return basicSalary + bonus + overtimePay;
}

// Inline function to calculate 10% tax
inline double taxDeduction(double salary)
{
    return salary * 0.1; // 10% tax rate
}

// Function to display salary details
void displaySalaryDetails(double grossSalary)
{
    double tax = taxDeduction(grossSalary);

    cout << "\n"
         << "=== Employee Salary ===" << endl;
    cout << "Gross Salary:  Rs. " << grossSalary << endl;
    cout << "Tax (10%):     Rs. " << tax << endl;
    cout << "Net Salary:    Rs. " << grossSalary - tax << endl;
}

int main()
{

    cout << "   EMPLOYEE SALARY MANAGEMENT SYSTEM" << endl;
    double basicSalary, bonus, overtimeHours, hourlyRate;
    int employeeType;

    cout << "\nSelect Employee Type:" << endl;
    cout << "1. Full-time Employee (Basic Salary only)" << endl;
    cout << "2. Employee with Bonus" << endl;
    cout << "3. Employee with Bonus and Overtime" << endl;
    cout << "Enter choice (1/2/3): ";
    cin >> employeeType;

    cout << "Enter Basic Salary: Rs. ";
    cin >> basicSalary;

    double grossSalary;

    if (employeeType == 1)
    {
        // Full-time employee - basic salary only
        grossSalary = calculateSalary(basicSalary);
    }
    else if (employeeType == 2)
    {
        // Employee with bonus
        cout << "Enter Bonus: Rs. ";
        cin >> bonus;
        grossSalary = calculateSalary(basicSalary, bonus);
    }
    else if (employeeType == 3)
    {
        // Employee with bonus and overtime
        cout << "Enter Bonus: Rs. ";
        cin >> bonus;

        cout << "Enter Overtime Hours: ";
        cin >> overtimeHours;

        cout << "Enter Hourly Rate: Rs. ";
        cin >> hourlyRate;

        grossSalary = calculateSalary(basicSalary, bonus, overtimeHours, hourlyRate);
    }
    else
    {
        cout << "Invalid choice! Using basic salary only." << endl;
        grossSalary = calculateSalary(basicSalary);
    }

    displaySalaryDetails(grossSalary);

    return 0;
}
