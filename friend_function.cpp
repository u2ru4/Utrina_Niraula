#include<iostream>
using namespace std;
class student
{
    private:
    int marks = 80;

    public:
    friend void display(student s);
};
void display(student s)
{
    cout<<"marks= "<<s.marks<<endl;
}
int main()
{
    student s;
    display(s);
    
    return 0;
}