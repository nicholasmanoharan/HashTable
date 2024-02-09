#include "StudentGenerator.h"
#include <iostream> 
#include <cstdlib> 

Student* StudentGenerator::generateStudent() { 
    int id = rand() % 1000 + 1; 
    std::string firstName = "First Name"; 
    std::string lastName = "Last Name";
    float gpa = static_cast<float>(rand()) / RAND_MAX * 4.0f; 
    return new Student(id, firstName, lastName, gpa);
}
