#include <iostream>
using namespace std;

// base class
class Animal
{
public:
    // virtual function enables overriding in derived classes virtual void speak()
    virtual void speak()

    {
        cout << "Animal makes a sound." << endl;
    }
};

// derived class
class Dog : public Animal
{
public:
    // overriding keyword c++11+ ensures the signatures match correctly
    void speak() override
    {
        cout << "Woof! Woof!" << endl;
    }
};

int main()
{
    // create a base class pointer
    Animal *ptr;

    // create  an object of the derived class Dog mydog
    Dog mydog;

    // point the base pointer to the derived class object
    ptr = &mydog;

    ptr->speak();
}