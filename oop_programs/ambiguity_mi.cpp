/*#include<iostream>
using namespace std;
class a
{
    public:
    void show()
    {
        cout<<"utrina"<<endl;
    }
};
class b: public a
{

};
class c: public a
{

};
class d: public b, public c
{

};
int main()
{
    d obj;
    obj.b::show();
    obj.c::show();
    return 0;
}*/
//resolving the dimond problem using virtual base class
#include<iostream>
using namespace std;
class a
{
    public:
    int x;
    a()
    {
        x=10;
    }
};
class b: virtual public a//ensures that anly one shared copy of class a exists
//regardless of how many inheritance paths lead to it
{

};

class c: virtual public a
{

};
class d: public b,public c
{

};
int main()
{
    d obj;
    cout<<"value of x="<<obj.x<<endl;//class d contains only one a object
    //the ambiguity is removed, and obj.x can be accessed directly
    return 0;
}
//conclusion
/*ambiguity in multiple inheritance occurs when the compiler finds multiple
 inherited members
with same name. the diamond problen is a special case where two base classes
 share a common ancestor.
it can be resolved either by using the scope resolution or,more effectively,
by using virtual base classes which ensure only 
one copy of the common ancestor exists*/