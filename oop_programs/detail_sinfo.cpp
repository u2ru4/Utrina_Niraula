#include<iostream>//input and output
#include<string>//student name store
using namespace std;//allows us to use standard library
class student//base class
{
    protected://can be acessed by the derived class
    int roll;
    string name;
    float marks1 ,marks2 ,marks3;
    public:
    student()//default constuctor
    {
        roll=0;
        name="";
        marks1=marks2=marks3=0;
    }
    student(int r,string n,float m1,float m2,float m3)
    //parameterized constructor
    {
        roll=r;
        name=n;
        marks1=m1;
        marks2=m2;
        marks3=m3;
    }
    void input()//takes input from user
    {
        cout<<"enter roll number:";
        cin>>roll;
        cout<<"enter name";
        cin>>name;
        cout<<"enter the marks:";
        cin>>marks1>>marks2>>marks3;
    }
    void display()//displays student info
    {
        cout<<"roll number: "<<roll<<endl;
        cout<<"name: "<<name<<endl;
        cout<<"enter marks1: "<<marks1<<endl;
        cout<<"enter marks2: "<<marks2<<endl;
        cout<<"enter marks3: "<<marks3<<endl;
    }
};
class result:public student//derived class
//result inherits all public and protected members of student
{
    private:
    float total;
    float percentage;
    public:
    result():student()//default constructor
    {
        total=0;
        percentage=0;
    }
    result(int r,string n,float m1,float m2,float m3):student(r,n,m1,m2,m3)
    //parameterized constructor
    {
        total=marks1+marks2+marks3;
        percentage =total/3.0;
    }
    void calculate()
    {
        total= marks1+marks2+marks3;
        percentage = total/3.0;
    }
    void displayresult()
    {
        display();
        cout<<"total marks: "<<total<<endl;
        cout<<"percentage: "<<percentage<<endl;

    }
};
int main()
{
    result student;
    //creates an object named student of class result
    student.input();
    student.calculate();
    cout<<"\n------student result------"<<endl;
    student.displayresult();
    return 0;
}