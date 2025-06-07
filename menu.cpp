#include <iostream>
#include "globals.h"

void menu() {
    int option;

    const char* options[] = {
        "Register a student",
        "Update a student",
        "Delete a student",
        "Find a student",
        "Show students's counter"
    };

    std::cout << "\nMenu options:\n\n";

    for (int i = 0; i < 5; i++) {
        std::cout << (i + 1) << ". " << options[i] << "\n";
    }

    std::cout << "\n";

    std::cout << "\nChoose an option: ";
    std::cin >> option;

    switch (option) {
        case 1:
            printf(options[0]);
            break;
        case 2:
            printf(options[1]);
            break;
        case 3:
            printf(options[2]);
            break;
        case 4:
            printf(options[3]);
            break;
        case 5:
            printf(options[4]);
            break;
        default:
            printf("Invalid option");
    }

    studentsCounter = 0;
}