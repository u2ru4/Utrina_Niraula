#include<iostream>
using namespace std;
class employee//absract base class because it has pure 
//pure virtual function in int
{
    protected:
    string name;
    public:
    employee(string n)//constructor
    {
        name=n;
    }
    virtual void salary()=0;//pure virtual function =0
};
class manager:public employee
{
    private:
    double basicsalary;
    double bonus;
    public:
    manager(string n,double bs,double b):employee(n)
    //constructor initializer list
    {
        basicsalary=bs;
        bonus=b;
    }
    void salary()//overriding salary
    {
        double totalsalary= basicsalary+bonus;
        cout<<"manager name: "<<name<<endl;
        cout<<"basic salary: "<<basicsalary<<endl;
        cout<<"bonus: "<<bonus<<endl;
        cout<<"total salary: "<<totalsalary<<endl;
    }
};
int main()
{
    employee *emp;//creates a pointer of type employee
    manager m("ram sharma",50000,10000);
    emp = &m;
    (*emp).salary();//run time polymorphism
    //call salary() using the object being pointed to
    return 0;
}