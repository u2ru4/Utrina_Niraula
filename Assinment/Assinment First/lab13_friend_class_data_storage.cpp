/* Lab 13 (Friend Class): Design a class DataStorage with private data members
(int secret). Create a friend class DataProcessor that can access and modify the
secret value in DataStorage. Demonstrate this by creating objects of both
classes and having DataProcessor manipulate the data.*/

#include <iostream>
using namespace std;

class DataProcessor; // Forward declaration

class DataStorage
{
private:
    int secret;

public:
    // Constructor
    DataStorage(int s)
    {
        secret = s;
    }

    // Declare DataProcessor as a friend class
    friend class DataProcessor;
};

class DataProcessor
{
public:
    // Display the secret value
    void displaySecret(DataStorage &d)
    {
        cout << "Secret Value: " << d.secret << endl;
    }

    // Modify the secret value
    void modifySecret(DataStorage &d, int newValue)
    {
        d.secret = newValue;
        cout << "Secret value has been modified." << endl;
    }
};

int main()
{
    int secretValue, newSecret;

    cout << "Enter the initial secret value: ";
    cin >> secretValue;

    DataStorage data(secretValue);
    DataProcessor processor;

    cout << "\nBefore Modification:" << endl;
    processor.displaySecret(data);

    cout << "\nEnter the new secret value: ";
    cin >> newSecret;

    processor.modifySecret(data, newSecret);

    cout << "\nAfter Modification:" << endl;
    processor.displaySecret(data);

    return 0;
}