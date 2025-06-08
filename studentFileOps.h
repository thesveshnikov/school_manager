#ifndef STUDENTFILEOPS_H
#define STUDENTFILEOPS_H

#include <vector>
#include <string>
#include "student.h"

void saveStudentsToFile(const std::string& filename, const std::vector<student>& students);
void loadStudentsFromFile(const std::string& filename, std::vector<student>& students);

#endif
