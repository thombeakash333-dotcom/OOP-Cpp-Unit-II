#include <iostream>
#include <string>
using namespace std;

class Vehicle {
protected:
    string vehicleNumber;
    string model;
    double rentPerDay;

public:
    Vehicle(string number, string m, double rent)
        : vehicleNumber(number), model(m), rentPerDay(rent) {}

    virtual void display() {
        cout << "Vehicle Number: " << vehicleNumber << endl;
        cout << "Model: " << model << endl;
        cout << "Rent Per Day: " << rentPerDay << endl;
    }

    virtual double calculateRent(int days) {
        return rentPerDay * days;
    }

    virtual ~Vehicle() {}
};

class Car : public Vehicle {
public:
    Car(string number, string m, double rent)
        : Vehicle(number, m, rent) {}

    void display() override {
        cout << "Vehicle Type: Car" << endl;
        Vehicle::display();
    }
};

class Bike : public Vehicle {
public:
    Bike(string number, string m, double rent)
        : Vehicle(number, m, rent) {}

    void display() override {
        cout << "Vehicle Type: Bike" << endl;
        Vehicle::display();
    }
};

int main() {
    Car car("MH12AB1234", "Maruti Fronx", 1500);
    Bike bike("MH12CD5678", "Honda Activa", 500);

    int days = 3;

    cout << "Car Details:" << endl;
    car.display();
    cout << "Total Rent for " << days << " days: "
         << car.calculateRent(days) << endl;

    cout << "\nBike Details:" << endl;
    bike.display();
    cout << "Total Rent for " << days << " days: "
         << bike.calculateRent(days) << endl;

    return 0;
}
