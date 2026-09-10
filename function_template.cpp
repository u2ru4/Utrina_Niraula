#include<iostream>
using namespace std;
template<class t>//also cn be called like blueprint
//t is placeholder of datatype
t largest(t a , t b , t c, t d, t e)
{
    t max=a;//initialize maximum
    if (b>max)
    max=b;
    if(c>max)
    max=c;
    if(d>max)
    max=d;
    if(e>max)
    max = e;
    return max;
}
int main()
{
    int n1,n2,n3,n4,n5;//declares variable
    cout<<"enter five number:\n";
    cin>>n1>>n2>>n3>>n4>>n5;
    cout<<"largest number= "
    <<largest(n1,n2,n3,n4,n5);
    return 0;
}