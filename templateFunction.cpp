#include <iostream>
// Template function for finding the maximum of two values
template <typename T>
T maximum(T a, T b) {
 return (a > b) ? a : b;
}
int main() {
 int intMax = maximum(10, 20);
 std::cout << "Maximum of 10 and 20 is: " << intMax << std::endl;
 double doubleMax = maximum(3.14, 6.28);
 std::cout << "Maximum of 3.14 and 6.28 is: " << doubleMax << std::endl;
 char charMax = maximum('a', 'z');
 std::cout << "Maximum of 'a' and 'z' is: " << charMax << std::endl;
 return 0;
}
