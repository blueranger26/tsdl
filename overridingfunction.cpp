#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    // Virtual function for area calculation
    virtual float area() {
        cout << "Calculating area of Shape." << endl;
        return 0;
    }
};

// Derived class
class Rectangle : public Shape {
private:
    float length;
    float width;

public:
    Rectangle(float l, float w) : length(l), width(w) {}

    // Overriding the area calculation for Rectangle
    float area() override {
        cout << "Calculating area of Rectangle." << endl;
        return length * width;
    }
};

// Another derived class
class Circle : public Shape {
private:
    float radius;

public:
    Circle(float r) : radius(r) {}

    // Overriding the area calculation for Circle
    float area() override {
        cout << "Calculating area of Circle." << endl;
        return 3.14 * radius * radius;
    }
};

int main() {
    Shape *shape1 = new Rectangle(5, 3);
    Shape *shape2 = new Circle(4);

    cout << "Area of Rectangle: " << shape1->area() << endl;
    cout << "Area of Circle: " << shape2->area() << endl;

    delete shape1;
    delete shape2;

    return 0;
}
