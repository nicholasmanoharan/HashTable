#ifndef HASHTABLE_H
#define HASHTABLE_H
#include <iostream>
#include <list>
#include <string>

class HashTable {
private:
    //using a struct as a representation for a student
    struct Student {
        std::string firstName;
        std::string lastName;
        double GPA;
    };

    int tableSize;
    std::list<Student>* table;

    int hashFunction(const std::string& key) const;
    
public:
    //Setting up constructor and deconstructor
    HashTable(int size);
    ~HashTable();
    
    //Setting up the functions
    void addStudent(const std::string& firstName, const std::string& lastName, double GPA);
    bool deleteStudent(const std::string& firstName, const std::string& lastName);
    void printTable() const;
};

#endif 
