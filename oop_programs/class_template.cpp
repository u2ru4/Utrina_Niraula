/*a class template is a blueprint for creating classes that can work 
with different data types such as int,float,char,etc
Syntax:
template<class t>
class classname
{
};
advantages are; code reuseability, type independence, 
reduced code duplication,
easier maintainance*/
//it uses lifo(last in first out)
#include<iostream>
using namespace std;
template<class t>//class t allows one class to work with different data type
class stack
{
    private:
    t arr[10];//stores stack elements
    int top;
    public:
    stack()//contructor
    {
        top=-1;//-1 means stack is empty
    }
    void push(t value)
    {
        if(top==9)
        {
            cout<<"stack overflow"<<endl;
            return;
        }
        arr[++top]=value;
    }
    void pop()//removes the top element
    {
        if(top == -1)
        {
            cout<<"stack underflow"<<endl;
            return;
        }
        top--;
    }
    void display()
    {
        if(top==-1)
        {
            cout<<"stack is empty"<<endl;
            return;
        }
        for(int i=top;i>=0;i--)
        cout<<arr[i]<<"";
        cout<<endl;
    }
};
int main()
{
    stack<int> s;//compiler replacs t with int
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<"stack elements: \n";
    s.display();
    s.pop();
    cout<<"after pop: \n";
    s.display();
    return 0;

}