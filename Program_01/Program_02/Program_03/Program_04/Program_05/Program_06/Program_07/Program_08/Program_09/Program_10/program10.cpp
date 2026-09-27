#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual void display() {
        cout << "This is a vehicle." << endl;
    }
};

class Car : public Vehicle {
public:
    void display() override {
        cout << "This is a car." << endl;
    }
};

class Boat : public Vehicle {
public:
    void display() override {
        cout << "This is a boat." << endl;
    }
};

int main() {
    Vehicle* v;

    Car c;
    Boat b;

    v = &c;
    v->display();

    v = &b;
    v->display();

    return 0;
}
