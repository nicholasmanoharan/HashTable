#ifndef HASHTABLE_H
#define HASHTABLE_H
#include <vector> 
#include "Student.h"

class HashTable { 
    private: 
        static const int INTIAL_SIZE = 10; 
        std::vector<std::vector<Student*>> table; 
        int size; 
        int hashFunction(int id); 
        void resizeTable(); 

    public: 
        HashTable();
        ~HashTable(); 
        void addStudent(Student* student); 
        void printStudents() const; 
};

#endif
