#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> tasks;

    cout << "Welcome to Task List Tool!\n"
         << endl;
    cout << "Menu Options:" << endl;
    cout << "1. Add Task" << endl;
    cout << "2. View Tasks" << endl;
    cout << "3. Remove Task" << endl;
    cout << "4. Quit\n"
         << endl;

    cout << "Task list system initialized and ready!" << endl;

    int choice = 0;

    while (choice != 4)
    {
        cout << "Choose an option: ";
        cin >> choice;

        if (choice == 1)
        {
            cin.ignore();
            string task;
            cout << "Enter task description: ";
            getline(cin, task);
            tasks.push_back(task);
            cout << "Task \"" << task << "\" added successfully!" << endl;
            cout << "Total tasks: " << tasks.size() << endl;
        }
        else if (choice == 2)
        {
            if (tasks.empty())
            {
                cout << "No tasks available." << endl;
            }
            else
            {
                cout << "Your Tasks:" << endl;
                for (int i = 0; i < tasks.size(); i++)
                {
                    cout << (i + 1) << ". " << tasks[i] << endl;
                }
                cout << "Total tasks: " << tasks.size() << endl;
            }
        }
        else if (choice == 3)
        {
            int taskNumber;
            cout << "Enter the task number to remove: ";
            cin >> taskNumber;

            if (taskNumber <= 0 || taskNumber > tasks.size())
            {
                cout << "Error: Invalid task number. Please enter a number between 1 and " << tasks.size() << "." << endl;
            }
            else
            {
                int index = taskNumber - 1;
                string removedTaskDescription = tasks[index];

                tasks.erase(tasks.begin() + index);
                cout << "Task \"" << removedTaskDescription << "\" removed successfully!" << endl;

                if (tasks.empty())
                {
                    cout << "No tasks remaining." << endl;
                }
                else
                {
                    cout << "Remaining Tasks:" << endl;
                    for (int i = 0; i < tasks.size(); i++)
                    {
                        cout << (i + 1) << ". " << tasks[i] << endl;
                    }
                }
                cout << "Total tasks: " << tasks.size() << endl;
            }
        }
        else if (choice == 4)
        {
            cout << "Thank you for using Task List Tool!" << endl;
        }
        else
        {
            cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
