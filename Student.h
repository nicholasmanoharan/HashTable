#ifndef STUDENT_H
#define STUDENT_H
#include <string> 

class Student { 
    private: 
        int id; 
        std::string firstName; 
        std::string lastName; 
        float gpa;

    public: 
        Student(int id, const std::string& firstName, const std::string& lastNamem, float gpa);
        int getID() const; 
        std::string getFirstName() const; 
        std::string getLastName() const; 
        float getGPA() const; 
};

#endif
