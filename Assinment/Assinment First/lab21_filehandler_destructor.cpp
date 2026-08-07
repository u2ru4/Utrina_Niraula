/* Lab 21 (Destructor - Resource Management): Write a class FileHandler that has
a FILE* pointer. The constructor should open a file (provided as a string) in write
mode, and the destructor should close the file. In main(), create an object of
FileHandler and write a few lines to the file. Ensure the file is properly closed
when the object goes out of scope. */

#include <iostream>
#include <cstdio>
using namespace std;

class FileHandler
{
private:
    FILE *file;

public:
    // Constructor
    FileHandler(const char *filename)
    {
        file = fopen(filename, "w");

        if (file != NULL)
        {
            cout << "File opened successfully." << endl;
        }
        else
        {
            cout << "Error opening file." << endl;
        }
    }

    // Function to write data into the file
    void writeToFile(const char *text)
    {
        if (file != NULL)
        {
            fprintf(file, "%s\n", text);
        }
    }

    // Destructor
    ~FileHandler()
    {
        if (file != NULL)
        {
            fclose(file);
            cout << "File closed successfully." << endl;
        }
    }
};

int main()
{
    // Create FileHandler object
    FileHandler fileObj("output.txt");

    // Write data to the file
    fileObj.writeToFile("Welcome to C++ Programming.");
    fileObj.writeToFile("This file is created using FileHandler class.");
    fileObj.writeToFile("Destructor automatically closes the file.");

    cout << "Data written to file." << endl;

    return 0;
}