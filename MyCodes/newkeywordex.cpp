#include <iostream>
using namespace std;

int main(){
    int *p = new int; // Dynamically allocate an integer
    *p = 64; // Assign a value to the allocated memory
    
    cout << "Value of p:" <<*p << endl;
    delete p; // Free memory
    
    int *arr = new int[5]; 
    arr[0] = 12;
    delete[] arr; // Free memory allocated

    return 0;
}