#include <iostream>
#include <vector>
#include <limits>
#include "student.h"
#include "studentFileOps.h"
#include "studentManager.h"

void menu() {
    std::vector<student> students;
    const std::string filename = "students.txt";

    loadStudentsFromFile(filename, students);

    int option = 0;
    do {
        std::cout << "\nMenu:\n"
                  << "1. Add Student\n"
                  << "2. Update Student\n"
                  << "3. Delete Student\n"
                  << "4. List Students by Course\n"
                  << "5. Save and Exit\n"
                  << "\nChoose option: ";
        std::cin >> option;

        switch(option) {
            case 1:
                createStudent(students);
                break;
            case 2: {
                std::cout << "Enter roll number to update: ";
                int roll;
                std::cin >> roll;
                std::cin.ignore();
                updateStudent(students, roll);
                break;
            }
            case 3: {
                std::cout << "Enter roll number to delete: ";
                int roll;
                std::cin >> roll;
                if (deleteStudent(students, roll)) {
                    std::cout << "Student deleted.\n";
                } else {
                    std::cout << "Student not found.\n";
                }
                break;
            }
            case 4: {
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Enter course name to list students: ";
                std::string course;
                std::getline(std::cin, course);
                listStudentsByCourse(students, course);
                break;
            }
            case 5:
                saveStudentsToFile(filename, students);
                std::cout << "Data saved. Exiting...\n";
                break;
            default:
                std::cout << "Invalid option!\n";
        }
    } while(option != 5);
}
