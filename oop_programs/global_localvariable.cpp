#include<iostream>
using namespace std;
int global=100;
void display(){
    int local=50;
    cout<<"global variable:"<<global<<endl;
    cout<<"local variable:"<<local<<endl;
}
int main(){
    display();
    cout<<"global variable in main:"<<global<<endl;
    return 0;
}