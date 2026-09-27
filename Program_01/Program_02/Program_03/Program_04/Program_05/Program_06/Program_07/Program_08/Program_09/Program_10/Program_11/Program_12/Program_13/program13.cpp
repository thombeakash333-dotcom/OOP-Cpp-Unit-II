#include <iostream>
using namespace std;

class Account {
private:
    double balance;

public:
    Account(double b) {
        balance = b;
    }

    friend class Auditor;
};

class Auditor {
public:
    void checkBalance(Account acc) {
        cout << "Account Balance: " << acc.balance << endl;
    }
};

int main() {
    Account account(50000);

    Auditor auditor;
    auditor.checkBalance(account);

    return 0;
}
