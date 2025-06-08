#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <iostream>

class student {
public:
    std::string name;
    std::string className;
    std::string courseName;
    int rollNumber;
    double marks;

    student();
    student(const std::string& name, const std::string& className,
            const std::string& courseName, int rollNumber, double marks);

    std::string calculateGrade() const;

    void displayInformation() const;
};

#endif
