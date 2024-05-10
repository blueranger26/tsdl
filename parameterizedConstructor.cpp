#include <iostream>

class MyClass {
private:
    int data;

public:
    // Parameterized Constructor
    MyClass(int val) : data(val) {
        std::cout << "Parameterized Constructor called with value " << val << std::endl;
    }

    // Member function to display data
    void displayData() {
        std::cout << "Data: " << data << std::endl;
    }
};

int main() {
    MyClass obj(10); // Creating object triggers the parameterized constructor
    obj.displayData(); // Displaying data stored in object
    return 0;
}
