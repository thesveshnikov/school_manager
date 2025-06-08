#include "studentManager.h"
#include <iostream>
#include <limits>

void createStudent(std::vector<student>& students) {
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

    students.emplace_back(name, className, courseName, rollNumber, marks);
    students.back().displayInformation();
}

student* findStudentByRollNumber(std::vector<student>& students, int rollNumber) {
    for (auto& s : students) {
        if (s.rollNumber == rollNumber) {
            return &s;
        }
    }
    return nullptr;
}

bool updateStudent(std::vector<student>& students, int rollNumber) {
    student* s = findStudentByRollNumber(students, rollNumber);
    if (!s) {
        std::cout << "Student not found.\n";
        return false;
    }
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::string input;

    std::cout << "Name (" << s->name << "): ";
    std::getline(std::cin, input);
    if (!input.empty()) s->name = input;

    std::cout << "Class (" << s->className << "): ";
    std::getline(std::cin, input);
    if (!input.empty()) s->className = input;

    std::cout << "Course (" << s->courseName << "): ";
    std::getline(std::cin, input);
    if (!input.empty()) s->courseName = input;

    std::cout << "Marks (" << s->marks << "): ";
    std::getline(std::cin, input);
    if (!input.empty()) s->marks = std::stod(input);

    std::cout << "Student updated:\n";
    s->displayInformation();

    return true;
}

bool deleteStudent(std::vector<student>& students, int rollNumber) {
    for (auto it = students.begin(); it != students.end(); ++it) {
        if (it->rollNumber == rollNumber) {
            students.erase(it);
            return true;
        }
    }
    return false;
}

void listStudentsByCourse(const std::vector<student>& students, const std::string& course) {
    std::cout << "Students in course \"" << course << "\":\n";
    for (const auto& s : students) {
        if (s.courseName == course) {
            s.displayInformation();
            std::cout << "------------------\n";
        }
    }
}