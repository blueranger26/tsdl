#include <iostream>
class MyClass {
public:
 // Default Constructor
 MyClass() {
 std::cout << "Default Constructor called" << std::endl;
 }
};
int main() {
 MyClass obj; // Creating object triggers the default constructor
 return 0;
}
