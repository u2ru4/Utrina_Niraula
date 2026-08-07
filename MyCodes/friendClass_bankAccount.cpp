/* Write a C++ program to demonstrate the concept of a friend class in a Bank
Management System for accessing and displaying private data members.*/
#include <iostream>
#include <string>
using namespace std;

class Account
{
private:
    int accountNumber;
    double balance;

public:
    Account(int accNum, double bal) : accountNumber(accNum), balance(bal) {}

    friend class Bank;
};

class Manager
{
private:
    string name;
    int id;

public:
    Manager(string n, int i) : name(n), id(i) {}

    friend class Bank;
};

class Bank
{
public:
    void showAccountDetails(Account &acc)
    {
        cout << "Account Number: " << acc.accountNumber << endl;
        cout << "Balance: " << acc.balance << endl;
    }

    void showManagerDetails(Manager &mgr)
    {
        cout << "Manager Name: " << mgr.name << endl;
        cout << "Manager ID: " << mgr.id << endl;
    }
};

int main()
{
    Account acc(10562, 5000.50);
    Manager mgr("Narayan", 1025);

    Bank bank;
    bank.showAccountDetails(acc);
    bank.showManagerDetails(mgr);

    return 0;
}