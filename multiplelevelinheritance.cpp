#include <iostream>
using namespace std;

// Base class
class Vehicle {
public:
    void start() {
        cout << "Vehicle started." << endl;
    }
};

// Intermediate derived class
class Car : public Vehicle {
public:
    void drive() {
        cout << "Car is being driven." << endl;
    }
};

// Another intermediate derived class
class ElectricCar : public Car {
public:
    void charge() {
        cout << "Electric car is charging." << endl;
    }
};

// Derived class
class Tesla : public ElectricCar {
public:
    void autopilot() {
        cout << "Tesla is driving in autopilot mode." << endl;
    }
};

int main() {
    Tesla myTesla;
    myTesla.start();    // Accessing base class method
    myTesla.drive();    // Accessing intermediate derived class method
    myTesla.charge();   // Accessing another intermediate derived class method
    myTesla.autopilot(); // Accessing derived class method

    return 0;
}
