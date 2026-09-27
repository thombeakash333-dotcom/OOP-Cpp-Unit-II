#include <iostream>
using namespace std;

class Person {
protected:
    string name;

public:
    Person(string n) {
        name = n;
    }

    void displayPerson() {
        cout << "Name: " << name << endl;
    }
};

class Student : virtual public Person {
public:
    Student() : Person("Unknown") {}
};

class Employee : virtual public Person {
public:
    Employee() : Person("Unknown") {}
};

class TeachingAssistant : public Student, public Employee {
public:
    TeachingAssistant(string n) : Person(n) {}

    void display() {
        displayPerson();
        cout << "Role: Teaching Assistant" << endl;
    }
};

int main() {
    TeachingAssistant ta("Riya");

    ta.display();

    return 0;
}
