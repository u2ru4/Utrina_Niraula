#include <iostream>
using namespace std;

//function declaration
int add(int x, int y){
    return x + y;
}

int main(){
    int a,b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    int result = add(a,b); //function call
    cout << "The sum is: " << result << endl;
    return 0;
}