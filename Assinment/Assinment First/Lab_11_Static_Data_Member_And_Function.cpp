/* Lab 11 (Static Data Member & Function):
   Write a class Product with name and serialNumber.
   Use a static data member counter to automatically generate
   a unique serial number for each Product object created.
   Write a static member function getTotalProducts() that
   returns the total number of Product objects created.
   Test your class in main() by creating multiple objects
   and displaying their serial numbers and the total count.
*/

#include <iostream>
#include <string>
using namespace std;

class Product
{
private:
    string name;
    int serialNumber;

    // Static data member
    static int counter;

public:
    // Constructor
    Product(string n)
    {
        name = n;
        counter++;
        serialNumber = counter; // Assign unique serial number
    }

    // Display product details
    void display()
    {
        cout << "Product Name   : " << name << endl;
        cout << "Serial Number  : " << serialNumber << endl;
        cout << endl;
    }

    // Static member function
    static int getTotalProducts()
    {
        return counter;
    }
};

// Initialize static data member
int Product::counter = 1000; // Starting serial number from 1000

int main()
{
    Product p1("Laptop");
    Product p2("Mobile");
    Product p3("Printer");

    cout << "Product Details\n";
    cout << "---------------\n";

    p1.display();
    p2.display();
    p3.display();

    cout << "Total Products Created: "
         << Product::getTotalProducts() - 1000 << endl;

    return 0;
}