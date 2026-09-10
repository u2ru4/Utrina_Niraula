/*A constructor is a special member function of a
class that is automatically called when an object is
created.it has the same name as the class and has no
return type.Types of constructor:
Default constructor:a constructor that takes no argument
Parameterized '':constructor tha take one or more argument
Copy constructor: that creates a new object by copying 
the data of existing object*/
#include<iostream>//preprocessor directive cin cout library
using namespace std;//contains standard c++ objects and function
class student//blueprint 
{
    private://acess specifier
    int marks;//declares integer variable named marks
    public://outside the class the member is delared
    student(int m)//parameterized constructor
    {
        marks= m;//assigned value pass through m to the data member marks
    }
    student(const student &s)//copy constructor &srefrence to another student object
    {
        marks=s.marks;//copies the value of marks from object s to the new object
    }
    void display()//void means its doesnot return any value display is member function
    {
        cout<<"marks= "<<marks<<endl;//prints the value of marks
    }
};
int main()
{
    student s1(76);//creates object s1 calls the parameterized constructor marks of s1 becomes 85
    student s2(s1);//creates object s2 calls the copy constructor copies marks from s1 to s2
    cout<<"first object:"<<endl;
    s1.display();
    cout<<"copied object:"<<endl;
    s2.display();
    return 0;
}