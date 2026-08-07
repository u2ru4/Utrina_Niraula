#include <iostream>
using namespace std;

template <typename T>
T maxOf(T a, T b)
{
    cout << "[Template 2-arguments]" << endl;
    return (a > b) ? a : b;
}

template <typename T>
T maxOf(T a, T b, T c)
{
    cout << "[Template 3-arguments]" << endl;
    return maxOf(maxOf(a, b), c);
}

int maxOf(int a, int b)
{
    cout << "[Non-template ]" << endl;
    return (a > b) ? a : b;
}

int main()
{
    cout << maxOf(10, 20) << endl;
    cout << maxOf(10, 20, 30) << endl;
    cout << maxOf(4, 9, 7) << endl;
    return 0;
}