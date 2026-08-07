#include<iostream>
using namespace std;    

// Function with default arguments
void display(char c = '*', int count = 5){
    for(int i = 0; i < count; i++){
        cout << c;
    }
    cout << endl;
}
int main(){
   int count =5;
    
   cout << "No default arguments passed: ";
    display(); // Uses default arguments

    cout << "First character passed: ";
    display('A');

    cout << "Both arguments passed: ";
    display('$', 7);

    return 0;
}