#include <iostream>
#include <limits>
#include "showStudentsCounter.h"
#include "student_utils.h"

void menu() {
    int option;

    const char* options[] = {
        "Register a student",
        "Update a student",
        "Delete a student",
        "Find a student",
        "List all students",
        "Show students's counter"
    };

    do {
        std::cout << "\nMenu options:\n\n";
        for (int i = 0; i < 6; ++i) {
            std::cout << (i + 1) << ". " << options[i] << "\n";
        }

        std::cout << "\nChoose an option: ";
        std::cin >> option;

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            option = 0;
        }

        if (option < 1 || option > 6) {
            std::cout << "Invalid option. Please try again.\n";
        }

    } while (option < 1 || option > 6);

    switch (option) {
        case 1:
            createStudent();
            break;
        case 2:
            std::cout << "Update student feature not yet implemented.\n";
            break;
        case 3:
            std::cout << "Delete student feature not yet implemented.\n";
            break;
        case 4:
            std::cout << "Find student feature not yet implemented.\n";
            break;
        case 5:
            std::cout << "List students feature not yet implemented.\n";
            break;
        case 6:
            showStudentsCounter();
            break;
    }
}
