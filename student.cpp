#include "student.h"

student::student() : rollNumber(0), marks(0) {}

student::student(const std::string& name, const std::string& className,
                 const std::string& courseName, int rollNumber, double marks)
    : name(name), className(className), courseName(courseName),
      rollNumber(rollNumber), marks(marks) {}

std::string student::calculateGrade() const {
    if (marks >= 90) return "A";
    if (marks >= 80) return "B";
    if (marks >= 70) return "C";
    if (marks >= 60) return "D";
    return "F";
}

void student::displayInformation() const {
    std::cout << "Name: " << name << "\nClass: " << className
              << "\nCourse: " << courseName << "\nRoll Number: " << rollNumber
              << "\nMarks: " << marks << "\nGrade: " << calculateGrade() << "\n";
}
