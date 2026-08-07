#include <iostream>
#include <string>
using namespace std;

template <typename T1, typename T2>
void describe(T1 label, T2 value)
{
    cout << label << ": " << value << endl;
}

template <typename T>
T maxOf(T a, T b)
{
    return (a > b) ? a : b;
}

int main()
{
    describe("Age", 18);
    describe("Name", "Narayan");
    describe("Passed", true);

    cout << "max: " << maxOf(10, 20) << endl;


    return 0;
}