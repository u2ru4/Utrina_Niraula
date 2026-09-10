#include<iostream>
using namespace std;
class student //defining a class name student
{
    private:
    int marks; //private data member
    public:
    void setmarks(int m) //function as setmarks and takes one
                        //integer parameter
    {
        marks=m; //assinging the value passed in m to the 
                //member variable marks
    }
    void compare(student s)
    {
        if(marks > s.marks)
         cout<<"first student has higher marks."<<endl;
        else if(marks < s.marks)
         cout<<"second student has higher marks."<<endl;
        else
         cout<<"both have equal marks"<<endl;
    }
};
int main()
{
    student s1, s2;
    s1.setmarks(80);
    s2.setmarks(90);
    

    s1.compare(s2);
    
    return 0;
}