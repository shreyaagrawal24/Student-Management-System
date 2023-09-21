#include "StudentManagement.h"
#include "Student.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

// create function to add new student

void addNewStudent(vector<Student> &students) {
  int rollno, age;
  string name;
  cout << "Enter Rollno :";
  cin >> rollno;

  // Validation
  if (cin.fail()) {
    cout << "Invalid input. Please enter an integer." << endl;
    cin.clear();           // Clear error flags
    cin.ignore(100, '\n'); // Ignore the rest of the line
    cout << "Enter Rollno :";
    cin >> rollno;
  }

  // check if student already exists
  for (int i = 0; i < students.size(); i++) {
    if (students[i].getRollno() == rollno) {
      cout << "Student Already Exists" << endl;
      return;
    }
  }

  cout << "Enter Name : ";
  cin >> name;

  cout << "Enter Age : ";
  cin >> age;

  // Validation
  if (cin.fail()) {
    cout << "Invalid input. Please enter an integer." << endl;
    cin.clear();           // Clear error flags
    cin.ignore(100, '\n'); // Ignore the rest of the line
    cout << "Enter Age : ";
    cin >> age;
  }

  Student newStudent(rollno, name, age);
  students.push_back(newStudent);
}

// create function to show all students

void DisplayAllStudent(vector<Student> &students) {
  if (students.empty()) {
    cout << "No Student Found " << endl;
    return;
  }

  for (int i = 0; i < students.size(); i++) {
    students[i].displayStudent();
    cout << endl;
  }
}

// create function to search studnet in list

void SearchStudent(vector<Student> &students) {
  int rollno;
  cout << "Enter Rollno to be searched:";

  try {
    cin >> rollno;

    for (int i = 0; i < students.size(); i++) {
      if (students[i].getRollno() == rollno) {
        cout << "--------Student Found ------------" << endl;
        students[i].displayStudent();
        return;
      } else {
        throw rollno;
      }
    }
  } catch (int ex) {
    cout << "Student not Found" << endl;
  }
}

// Create function to update Student record

void updateStudent(vector<Student> &students) {
  int rollno;
  cout << "Enter Rollno to be updated:";
  cin >> rollno;
  bool found = false;
  int choice;

  for (int i = 0; i < students.size(); i++) {
    if (students[i].getRollno() == rollno) {
      found = true;
      cout << "---Student Found -----" << endl;
      cout << "1. Update Rollno " << endl;
      cout << "2. Update Name " << endl;
      cout << "3. Update Age " << endl;
      cout << "Enter Your Choice :";
      cin >> choice;

      switch (choice) {
      case 1: {
        int rno;
        cout << "Enter New Rollno :";
        cin >> rno;
        students[i].setRollno(rno);
        break;
      }

      case 2: {
        string name;
        cout << "Enter New Name :";
        cin.ignore();
        getline(cin, name);
        students[i].setName(name);
        break;
      }

      case 3: {
        int age;
        cout << "Enter New Age :";
        cin >> age;
        students[i].setAge(age);
        break;
      }

      default:
        cout << "Invalid Number" << endl;
      }
    }

    if (!found) {
      cout << "Record Not Found" << endl;
      return;
    }
  }
}

/* Define a function to run updateStudent in a separate thread
void threadUpdateStudent(vector<Student> &students) {
  updateStudent(students);
}*/

// create function to delete student in list

void deleteStudent(vector<Student> &students) {
  int rollno;
  cout << "Enter Rollno to be deleted:";
  cin >> rollno;

  for (int i = 0; i < students.size(); i++) {
    if (students[i].getRollno() == rollno) {
      students.erase((students.begin() + i));
      cout << "Student Removed Successfully" << endl;
    }
  }
}

int main() {}
