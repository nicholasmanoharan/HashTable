#include <iostream> 
#include "StudentGenerator.h"
#include "HashTable.h"

int main() { 
    HashTable hashTable; 
    int numStudents;
    std:::cout << "Enter how many students you want to generate:\n"
    std::cin >> numStudents; 

    for (int i = 0; i < numStudents; ++i) { 
        Student* student = StudentGenerator::generateStudent();
        hashTable.addStudent(student);
    }

    hashTable.printStudent();
    return 0;

}
