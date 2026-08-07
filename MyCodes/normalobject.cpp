#include<iostream>
using namespace std;
class student{
    public:
    int id;
    string name;
    void display(){
        cout<<"Student Object Created using new keyword."<<endl;
    }
};
int main(){
    student *s = new student; // Dynamically allocate a student object
    s->display(); // Call the display function using the pointer
    delete s; // Free memory    
    return 0;
}