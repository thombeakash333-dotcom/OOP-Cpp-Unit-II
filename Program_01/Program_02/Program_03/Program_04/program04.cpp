#include <iostream>
using namespace std;

class Person {
protected:
    string name;

public:
    Person(string n) {
        name = n;
    }
};

class Employee : public Person {
protected:
    int employeeID;

public:
    Employee(string n, int id) : Person(n) {
        employeeID = id;
    }
};

class Manager : public Employee {
private:
    string department;

public:
    Manager(string n, int id, string dept)
        : Employee(n, id) {
        department = dept;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Department: " << department << endl;
    }
};

int main() {
    Manager m("Akash", 101, "AI & Data Science");

    m.display();

    return 0;
}
