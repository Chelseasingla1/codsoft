## TO-DO List Console Application

This project is a simple console-based to-do list manager that allows users to add, view, and delete tasks. It is designed to be a straightforward and efficient tool for managing daily tasks through a command-line interface. This project was completed as part of the CodSoft internship Task 4.

### Features

1. **Add New Tasks**: Users can add new tasks to the list.
2. **View Tasks**: Users can view the list of all tasks.
3. **Delete Tasks**: Users can delete specific tasks by entering the task number.
4. **User Interface**: Uses simple console commands to interact with the user.

### Requirements

- A C++ compiler
- Windows operating system (the code uses `windows.h` for console commands)

### How to Run

1. **Compile the Code**: 
   Use a C++ compiler to compile the code. For example, if you are using `g++`, run the following command:
   ```sh
   g++ -o todo todo.cpp
   ```

2. **Run the Executable**: 
   After compilation, run the executable from the command line:
   ```sh
   ./todo
   ```

### Code Description

The code consists of the following main parts:

1. **Including Headers**:
   - `<iostream>`: For input and output stream.
   - `<windows.h>`: For Windows-specific commands like `system("cls")` and `system("color a")`.
   - `<string>`: For handling string operations, especially `getline`.

2. **Function to Print Tasks**:
   - `print_tasks(string tasks[], int task_count)`: This function prints all the tasks currently in the list.

3. **Main Function**:
   - Uses a `while` loop to continuously prompt the user for actions until they choose to terminate the program.
   - Options include adding a new task, viewing tasks, deleting a task, and terminating the program.
   - The `system("cls")` command is used to clear the console screen before displaying updated information.

### Usage

1. **Add a New Task**:
   - Select option `1`.
   - Enter the task description when prompted.

2. **View Tasks**:
   - Select option `2`.
   - The list of tasks will be displayed.

3. **Delete a Task**:
   - Select option `3`.
   - The list of tasks will be displayed along with their task numbers.
   - Enter the task number you wish to delete.

4. **Terminate the Program**:
   - Select option `0`.

### Sample Interaction

```
--- TO DO LIST ----
1- To Add New task
2- to view Tasks
3- Delete the tasks
0- terminate the program
1
enter a new task: Buy groceries
--- TO DO LIST ----
1- To Add New task
2- to view Tasks
3- Delete the tasks
0- terminate the program
1
enter a new task: Finish homework
--- TO DO LIST ----
1- To Add New task
2- to view Tasks
3- Delete the tasks
0- terminate the program
2
Tasks to DO:
------------------------
Task 0: Buy groceries
Task 1: Finish homework
--- TO DO LIST ----
1- To Add New task
2- to view Tasks
3- Delete the tasks
0- terminate the program
3
Tasks to DO:
------------------------
Task 0: Buy groceries
Task 1: Finish homework
Enter a task number to delete: 0
--- TO DO LIST ----
1- To Add New task
2- to view Tasks
3- Delete the tasks
0- terminate the program
2
Tasks to DO:
------------------------
Task 0: Finish homework
```

### Conclusion

This simple to-do list application is a practical tool for managing tasks through a console interface. It is a great starting point for understanding basic C++ programming, handling user input, and manipulating arrays. 
