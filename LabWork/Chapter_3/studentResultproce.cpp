#include <iostream>
#include <iomanip>
using namespace std;

// Overload function for 2 subjects
double calculateAverage(double sub1, double sub2)
{
    return (sub1 + sub2) / 2;
}

// Overload function for 3 subjects
double calculateAverage(double sub1, double sub2, double sub3)
{
    return (sub1 + sub2 + sub3) / 3;
}

// Overload function for 4 subjects
double calculateAverage(double sub1, double sub2, double sub3, double sub4)
{
    return (sub1 + sub2 + sub3 + sub4) / 4;
}

// Overload function for 5 subjects
double calculateAverage(double sub1, double sub2, double sub3, double sub4, double sub5)
{
    return (sub1 + sub2 + sub3 + sub4 + sub5) / 5;
}

// Inline function to determine pass/fail based on average marks
inline bool isPass(double average)
{
    return average >= 40; // Pass if average is 40 or above
}

int main()
{
    cout << " STUDENT RESULT PROCESSING SYSTEM" << endl;
    int numSubjects;
    cout << "\nEnter number of subjects (2, 3, 4, or 5): ";
    cin >> numSubjects;

    double sub1, sub2, sub3, sub4, sub5;

    cout << "Enter marks for Subject 1: ";
    cin >> sub1;
    cout << "Enter marks for Subject 2: ";
    cin >> sub2;

    if (numSubjects >= 3)
    {
        cout << "Enter marks for Subject 3: ";
        cin >> sub3;
    }
    if (numSubjects >= 4)
    {
        cout << "Enter marks for Subject 4: ";
        cin >> sub4;
    }
    if (numSubjects == 5)
    {
        cout << "Enter marks for Subject 5: ";
        cin >> sub5;
    }

    // Validate marks input
    if (sub1 < 0 || sub1 > 100 || sub2 < 0 || sub2 > 100 || (numSubjects >= 3 && (sub3 < 0 || sub3 > 100)) ||
        (numSubjects >= 4 && (sub4 < 0 || sub4 > 100)) || (numSubjects == 5 && (sub5 < 0 || sub5 > 100)))
    {
        cout << "Error: Marks should be between 0 and 100." << endl;
        return 1; // Exit when invalid marks are entered
    }

    double average;
    if (numSubjects == 2)
    {
        average = calculateAverage(sub1, sub2);
    }
    else if (numSubjects == 3)
    {
        average = calculateAverage(sub1, sub2, sub3);
    }
    else if (numSubjects == 4)
    {
        average = calculateAverage(sub1, sub2, sub3, sub4);
    }
    else if (numSubjects == 5)
    {
        average = calculateAverage(sub1, sub2, sub3, sub4, sub5);
    }

    // display final results
    cout << "\nFinal Results:";
    cout << fixed << setprecision(2);
    cout << "\nAverage Marks: " << average << endl;
    cout << (isPass(average) ? "Result: Pass" : "Result: Fail") << endl;
    return 0;
}