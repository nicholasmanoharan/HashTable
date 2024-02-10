#ifndef STUDENTGENERATOR_H
#define STUDENTGENERATOR_H

#include <string>
#include <vector>
#include "HashTable.h" 

class StudentGenerator {
private:
    std::vector<std::string> firstNames;
    std::vector<std::string> lastNames;

    std::string getRandomFirstName() const;
    std::string getRandomLastName() const;
    double generateRandomGPA() const;

public:
    StudentGenerator(const std::string& firstNamesFile, const std::string& lastNamesFile);
    void generateAndAddStudents(int numStudents, HashTable& table);
};

#endif
