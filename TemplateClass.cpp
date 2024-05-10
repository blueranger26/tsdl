#include <iostream>
// Template class for a generic container
template <typename T>
class Container {
private:
 T value;
public:
 // Constructor
 Container(T val) : value(val) {}
 // Function to get the value
 T getValue() {
 return value;
 }
};
int main() {
 // Creating a Container object with int type
 Container<int> intContainer(10);
 std::cout << "Value in intContainer: " << intContainer.getValue() <<
std::endl;
 // Creating a Container object with double type
 Container<double> doubleContainer(3.14);
 std::cout << "Value in doubleContainer: " << doubleContainer.getValue() <<
std::endl;
 // Creating a Container object with string type
 Container<std::string> stringContainer("Hello, World!");
 std::cout << "Value in stringContainer: " << stringContainer.getValue() <<
std::endl;
 return 0;
}