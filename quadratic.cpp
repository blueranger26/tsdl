#include <iostream>
#include <cmath>
int main() {
 double a, b, c, discriminant, root1, root2;
 std::cout << "Enter coefficients a, b and c: ";
 std::cin >> a >> b >> c;
 discriminant = b * b - 4 * a * c;
 if (discriminant > 0) {
 root1 = (-b + sqrt(discriminant)) / (2 * a);
 root2 = (-b - sqrt(discriminant)) / (2 * a);
 std::cout << "Roots are real and different." << std::endl;
 std::cout << "Root 1 = " << root1 << std::endl;
 std::cout << "Root 2 = " << root2 << std::endl;
 } else if (discriminant == 0) {
 root1 = root2 = -b / (2 * a);
 std::cout << "Roots are real and same." << std::endl;
 std::cout << "Root 1 = Root 2 = " << root1 << std::endl;
 } else {
 double realPart = -b / (2 * a);
 double imaginaryPart = sqrt(-discriminant) / (2 * a);
 std::cout << "Roots are complex and different." << std::endl;
 std::cout << "Root 1 = " << realPart << " + " << imaginaryPart << "i"
<< std::endl;
 std::cout << "Root 2 = " << realPart << " - " << imaginaryPart << "i"
<< std::endl;
 }
 return 0;
}