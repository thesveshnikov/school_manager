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
        "Find a student by roll number",
        "Find a student by first name",
        "List all students",
        "Show students' counter"
    };

    const int numOptions = sizeof(options) / sizeof(options[0]);

    do {
        std::cout << "\nMenu Options:\n\n";
        for (int i = 0; i < numOptions; ++i) {
            std::cout << (i + 1) << ". " << options[i] << "\n";
        }

        std::cout << "\nChoose an option: ";
        std::cin >> option;

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            option = 0;
        }

        if (option < 1 || option > numOptions) {
            std::cout << "Invalid option. Please try again.\n";
        }

    } while (option < 1 || option > numOptions);

    switch (option) {
        case 1:
            createStudent();
            break;
        case 2:
            std::cout << "Update student feature not yet implemented\n";
            break;
        case 3:
            std::cout << "Delete student feature not yet implemented\n";
            break;
        case 4:
            std::cout << "Find student by roll number feature not yet implemented\n";
            break;
        case 5:
            std::cout << "Find student by first name feature not yet implemented\n";
            break;
        case 6:
            std::cout << "List all students feature not yet implemented\n";
            break;
        case 7:
            showStudentsCounter();
            break;
    }
}
