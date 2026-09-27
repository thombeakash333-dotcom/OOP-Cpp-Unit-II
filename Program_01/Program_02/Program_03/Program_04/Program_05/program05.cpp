#include <iostream>
using namespace std;

class Vehicle {
public:
    void displayVehicle() {
        cout << "This is a vehicle." << endl;
    }
};

class Car : public Vehicle {
public:
    void displayCar() {
        cout << "This is a car." << endl;
    }
};

class Bike : public Vehicle {
public:
    void displayBike() {
        cout << "This is a bike." << endl;
    }
};

int main() {
    Car c;
    Bike b;

    c.displayVehicle();
    c.displayCar();

    b.displayVehicle();
    b.displayBike();

    return 0;
}
