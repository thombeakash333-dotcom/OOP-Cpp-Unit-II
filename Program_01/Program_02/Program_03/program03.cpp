#include <iostream>
using namespace std;

class Base {
public:
    int publicMember = 10;

protected:
    int protectedMember = 20;

private:
    int privateMember = 30;
};

class PublicDerived : public Base {
public:
    void display() {
        cout << "Public Inheritance:" << endl;
        cout << "Public Member: " << publicMember << endl;
        cout << "Protected Member: " << protectedMember << endl;
    }
};

class PrivateDerived : private Base {
public:
    void display() {
        cout << "Private Inheritance:" << endl;
        cout << "Public Member: " << publicMember << endl;
        cout << "Protected Member: " << protectedMember << endl;
    }
};

int main() {
    PublicDerived obj1;
    PrivateDerived obj2;

    obj1.display();
    obj2.display();

    return 0;
}
