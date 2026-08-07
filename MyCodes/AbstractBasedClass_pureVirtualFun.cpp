#include <iostream>
using namespace std;

// Abstract class with pure virtual function
class Account
{
public:
    virtual void CalculateInterest() = 0; // Pure virtual function
};

class SavingAccount : public Account
{
public:
    void CalculateInterest()
    {
        cout << "Saving Intrest: 8%" << endl;
    }
};
class CurrentAccount : public Account
{
public:
    void CalculateInterest()
    {
        cout << "Current account Intrest: 0%" << endl;
    }
};

int main()
{
    SavingAccount s;
    CurrentAccount c;

    s.CalculateInterest();
    c.CalculateInterest();

    return 0;
}