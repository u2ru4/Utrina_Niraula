#include<iostream>
using namespace std;
class Distance
{
    private:
    int feet;
    int inches;
    public:
    Distance(int f=0,int i=0)//constructor
    {
        feet=f;
        inches=i;
    }
    friend Distance operator+(Distance d1, Distance d2);
    //friend function declaration and also overload+ operator declared
    void display()
    {
        cout<<feet<<"feet"<<inches<<"inches"<<endl;
    }
    
};
Distance operator+(Distance d1, Distance d2)
//actual implementation of the overload+operator 
{
    Distance result;
    result.feet= d1.feet + d2.feet;
    result.inches= d1.inches+ d2.inches;

    if(result.inches >=12)
    //normalization because checks whether inches exceed 12
    //because 1 foot = 12 inches
    {
        result.feet++;
        result.inches -= 12;
    }
    return result;
}
int main()
{
    Distance d1(5,8);
    Distance d2(4,10);
    Distance sum= d1+d2;
    cout<<"first distance: ";
    d1.display();
    cout<<"second distance: ";
    d2.display();

    cout<<"sum: ";
    sum.display();
    
    return 0;

}
