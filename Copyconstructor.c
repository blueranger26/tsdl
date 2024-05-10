#include <iostream>
class MyClass {
private:
 int data;
public:
 // Parameterized Constructor
 MyClass(int val) {
 data = val;
 std::cout << "Parameterized Constructor called with value " <<
val << std::endl;
 }
 // Copy Constructor
 MyClass(const MyClass &obj) {
 data = obj.data;
 std::cout << "Copy Constructor called" << std::endl;
 }
 // Member function to display data
 void displayData() {
 std::cout << "Data: " << data << std::endl;
 }
};
int main() {
 MyClass obj1(10); // Creating object triggers the parameterized
constructor
 MyClass obj2 = obj1; // Creating object triggers the copy
constructor
 obj2.displayData(); // Displaying data stored in object
 return 0;
}
