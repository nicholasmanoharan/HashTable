#include "HashTable.h"
#include <iostream> 

HashTable::HashTable() : size(INTIAL_SIZE) { 
    table.resize(INTIAL_SIZE); 
}

HashTable::~HashTable() { 
    for (auto& chain : table) { 
        for (auto student : chain) { 
            delete student; 
        }
    }
}

void HashTable::addStudent(Student* student) { 
    int index = hashFunction(student->getID()); 
    table[index].push_back(student); 
}

void HashTable::printStudent() const { 
    for (const auto& chain : table) { 
        for (auto student : chain) { 
            std::cout << "ID: " << student->getID() << ", Name: " << student->getFirstName() << student-> getLastName() << ", GPA: " << student->getGPA() << std::endl; 
        }
    }
}

int HashTable::hashFunction(int id) { 
    return id % size;
}

void HashTable::resizeTable() { 
    size *= 2; 
    table.resize(size); 
}
