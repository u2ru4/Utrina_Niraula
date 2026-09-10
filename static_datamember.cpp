#include<iostream>
using namespace std;
class student //blueprint
{
    private:
    static int count; //count is our variable *a static datamember
                      //has only one copy for the enire class,
                      //instead of one copy for every object

    public://the function written below it can be accessed from
              //outside the class
    student() //constructor, automatically called whenever a new 
              //student object is created
    {
        count++; //increment,increase by 1
    }
    void displaycount() //void doesnot return a value
    {
        cout<<"number of objecta created:"<<count<<endl;
    }
};
int student::count =0; // ::,is called the scope resolution operator
                      //maens the count variable belonging to student.
int main()
{
    student s1;
    student s2;
    student s3;

    s3.displaycount();

    student s4;
    s4.displaycount();

    return 0;
}