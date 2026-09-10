#include<iostream>
#include<string>
using namespace std;
class publication
{
    protected:
    string title;
    float price;
    public:
    publication(string t, float p)
    {
        title=t;
        price=p;
    }
    void display()
    {
        cout<<"title: "<<title<<endl;
        cout<<"price:rs. "<<price<<endl;
    }
};
class sales
{
    protected:
    float monthlysales;
    public:
    sales(float s)
    {
        monthlysales=s;
    }
    void displaysales()
    {
        cout<<"monthly sales: "<<monthlysales<<endl;
    }
};
class book:public publication,public sales
{
    private:
    string author;
    int pages;
    public:
    book(string t, float p, float s, string a,int pg):publication(t,p),sales(s)
    {
        author=a;
        pages=pg;
    }
    void display()
    {
        publication::display();//calls the display() function that 
        //belongs to publiction
        sales::displaysales();//calls the displaysales()function that
        //belongs to sales
        cout<<"author: "<<author<<endl;
        cout<<"page count: "<<pages<<endl;
    }
};
int main()
{
    book b("object oriented programming",850.5,12000,"bjaj strout",650);
    cout<<"book details"<<endl;
    cout<<"-------------"<<endl;
    b.display();
    return 0;
}