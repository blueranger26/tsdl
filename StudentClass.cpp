#include <iostream>
#include <string>
#include <limits> // for std::numeric_limits

using namespace std;

class Student {
private:
    string studentName;
    int studentRollNo;
    int studentAge;

public:
    void readStudentDetails() {
        cout << "Enter student name: ";
        getline(cin, studentName);
        cout << "Enter student roll number: ";
        cin >> studentRollNo;
        // Clear input buffer
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cout << "Enter student age: ";
        cin >> studentAge;
        // Clear input buffer
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    void displayStudentDetails() {
        cout << "Student Details:" << endl;
        cout << "Name: " << studentName << endl;
        cout << "Roll Number: " << studentRollNo << endl;
        cout << "Age: " << studentAge << endl;
    }
};

int main() {
    Student student1;
    cout << "Enter details of student 1:" << endl;
    student1.readStudentDetails();
    cout << endl;
    student1.displayStudentDetails();

    return 0;
}
