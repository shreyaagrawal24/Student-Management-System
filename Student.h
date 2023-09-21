#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student {
private:
  int rollno, age;
  std::string name;

public:
  Student(int stdId, std::string stdName, int stdAge);
  void setRollno(int stdId);
  int getRollno();
  void setName(std::string stdName);
  std::string getName();
  void setAge(int stdAge);
  int getAge();
  void displayStudent();
};

#endif // STUDENT_H
