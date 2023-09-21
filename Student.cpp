#include <iostream>
#include <string>
#include "Student.h"
using namespace std;

Student::Student(int stdId, std::string stdName, int stdAge) {
    rollno = stdId;
    name = stdName;
    age = stdAge;
}

int rollno, age;
string name;

void setRollno(int stdId) { rollno = stdId; }
int getRollno() { return rollno; }

void setName(string stdName) { name = stdName; }
string getName() { return name; }

void setAge(int stdAge) { age = stdAge; }
int getAge() { return age; }

void displayStudent() {
  cout << "Roll No : " << rollno << endl;
  cout << "Name :" << name << endl;
  cout << "Age : " << age << endl;
}

int main(){}
