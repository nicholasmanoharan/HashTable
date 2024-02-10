/*
Nicholas Manoharan
Mr Galbraith 
2/9/2024
Hash Tables - Used to make a student generator

*/

#include <iostream>
#include <string>
#include "HashTable.h"
#include "StudentGenerator.h"

using namespace std;

int main() {
    HashTable table(100);
    StudentGenerator studentGenerator("first_names.txt", "last_names.txt");

    int choice;
    int numStudents;

    while (true) {
        cout << "\nMenu:\n" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. Delete Student" << endl;
        cout << "3. Generate Random Students" << endl;
        cout << "4. Print Table" << endl;
        cout << "5. Quit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                string firstName, lastName;
                double GPA;

                cout << "Enter first name: ";
                cin >> firstName;
                cout << "Enter last name: ";
                cin >> lastName;
                cout << "Enter GPA: ";
                cin >> GPA;

                table.addStudent(firstName, lastName, GPA);
                break;
            }
            case 2: {
                string firstName, lastName;

                cout << "Enter first name: ";
                cin >> firstName;
                cout << "Enter last name: ";
                cin >> lastName;

                if (table.deleteStudent(firstName, lastName)) {
                    cout << "Student deleted successfully." << endl;
                } else {
                    cout << "Student not found." << endl;
                }
                break;
            }
            case 3: {
                cout << "Enter number of students to generate: ";
                cin >> numStudents;
                studentGenerator.generateAndAddStudents(numStudents, table);
                break;
            }
            case 4:
                table.printTable();
                break;
            case 5:
                cout << "Exiting program. Goodbye!" << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
