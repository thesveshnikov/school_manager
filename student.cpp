#include "student.h"
#include <iostream>

student::student(const std::string& name, const std::string& className, const std::string& courseName, int rollNumber, double marks)
    : name(name), className(className), courseName(courseName), rollNumber(rollNumber), marks(marks) {}

std::string student::calculateGrade() {
    if (marks >= 90) {
        return "A+";
    } else if (marks >= 80) {
        return "A";
    } else if (marks >= 70) {
        return "B";
    } else if (marks >= 60) {
        return "C";
    } else {
        return "D";
    }
}

void student::displayInformation() {
    std::cout << "\nName: " << name << std::endl;
    std::cout << "Class: " << className << std::endl;
    std::cout << "Course: " << courseName << std::endl;
    std::cout << "Roll Number: " << rollNumber << std::endl;
    std::cout << "Marks: " << marks << std::endl;
    std::cout << "Grade: " << calculateGrade() << std::endl;
}