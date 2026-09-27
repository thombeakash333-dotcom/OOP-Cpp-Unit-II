#include <iostream>
using namespace std;

class Academic {
protected:
    float marks;

public:
    void setMarks(float m) {
        marks = m;
    }

    void displayAcademic() {
        cout << "Academic Marks: " << marks << endl;
    }
};

class Sports {
protected:
    float sportsScore;

public:
    void setSportsScore(float s) {
        sportsScore = s;
    }

    void displaySports() {
        cout << "Sports Score: " << sportsScore << endl;
    }
};

class Student : public Academic, public Sports {
public:
    void display() {
        displayAcademic();
        displaySports();
    }
};

int main() {
    Student s;

    s.setMarks(85.5);
    s.setSportsScore(90.0);

    s.display();

    return 0;
}
