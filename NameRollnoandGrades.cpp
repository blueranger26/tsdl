#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int rollNo;
    char grade;

public:
    // Constructor to initialize data members
    Student(std::string n, int r, char g) {
        name = n;
        rollNo = r;
        grade = g;
    }

    // Function to display student details
    void displayStudentDetails() {
        std::cout << "Name: " << name << ", Roll No: " << rollNo << ", Grade: " << grade << std::endl;
    }
};

int main() {
    // Create an array of class objects
    const int numStudents = 3;
    Student students[numStudents] = {
        Student("John", 101, 'A'),
        Student("Alice", 102, 'B'),
        Student("Bob", 103, 'C')
    };

    // Display the contents of the array
    std::cout << "Student Details:" << std::endl;
    for (int i = 0; i < numStudents; ++i) {
        students[i].displayStudentDetails();
    }

    return 0;
}
