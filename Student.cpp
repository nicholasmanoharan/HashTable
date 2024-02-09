#include "Student.h"

Student::Student(int id, const std::string& firstName, const std::string& lastName, float gpa) : id(id), firstName(firstName), lastName(lastName), gpa(gpa) {}

int Student::getID() const { 
    return id; 
}

std::string Student::getFirstName() const { 
    return firstName;
}

std::string Student::getLastName() const { 
    return lastName; 
}

float Student::getGPA() const { 
    return gpa; 
}
