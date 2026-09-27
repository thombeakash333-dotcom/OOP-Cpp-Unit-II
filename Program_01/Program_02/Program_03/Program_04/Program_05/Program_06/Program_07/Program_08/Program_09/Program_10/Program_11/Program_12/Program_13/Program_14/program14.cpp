#include <iostream>
using namespace std;

class University {
public:
    class Department {
    public:
        void display() {
            cout << "Department: Artificial Intelligence and Data Science" << endl;
        }
    };
};

int main() {
    University::Department dept;

    dept.display();

    return 0;
}
