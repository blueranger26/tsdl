#include <iostream>
#include <string>
class Employee {
private:
 int employeeNumber;
 std::string employeeName;
 double basicSalary;
 double HRA;
 double DA;
 double salary;
public:
 // Constructor to initialize data members
 Employee(int empNumber, std::string empName, double basic, double
hra, double da) {
 employeeNumber = empNumber;
 employeeName = empName;
 basicSalary = basic;
 HRA = hra;
 DA = da;
 salary = basicSalary + HRA + DA;
 }
 // Function to compute net salary after tax deduction
 double computeNetSalary() {
 double tax = 0.02 * basicSalary;
 double netSalary = salary - tax;
 return netSalary;
 }
 // Function to display employee details
 void displayEmployeeDetails() {
 std::cout << "Employee Number: " << employeeNumber <<
std::endl;
 std::cout << "Employee Name: " << employeeName << std::endl;
 std::cout << "Basic Salary: " << basicSalary << std::endl;
 std::cout << "HRA: " << HRA << std::endl;
 std::cout << "DA: " << DA << std::endl;
 std::cout << "Net Salary: " << computeNetSalary() << std::endl;
 }
};
int main() {
 // Create an object of class Employee
 Employee employee(101, "John Doe", 50000, 10000, 8000);
 // Display employee details
 employee.displayEmployeeDetails();
 return 0;
}
