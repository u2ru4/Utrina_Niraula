#include<iostream>
#include<string>
using namespace std;
class student
{
    protected:
    int rollno;
    public:
    void setstudent(int r)
    {
        rollno=r;
    }
    void displaystudent()
    {
        cout<<"roll no: "<<rollno<<endl;
    }
};
class employee
{
    protected:
    int empid;
    public:
    void setemployee(int e)
    {
        empid=e;
    }
    void displayemployee()
    {
        cout<<"employee id: "<<empid<<endl;
    }
};
class teachingassistant: public student,public employee
//this is the multilevelinheritance derived with two classes
{
    private:
    string name;
    public:
    void setta(string n,int r,int e)
    {
        name=n;
        rollno=r;
        empid=e;
    }
    void displayta()
    {
        cout<<"name: "<<name<<endl;
        cout<<"roll no: "<<rollno<<endl;
        cout<<"employee: "<<empid<<endl;
    }
};
int main()
{
    teachingassistant ta;
    ta.setta("utrina niraula",101,5001);
    cout<<"teaching assistant details: "<<endl;
    ta.displayta();
    return 0;
}