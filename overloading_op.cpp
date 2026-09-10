/*operator overloading is a feature of c++ that allows us to give a special
meaning to an existing operator when it is used with objects of a class
rules:
only existing operator can be oveloaded,
at least one operand must be an object of a userdefined type,
the precedence and associativity of an operator cannot be changed,
the number of operands cannot be changed,
operators such as ::,.,.*,?:, and sizeof cannot be overloaded.
program to add two real numbers using operator overloading*/
#include<iostream>//use of input and output
using namespace std;//standard library
class real//defines a class name real
{
    private: //default constructor
    float value;
    public:
    real()
    {
        value=0;
    }
    real(float v)//parameterized constructor
    {
        value=v;
    }
    real operator+(real r)//operator overloading
    {
        real temp;//temporary object
        temp.value = value + r.value;//adds the current objects value and passed objects value
        return temp;//return the temporary object containing the sum
    }
    void display()
    {
        cout<<"sum= "<<value<<endl;
    }
};
int main()
{
    real r1(10.3);
    real r2(20.8);

    real r3;
    r3=r1+r2;
    r3.display();
    return 0;
}
