#ifndef STUDENT_MANAGEMENT_H
#define STUDENT_MANAGEMENT_H

#include <vector>
#include "Student.h"

void addNewStudent(std::vector<Student> &students);
void DisplayAllStudent(const std::vector<Student> &students);
void SearchStudent(const std::vector<Student> &students);
void updateStudent(std::vector<Student> &students);
void deleteStudent(std::vector<Student> &students);

#endif // STUDENT_MANAGEMENT_H
