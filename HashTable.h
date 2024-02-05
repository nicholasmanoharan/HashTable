#pragma once
#include <vector> 
#include "Student.h"

class HashTable { 
    private: 
        std::vector<std::vector<Student*>> table; 
        int size; 
        int hasFunction(int id); 
        void resizeTable(); 
        void rehash(); 

    public: 
        HashTable(int initialSize); 
        void addStudent(Student* newStudent); 
        void printStudents(); 
        void deleteStudent(int id); 
}; 