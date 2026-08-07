/* Lab 6 (Class & Access Specifiers): Design a class BankAccount with private data
members: accountNumber, holderName, balance. Provide public member  functions:
a. deposit(double amount).
b. withdraw(double amount) (should not allow withdrawal if balance is
insufficient).
c. display() to print account details. Write a program to create a
BankAccount object, perform a few transactions, and display the final
balance.*/

#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    string accountNumber;
    string holderName;
    double balance;

public:
    // Constructor to initialize account details
    BankAccount(string accNum, string name, double initialBalance)
    {
        accountNumber = accNum;
        holderName = name;
        balance = initialBalance;
    }

    // Member function to deposit amount into the account
    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposited: Rs." << amount << " into A/C " << accountNumber << endl;
        }
        else
        {
            cout << "Deposit amount must be positive." << endl;
        }
    }

    // Member function to withdraw amount from the account
    void withdraw(double amount)
    {
        if (amount > 0)
        {
            if (balance >= amount)
            {
                balance -= amount;
                cout << "Withdrew: Rs." << amount << " from A/C " << accountNumber << endl;
            }
            else
            {
                cout << "Insufficient balance for withdrawal." << endl;
            }
        }
        else
        {
            cout << "Withdrawal amount must be positive." << endl;
        }
    }

    // Member function to display account details
    void display()
    {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Holder Name: " << holderName << endl;
        cout << "Balance: Rs." << balance << endl;
    }
};

int main()
{
    // Create a BankAccount object
    BankAccount account("01750000569835", "Narayan Aryal", 1000.0);

    BankAccount account2("01750000425639", "Pawan Gyawali", 500.0);

    // Perform transactions
    account.deposit(500.0);  // Deposit 500
    account.deposit(-100.0); // Attempt to deposit a negative amount

    cout << endl;
    account2.deposit(200.0);  // Deposit 200 in second account
    account2.withdraw(300.0); // Withdraw 300 from second account

    cout << endl;
    account.withdraw(1400.0); // Attempt to withdraw more than balance
    account.withdraw(-50.0);  // Attempt to withdraw a negative amount

    cout << endl;
    account.display(); // Display account details
    cout << endl;
    account2.display(); // Display second account details

    return 0;
}
