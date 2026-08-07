#include <iostream>
#include <string>
using namespace std;

template <typename T>
void swapValues(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{

    int x = 10, y = 20;
    double p = 5.555697, q = 3.3265846;
    string m = "Hello", n = "World";

    swapValues(x, y);
    swapValues(p, q);
    swapValues(m, n);

    cout << "After swapping: " << endl;
    cout << "x: " << x << ", y: " << y << endl;
    cout << "p: " << p << ", q: " << q << endl;
    cout << "m: " << m << ", n: " << n << endl;

    return 0;
}