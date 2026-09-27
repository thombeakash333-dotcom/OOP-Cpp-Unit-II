#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    string name;
    int id;
    double basicSalary;

public:
    Employee(string n, int i, double salary)
        : name(n), id(i), basicSalary(salary) {}

    virtual double calculateSalary() = 0;

    virtual void display() {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << id << endl;
    }

    virtual ~Employee() {}
};

class FullTimeEmployee : public Employee {
public:
    FullTimeEmployee(string n, int i, double salary)
        : Employee(n, i, salary) {}

    double calculateSalary() override {
        return basicSalary + (0.20 * basicSalary);
    }

    void display() override {
        cout << "Employee Type: Full-Time" << endl;
        Employee::display();
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "Total Salary: " << calculateSalary() << endl;
    }
};

class PartTimeEmployee : public Employee {
private:
    int hoursWorked;
    double hourlyRate;

public:
    PartTimeEmployee(string n, int i, int hours, double rate)
        : Employee(n, i, 0), hoursWorked(hours), hourlyRate(rate) {}

    double calculateSalary() override {
        return hoursWorked * hourlyRate;
    }

    void display() override {
        cout << "Employee Type: Part-Time" << endl;
        Employee::display();
        cout << "Hours Worked: " << hoursWorked << endl;
        cout << "Hourly Rate: " << hourlyRate << endl;
        cout << "Total Salary: " << calculateSalary() << endl;
    }
};

int main() {
    FullTimeEmployee fullTime("Rahul", 101, 50000);
    PartTimeEmployee partTime("Priya", 102, 80, 300);

    cout << "Full-Time Employee Details:" << endl;
    fullTime.display();

    cout << "\nPart-Time Employee Details:" << endl;
    partTime.display();

    return 0;
}
