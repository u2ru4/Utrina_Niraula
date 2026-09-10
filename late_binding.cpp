#include<iostream>
using namespace std;
class base
{
    public:
    virtual void show()//virtual means it tells compiler do 
    //not decide which function to call now.decide later when the program 
    //is running 
    {
        cout<<"base class"<<endl;
    }
};
class derived: public base//derived inherits base
{
    public:
    void show()//overides it eventhough it is in first base class
    {
        cout<<"derived class"<<endl;
    }
};
int main()
{
    base *ptr;
    derived d;//created derived object

    ptr =&d;//because derived inherits from base
    //a base pointer can point to a derived object
    //this is a fundamental rule in inheritance
    ptr ->show();//(*ptr).show()
    //go to the object being pointed to and call show()
    return 0;
}