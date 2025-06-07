#include <iostream>
#include "student.h"

int main() {
    std::string studentName;
    std::string className;
    std::string courseName;
    int rollNumber;
    double marks;

    std::cout << "Student details: ";
    std::cout << "\nName: ";
    std::getline(std::cin, studentName);

    std::cout << "Class: ";
    std::getline(std::cin, className);

    std::cout << "Course: ";
    std::getline(std::cin, courseName);

    std::cout << "Roll number: ";
    std::cin >> rollNumber;

    std::cout << "Marks (0-100): ";
    std::cin >> marks;

    student student(studentName, className, courseName, rollNumber, marks);

    student.displayInformation();

    return 0;
}