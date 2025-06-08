#include "studentFileOps.h"
#include <fstream>
#include <sstream>
#include <iostream>

void saveStudentsToFile(const std::string& filename, const std::vector<student>& students) {
    std::ofstream ofs(filename);
    if (!ofs) {
        std::cerr << "Error opening file for writing: " << filename << "\n";
        return;
    }
    for (const auto& s : students) {
        ofs << s.name << "|" << s.className << "|" << s.courseName << "|"
            << s.rollNumber << "|" << s.marks << "\n";
    }
}

void loadStudentsFromFile(const std::string& filename, std::vector<student>& students) {
    std::ifstream ifs(filename);
    if (!ifs) {
        return;
    }
    students.clear();
    std::string line;
    while (std::getline(ifs, line)) {
        std::stringstream ss(line);
        std::string name, className, courseName, rollStr, marksStr;

        std::getline(ss, name, '|');
        std::getline(ss, className, '|');
        std::getline(ss, courseName, '|');
        std::getline(ss, rollStr, '|');
        std::getline(ss, marksStr);

        int rollNumber = std::stoi(rollStr);
        double marks = std::stod(marksStr);

        students.emplace_back(name, className, courseName, rollNumber, marks);
    }
}