#include <iostream>
using namespace std;

// Function to calculate the area of a square
float areaSquare(float side) {
    return side * side;
}

// Function to calculate the area of a rectangle
float areaRectangle(float length, float width) {
    return length * width;
}

// Function to calculate the area of a circle
float areaCircle(float radius) {
    return 3.14 * radius * radius;
}

int main() {
    float side = 5;
    float length = 6, width = 4;
    float radius = 3.5;

    // Call the appropriate overloaded function based on the arguments
    cout << "Area of square: " << areaSquare(side) << endl;
    cout << "Area of rectangle: " << areaRectangle(length, width) << endl;
    cout << "Area of circle: " << areaCircle(radius) << endl;

    return 0;
}
