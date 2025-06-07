#include "student.h"
#include <iostream>

student::student(const std::string& name, const std::string& className, const std::string& courseName, int rollNumber, double marks)
    : name(name), className(className), courseName(courseName), rollNumber(rollNumber), marks(marks) {}

std::string student::calculateGrade() const {
    switch (static_cast<int>(marks) / 10) {
        case 10:
        case 9:
            return "A+";
        case 8:
            return "A";
        case 7:
            return "B";
        case 6:
            return "C";
        default:
            return "D";
    }
}

void student::displayInformation() const {
    std::cout << "\nName: " << name << std::endl;
    std::cout << "Class: " << className << std::endl;
    std::cout << "Course: " << courseName << std::endl;
    std::cout << "Roll Number: " << rollNumber << std::endl;
    std::cout << "Marks: " << marks << std::endl;
    std::cout << "Grade: " << calculateGrade() << std::endl;
}
