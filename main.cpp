#include <iostream> 
#include "Student.h"
#include "HashTable.h"
#include "StudentGenerator.h"

int main() { 

    HashTable HashTable(100); 
    StudentGenerator StudentGenerator; 
    int choice; 

    do { 

        std::cout << "\nOptions;\n";
        std::cout << "1. Add Student\n";
        std::cout << "2. Remove Student\n"; 
        std::cout << "3. Print Student\n"; 
        std::cout << "4. Quit\n"; 
        std::cout << "Enter an option: ";
        std::cin >> choice; 

        switch (choice) { 
           case 1: 
            Student* newStudent = StudentGenerator.generateRandomStudent(); 
            hashTable.addStudent(newStudent);
            std::cout << "Added new student\n";
            break; 
        }
        case 2; {
            int studentId; 
            std::cout << "Enter Student ID to remove";
            std::cin >> studentId;
            hashTable.deleteStudent(studentId);
            std::cout << "Student removed:\n";
            break;
    
         }

         case 3: 
            std::cout << "Students in the table:\n"; 
            std::hashTable.printStudents(); 
            break;

        case 4: 
            std::cout << "Ending program\n";
            break;
        default: 
            std::cout << "Invalid choice. Try again\n"; 
    }
 }
  
while (choice != 4) { 
    return 0;
}