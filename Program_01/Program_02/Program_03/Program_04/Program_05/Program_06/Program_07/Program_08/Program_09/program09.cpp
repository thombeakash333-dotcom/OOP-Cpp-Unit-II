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

class Student : public Person {
private:
    int rollNo;

public:
    Student(string n, int r) : Person(n) {
        rollNo = r;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
    }
};

int main() {
    Student s("Akash", 101);

    s.display();

    return 0;
}
