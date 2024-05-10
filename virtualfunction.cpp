#include <iostream>
// Base class
class Shape {
public:
 // Virtual function
 virtual void display() {
 std::cout << "This is a Shape." << std::endl;
 }
};
// Derived class
class Circle : public Shape {
public:
 // Override the virtual function
 void display() override {
 std::cout << "This is a Circle." << std::endl;
 }
};
// Derived class
class Rectangle : public Shape {
public:
 // Override the virtual function
 void display() override {
 std::cout << "This is a Rectangle." << std::endl;
 }
};
int main() {
 Shape* shapePtr;
 Circle circle;
 Rectangle rectangle;
 // Pointer to base class pointing to derived class object
 shapePtr = &circle;
 shapePtr->display(); // Calls the overridden function in Circle class
 // Pointer to base class pointing to derived class object
 shapePtr = &rectangle;
 shapePtr->display(); // Calls the overridden function in Rectangle class
 return 0;
}