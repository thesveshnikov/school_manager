#include <iostream>
#include <limits>
#include "globals.h"
#include "student_utils.h"

void menu() {
    int option;

    const char* options[] = {
        "Register a student",
        "Update a student",
        "Delete a student",
        "Find a student",
        "Show students's counter"
    };

    do {
        std::cout << "\nMenu options:\n\n";
        for (int i = 0; i < 5; ++i) {
            std::cout << (i + 1) << ". " << options[i] << "\n";
        }

        std::cout << "\nChoose an option: ";
        std::cin >> option;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            option = 0;
        }

        if (option < 1 || option > 5) {
            std::cout << "Invalid option. Please try again.\n";
        }
    } while (option < 1 || option > 5);

    switch (option) {
        case 1:
            createStudent();
            break;
        case 2:
            std::cout << options[1];
            break;
        case 3:
            std::cout << options[2];
            break;
        case 4:
            std::cout << options[3];
            break;
        case 5:
            std::cout << "Total students: " << studentsCounter << "\n";
            break;
    }
}
