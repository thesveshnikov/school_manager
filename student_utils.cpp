#include "student.h"
#include <iostream>
#include <vector>
#include <limits>

std::vector<student> students;

void createStudent() {
    std::string name, className, courseName;
    int rollNumber;
    double marks;

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << "Student details: \n";

    std::cout << "Name: ";
    std::getline(std::cin, name);

    std::cout << "Class: ";
    std::getline(std::cin, className);

    std::cout << "Course: ";
    std::getline(std::cin, courseName);

    std::cout << "Roll number: ";
    std::cin >> rollNumber;

    std::cout << "Marks (0-100): ";
    std::cin >> marks;

    student s(name, className, courseName, rollNumber, marks);
    students.push_back(s);
    s.displayInformation();
}