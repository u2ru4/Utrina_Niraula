#include<iostream>
using namespace std;
class base
{
    public:
    base()
    {
        cout<<"base class constructor"<<endl;
    }
    ~base()
    {
        cout<<"base class destructor"<<endl;
    }
};
class derived:public base//derived inherits base
{
    public:
    derived()
    {
        cout<<"derived class destructor: "<<endl;
    }
    ~derived()
    {
        cout<<"derived class destructor: "<<endl;
    }
};
int main()
{
    derived obj;//it is creating an object of class derived
    return 0;
}

