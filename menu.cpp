#include <iostream>

void menu() {
    int choice;

    const char* choices[] = {
        "Register a student",
        "Update a student",
        "Delete a student",
        "Find a student"
    };

    std::cout << "\nMenu options:\n\n";

    for (int i = 0; i < 4; i++) {
        std::cout << (i + 1) << ". " << choices[i] << "\n";
    }

    std::cout << "\n";

    std::cin >> choice;
    std::cout << "You selected option " << choice << std::endl;
}
