#include <iostream>
// Inline function to calculate the square of a number
inline int square(int num) {
 return num * num;
}
int main() {
 int num;
 std::cout << "Enter a number: ";
 std::cin >> num;
 // Call to the inline function square
 int result = square(num);
 std::cout << "Square of " << num << " is: " << result << std::endl;

 return 0;
}
