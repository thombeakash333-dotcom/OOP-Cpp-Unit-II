#include <iostream>
using namespace std;

class Person {
public:
    string name;

    void displayPerson() {
        cout << "Name: " << name << endl;
    }
};

class Student : public Person {
public:
    int rollNo;

    void displayStudent() {
        cout << "Roll No: " << rollNo << endl;
    }
};

int main() {
    Student s;

    s.name = "Akash";
    s.rollNo = 101;

    s.displayPerson();
    s.displayStudent();

    return 0;
}
