#include "HashTable.h"
#include <iostream>

HashTable::HashTable(int initialSize) : size(initialSize) { 
    
    table.resize(size); 

}

int HashTable::hasFunction(int id) { 

    return id % size; 

}

void HashTable::resizeTable() { 
    size *= 2; 
    table.resize(size); 
    rehash();
}

void HashTable::rehash() { 
    for (auto& chain : table) { 
        for (auto student : chain) { 
            int newIndex = hasFunction(student -> id); 
            table[newIndex].push_back(student); 
        }
    }
}

void HashTable::addStudent(Student* newStudent) { 
    int index = hasFunction(newStudent -> id); 
    table[index].push_back(newStudent); 
    if (table[index].size() > 3) { 
        resizeTable();
    }
}

void HashTable::printStudents() { 
    for(const auto& chain : table) { 
        for(auot student : chain) { 
            std::cout << "ID: " << student -> id << ", Name: " << student -> firstName << " "<< student-> lastName << ", GPA: " << student-> gpa << std::endl; 
        }
    }
}

void HashTable::deleteStudent(int id)  {
    int index = hashFunction(id); 
        for (auto it = table[index].begin(); it != table[index].end(); ++it) { 
           if ((*it) -> == id) { 
                table[index].erase(it); 
                break;
           }  
        }
}