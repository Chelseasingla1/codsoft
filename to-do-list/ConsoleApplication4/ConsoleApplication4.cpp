
#include <iostream>
#include<windows.h>
#include <string>

using namespace std;

void print_tasks(string tasks[], int task_count) {
    cout << "Tasks to DO: " << endl;
    cout << "------------------------" << endl;
    for (int i = 0; i < task_count; i++) {
        cout << "Task " << i << " :" << tasks[i] << endl;
    }
}

int main()
{
    system("color a");
    string tasks[10] = { "" };
    int task_count = 0;

    int option = -1;
    while (option != 0) {
        cout << "--- TO DO LIST ----" << endl;
        cout << "1- To Add New task" << endl;
        cout << "2- to view Tasks" << endl;
        cout << "3- Delete the tasks " << endl;
        cout << "0- terminate the program" << endl;
        cin >> option;
            switch (option) {
            case 1:
            {
                if (task_count > 9) {
                    cout << "```Task list if full ``" << endl;

                }
                else {
                    cout << "enter a new task:";
                    cin.ignore();
                    getline(cin, tasks[task_count]);
                    task_count++;


                }
                break;
            }
            case 2:
                system("cls");
                print_tasks(tasks, task_count);
                break;

            case 3:
            {
                system("cls");
                print_tasks(tasks, task_count);
                int del_task = 0;
                cout<<" Enter a task number to delete: ";
                cin >> del_task;
                if (del_task < 0 || del_task>9) {
                    cout << "You entered invalid task no." << endl;
                    break;
                }
                for (int i = del_task; i < task_count; i++) {
                    tasks[i] = tasks[i + 1];

                }
                task_count = task_count - 1;
                break;
            }

            case 0:
                cout << "Terminating the program - --- ----- " << endl;
                break;
            default:
                cout << "You entered invalid value!" << endl;
        }
    }

    return 0;

}
