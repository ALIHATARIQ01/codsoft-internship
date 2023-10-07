#include <iostream>
#include <string>
using namespace std;
struct Task {
    string description;
    bool completed;
};

const int MAX_TASKS = 100; // Maximum number of tasks

Task tasks[MAX_TASKS];
int taskCount = 0;

// Function to add a task to the list
void addTask(const string& display) {
    if (taskCount < MAX_TASKS)
    {
        tasks[taskCount].description = display;
        tasks[taskCount].completed = false;
        ++taskCount;
        cout << "Task '" << display << "' added.\n";
    }
    else {
        cout << "Task list is full. Cannot add more tasks.\n";
    }
}

// Function to view tasks with their status
void viewTasks() {
    if (taskCount == 0) {
        cout << "No tasks found.\n";
    }
    else {
        cout << "Tasks:\n";
        for (int i = 0; i < taskCount; ++i)
        {
            const string status = tasks[i].completed ? "Completed" : "Pending";
            cout << i + 1 << ". [" << status << "] " << tasks[i].description << "\n";
        }
    }
}

// Function to mark a task as completed
void markCompleted(int taskIndex) 
{
    if (taskIndex > 0 && taskIndex <= taskCount)
    {
        tasks[taskIndex - 1].completed = true;
        cout << "Task marked as completed.\n";
    }
    else 
    {
        cout << "Invalid task number.\n";
    }
}

// Function to remove a task
void removeTask(int taskIndex)
{
    if (taskIndex > 0 && taskIndex <= taskCount) {
        // Shift tasks to the left to remove the task
        for (int i = taskIndex - 1; i < taskCount - 1; ++i) {
            tasks[i] = tasks[i + 1];
        }
        --taskCount;
        cout << "Task removed.\n";
    }
    else {
        cout << "Invalid task number.\n";
    }
}

int main()
{
    while (true)
    {
        cout << "\nOptions:\n";
        cout << "1. Add Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Mark Task as Completed\n";
        cout << "4. Remove Task\n";
        cout << "5. Quit\n";

        int choice;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            string taskDescription;
            cout << "Enter task description: ";
            cin.ignore();
            getline(cin, taskDescription);
            addTask(taskDescription);
        }
        else if (choice == 2)
        {
            viewTasks();
        }
        else if (choice == 3)
        {
            int taskIndex;
            cout << "Enter task number to mark as completed: ";
            cin >> taskIndex;
            markCompleted(taskIndex);
        }
        else if (choice == 4) {
            int taskIndex;
            cout << "Enter task number to remove: ";
            cin >> taskIndex;
            removeTask(taskIndex);
        }
        else if (choice == 5) {
            break;
        }
        else {
            cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}
