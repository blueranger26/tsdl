#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "Animal is eating..." << endl;
    }
};

// Derived class 1
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog is barking..." << endl;
    }
};

// Derived class 2
class Cat : public Animal {
public:
    void meow() {
        cout << "Cat is meowing..." << endl;
    }
};

int main() {
    Dog myDog;
    myDog.eat();  // Accessing base class method
    myDog.bark(); // Accessing derived class method

    Cat myCat;
    myCat.eat();  // Accessing base class method
    myCat.meow(); // Accessing derived class method

    return 0;
}
