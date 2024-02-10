#include "HashTable.h"

HashTable::HashTable(int size) : tableSize(size) {
    table = new std::list<Student>[tableSize];
}

HashTable::~HashTable() {
    delete[] table;
}

void HashTable::addStudent(const std::string& firstName, const std::string& lastName, double GPA) {
    int index = hashFunction(firstName + lastName);
    Student newStudent;
    newStudent.firstName = firstName;
    newStudent.lastName = lastName;
    newStudent.GPA = GPA;
    table[index].push_back(newStudent);
}

bool HashTable::deleteStudent(const std::string& firstName, const std::string& lastName) {
    int index = hashFunction(firstName + lastName);
    for (std::list<Student>::iterator it = table[index].begin(); it != table[index].end(); ++it) {
        if (it->firstName == firstName && it->lastName == lastName) {
            table[index].erase(it);
            return true; 
        }
    }
    return false; 
}

void HashTable::printTable() const {
    for (int i = 0; i < tableSize; ++i) {
        std::cout << "[" << i << "]: ";
        for (std::list<Student>::const_iterator it = table[i].begin(); it != table[i].end(); ++it) {
            std::cout << it->firstName << " " << it->lastName << " (GPA: " << it->GPA << "), ";
        }
        std::cout << std::endl;
    }
}

int HashTable::hashFunction(const std::string& key) const {
    int hash = 0;
    for (size_t i = 0; i < key.length(); ++i) {
        hash += key[i];
    }
    return hash % tableSize;
}
