#ifndef STUDENTMANAGER_H
#define STUDENTMANAGER_H

#include <vector>
#include <string>
#include "student.h"

void createStudent(std::vector<student>& students);
student* findStudentByRollNumber(std::vector<student>& students, int rollNumber);
bool updateStudent(std::vector<student>& students, int rollNumber);
bool deleteStudent(std::vector<student>& students, int rollNumber);
void listStudentsByCourse(const std::vector<student>& students, const std::string& course);

#endif