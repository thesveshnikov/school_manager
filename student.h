#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class student {
private:
    std::string name;
    std::string className;
    std::string courseName;
    int rollNumber;
    double marks;

public:
    student(const std::string& name, const std::string& className, const std::string& courseName, int rollNumber, double marks);
    std::string calculateGrade() const;
    void displayInformation() const;
};

#endif // STUDENT_H