#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "Animal is eating..." << endl;
    }
};

// Intermediate derived class
class Mammal : public Animal {
public:
    void breathe() {
        cout << "Mammal is breathing..." << endl;
    }
};

// Derived class
class Dog : public Mammal {
public:
    void bark() {
        cout << "Dog is barking..." << endl;
    }
};

int main() {
    Dog myDog;
    myDog.eat();    // Accessing base class method
    myDog.breathe(); // Accessing intermediate derived class method
    myDog.bark();   // Accessing derived class method

    return 0;
}
