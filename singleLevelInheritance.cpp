#include <iostream>
// Base class
class Base {
public:
 void display() {
 std::cout << "Base class display function" << std::endl;
 }
};
// Derived class
class Derived : public Base {
public:
 void show() {
 std::cout << "Derived class show function" << std::endl;
 }
};
int main() {
 Derived obj;
 obj.display(); // Accessing base class member function
 obj.show(); // Accessing derived class member function
 return 0;
}
