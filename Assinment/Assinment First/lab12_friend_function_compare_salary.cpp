/*Lab 12 (Friend Function): Create two classes Manager and Worker. Both have
private data members for salary. Write a friend function compareSalary(const
Manager &m, const Worker &w) that compares their salaries and prints who
earns more (or if they are equal).*/

#include <iostream>
using namespace std;

class Worker; // Forward declaration

class Manager
{
private:
    double salary;

public:
    Manager(double s) : salary(s) {}

    // declare friend function
    friend void compareSalary(const Manager &m, const Worker &w);
};

class Worker
{
private:
    double salary;

public:
    Worker(double s) : salary(s) {}

    // declare friend function
    friend void compareSalary(const Manager &m, const Worker &w);
};

// Friend function definition
void compareSalary(const Manager &m, const Worker &w)
{
    if (m.salary > w.salary)
    {
        cout << "Manager earns more: " << m.salary << endl;
    }
    else if (m.salary < w.salary)
    {
        cout << "Worker earns more: " << w.salary << endl;
    }
    else
    {
        cout << "Both earn the same: " << m.salary << endl;
    }
}

int main()
{
    double managerSalary, workerSalary;

    cout << "Enter Manager's salary: ";
    cin >> managerSalary;
    Manager m(managerSalary);

    cout << "Enter Worker's salary: ";
    cin >> workerSalary;
    Worker w(workerSalary);

    // call the friend function to compare salaries
    compareSalary(m, w);

    return 0;
}