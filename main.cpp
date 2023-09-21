#include <iostream>
#include <vector>
#include "Student.h"
#include "StudentManagement.h"
using namespace std;

int main() {
  vector<Student> students;
  students.push_back(Student(1, "Shreya", 20));

  char choice;

  do {
    int op;
    cout << "\n--------------------------------";
    cout << "\n*** Student Management System ***";
    cout << "\n--------------------------------";
    cout << "\n1. Add New Student" << endl;
    cout << "2. Display All Student " << endl;
    cout << "3. Search Student" << endl;
    cout << "4. Update Student" << endl;
    cout << "5. Delete Student " << endl;
    cout << "6. Exit" << endl;
    cout << "Enter Your Choice : ";
    cin >> op;
    
    switch (op) {
    case 1:
      addNewStudent(students);
      break;

    case 2:
      DisplayAllStudent(students);
      break;

    case 3:
      SearchStudent(students);
      break;

    case 4:
      updateStudent(students);
      break;

    case 5:
      deleteStudent(students);
      break;

    case 6:
      exit(1);

    default:
      cout << "Invalid Number" << endl;
    }

    cout << "Do You Want to Continue [Yes/No] ? :";
    cin >> choice;

  } while (choice == 'y' || choice == 'Y');
}
