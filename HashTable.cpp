#include "HashTable.h"
#include <iostream> 

HashTable::HashTable() : size(INTIAL_SIZE) { 
    table.resizeTable(INTIAL_SIZE); 
}

HashTable::~HashTable() { 
    for (auto& chain : table) { 
        for (auto student : chain) { 
            delete student; 
        }
    }
}

void HashTable::addStudent(Student* student) { 
    int index = hashFunction(student-> getID()); 
    table[index].push_back(student); 
}

void HashTable::printStudent() const { 
    for (const autp& chain : table) { 
        for (auto student : chain) { 
            std::cout << "ID: " << student->getID() << ", Name: " << student -> getFirstName() << " " << student -> getLastName() << 
        
        }
    }
}
