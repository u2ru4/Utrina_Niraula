#include <iostream>
using namespace std;

class Base
{
public:
    void display()
    {
        std::cout << "I am Base Class." << std::endl;
    }
};
class Derived : public Base
{
public:
    void display()
    {
        std::cout << " I am Derived Class." << std::endl;
    }
};

int main()
{
    Base *ptr;
    Derived d;
    ptr = &d;
    ptr->display();
    return 0;
}