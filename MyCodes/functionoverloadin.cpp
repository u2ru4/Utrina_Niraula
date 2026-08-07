#include <iostream>
using namespace std;  

//overloaded  function calculate the area
double area(double length, double width){
    return length * width;  
}

double area(double radius){
    return 3.14 * radius * radius;  
}

int main(){
    cout << "Enter length and width of rectangle: ";
    double length, width;   
    cin >> length >> width;
    cout << "Area of rectangle: " << area(length, width) << endl;   

    cout << "Enter radius of circle: ";
    double radius;
    cin >> radius;
    cout << "Area of circle: " << area(radius) << endl;

    return 0;
}