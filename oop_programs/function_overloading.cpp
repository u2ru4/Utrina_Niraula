//Write a program to calculate the area of a circle, a rectangle,
// and a triangle using overloaded functions named area().
#include<iostream>
using namespace std;
float area(float radius)
{
    return 3.14159 * radius * radius;
}
float area(float length , float breadth)
{
    return length * breadth;
}
float area(float base , float height , char)
{
    return 0.5 * base * height;
}
int main()
{
    float r, l, b, base, height ;
    cout<<"enter the radius: ";
    cin>>r;
    cout<<"area of circle is: "<<area(r)<<endl;

    cout<<"\nenter the length and breadth:";
    cin>>l>>b;
    cout<<"area of rectangle is: "<<area(l,b)<<endl;

    cout<<"\nenter the base and height:  ";
    cin>> base >> height ;
    cout<<"area of a triangle is: "<<area(base,height,'t')<<endl;
    return 0;
}