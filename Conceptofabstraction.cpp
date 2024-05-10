#include <iostream>
// Abstract base class
class Shape {
public:
 // Pure virtual function (making Shape an abstract class)
 virtual void display() = 0;
};
// Concrete derived class implementing Shape
class Circle : public Shape {
public:
 // Implementation of the display function
 void display() override {
 std::cout << "This is a Circle." << std::endl;
 }
};
// Concrete derived class implementing Shape
class Rectangle : public Shape {
public:
 // Implementation of the display function
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
