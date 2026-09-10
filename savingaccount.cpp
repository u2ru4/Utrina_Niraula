/*Write a C++ program to create an Account class to manage Savings Bank
Account. Define constructor for this class. Define a method to display
the account details including current balance in the account. Also
define and implement a friend function to calculate simple interest. 
Make necessary assumptions required.*/
#include<iostream>
#include<string>
using namespace std;
class account
{
    private:
       int accountno;
       string name;
       double balance;
    public:
       account(int accno, string n, double bal)
       {
        accountno = accno;
        name = n;
        balance = bal;
       }
    void display()
    {
        cout<<"account number: "<<accountno<<endl;
        cout<<"account holder: "<< name<<endl;
        cout<<"current balance: rs."<<balance<<endl;
    }
    friend void calculateinterest(account a,float rate, int time);
    
    
};
void calculateinterest(account a, float rate, int time)
{
    double interest;
    interest=(a.balance*rate*time)/100;
    cout<<"simple interest:rs."<<interest<<endl;
    cout<<"balance after interest: rs. "
        <<a.balance + interest <<endl;
}
int main()
{
    account acc(1001,"ram sharma",50000);
    cout <<"account details"<<endl;
    cout<<"------------------"<<endl;
    acc.display();
    calculateinterest(acc,8.5,2);
    return 0;
}