#include <iostream>
using namespace std;

int maxOf(int a, int b)
{
    return (a > b) ? a : b;
}

double maxOf(double a, double b)
{
    return (a > b) ? a : b;
}

char maxOf(char a, char b)
{
    return (a > b) ? a : b;
}

int main()
{
    int x = 10, y = 20;
    cout << "Max of " << x << " and " << y << " is: " << maxOf(x, y) << endl;

    double p = 5.555697, q = 3.3265846;
    cout << "Max of " << p << " and " << q << " is: " << maxOf(p, q) << endl;

    char m = 'A', n = 'B';
    cout << "Max of '" << m << "' and '" << n << "' is: '" << maxOf(m, n) << "'" << endl;

    return 0;
}