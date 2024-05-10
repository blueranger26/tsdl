#include <iostream>
class Complex {
private:
 double real;
 double imag;
public:
 // Constructor
 Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}
 // Unary operator overloading (-)
 Complex operator-() {
 return Complex(-real, -imag);
 }
 // Binary operator overloading (+)
 Complex operator+(const Complex& other) {
 return Complex(real + other.real, imag + other.imag);
 }
 // Function to display complex number
 void display() {
 std::cout << "Real: " << real << ", Imaginary: " << imag << std::endl;
 }
};
int main() {
 Complex num1(3.0, 4.0);
 Complex num2(1.0, 2.0);
 // Unary operator overloading (-)
 Complex result1 = -num1;
 std::cout << "Unary Operator Overloading (-)" << std::endl;
 result1.display();
 // Binary operator overloading (+)
 Complex result2 = num1 + num2;
 std::cout << "\nBinary Operator Overloading (+)" << std::endl;
 result2.display();
 return 0;
}
