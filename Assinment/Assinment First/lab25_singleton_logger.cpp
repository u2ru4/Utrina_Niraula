/* Lab 25 (Singleton Pattern with Static Members): Implement a Logger class that
logs messages to a file. The class should use the Singleton design pattern:
a. Make the constructor private.
b. Have a static data member instance (a pointer to the single Logger
object).
c. Have a static member function getInstance() that returns the single
instance.
d. Have a member function log(const string &message) to write to the file. In
main(), get the logger instance from multiple parts (e.g., in different
functions) and log messages. Verify that the same file handle is used.
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Logger
{
private:
    static Logger *instance; // Static pointer to single object
    ofstream file;           // File handle

    // Private constructor
    Logger()
    {
        file.open("log.txt", ios::app);

        if (file.is_open())
        {
            cout << "Log file opened successfully." << endl;
        }
    }

public:
    // Static function to return single instance
    static Logger *getInstance()
    {
        if (instance == NULL)
        {
            instance = new Logger();
        }

        return instance;
    }

    // Function to write message to file
    void log(const string &message)
    {
        if (file.is_open())
        {
            file << message << endl;
            cout << "Logged: " << message << endl;
        }
    }

    // Destructor
    ~Logger()
    {
        if (file.is_open())
        {
            file.close();
            cout << "Log file closed." << endl;
        }
    }
};

// Initialize static member
Logger *Logger::instance = NULL;

// Function 1
void functionOne()
{
    Logger *logger = Logger::getInstance();
    logger->log("Message from Function One");
}

// Function 2
void functionTwo()
{
    Logger *logger = Logger::getInstance();
    logger->log("Message from Function Two");
}

int main()
{
    Logger *logger = Logger::getInstance();

    logger->log("Program Started");

    functionOne();
    functionTwo();

    logger->log("Program Ended");

    return 0;
}