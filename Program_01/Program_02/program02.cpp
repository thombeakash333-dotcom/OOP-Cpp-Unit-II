#include <iostream>
using namespace std;

class Employee {
protected:
    double salary;

public:
    void setSalary(double s) {
        salary = s;
    }
};

class Developer : public Employee {
public:
    void displaySalary() {
        cout << "Developer Salary: " << salary << endl;
    }
};

int main() {
    Developer d;

    d.setSalary(50000);
    d.displaySalary();

    return 0;
}
