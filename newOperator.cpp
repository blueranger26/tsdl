#include <iostream>
int main() {
 // Allocate memory for an integer
 int* ptr = new int;
 // Check if memory allocation was successful
 if (ptr == nullptr) {
 std::cout << "Memory allocation failed!" << std::endl;
 return 1;
 }
 // Assign a value to the allocated memory
 *ptr = 42;
 // Display the value
 std::cout << "Value stored at the allocated memory location: " << *ptr <<
std::endl;
 // Deallocate memory
 delete ptr;
 return 0;
}
