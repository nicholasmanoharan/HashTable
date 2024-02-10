#include "StudentGenerator.h"
#include <fstream>
#include <cstdlib>
#include <ctime>

StudentGenerator::StudentGenerator(const std::string& firstNamesFile, const std::string& lastNamesFile) {

    std::ifstream firstNameStream(firstNamesFile);
    std::string firstName;
    while (std::getline(firstNameStream, firstName)) {
        firstNames.push_back(firstName);
    }
    firstNameStream.close();


    std::ifstream lastNameStream(lastNamesFile);
    std::string lastName;
    while (std::getline(lastNameStream, lastName)) {
        lastNames.push_back(lastName);
    }
    lastNameStream.close();

    
    std::srand(std::time(nullptr));
}

std::string StudentGenerator::getRandomFirstName() const {
    int index = std::rand() % firstNames.size();
    return firstNames[index];
}

std::string StudentGenerator::getRandomLastName() const {
    int index = std::rand() % lastNames.size();
    return lastNames[index];
}

double StudentGenerator::generateRandomGPA() const {
    return (std::rand() % 401) / 100.0; 
}

void StudentGenerator::generateAndAddStudents(int numStudents, HashTable& table) {
    for (int i = 0; i < numStudents; ++i) {
        std::string firstName = getRandomFirstName();
        std::string lastName = getRandomLastName();
        double GPA = generateRandomGPA();
        table.addStudent(firstName, lastName, GPA);
    }
}
