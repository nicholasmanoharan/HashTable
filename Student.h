#include once
#include <string> 

class Student { 
    public:     
        int id; 
        std::string firstName; 
        std::string lastName;
        float gpa; 

        Student(int id, const std::string& firstName, const std::string& lastName, float gpa);
}