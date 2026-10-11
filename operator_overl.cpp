#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    // Constructor
    BankAccount(double b = 0.0) {
        balance = b;
    }

    // Display balance
    void displayBalance() const {
        cout << "Balance: " << balance << endl;
    }

    // Overload + operator
    BankAccount operator+(const BankAccount& other) const {
        return BankAccount(balance + other.balance);
    }

    // Overload == operator
    bool operator==(const BankAccount& other) const {
        return balance == other.balance;
    }
};

int main() {
    double bal1, bal2;

    // Input balances
    cout << "Enter balance for Account 1: ";
    cin >> bal1;

    cout << "Enter balance for Account 2: ";
    cin >> bal2;

    // Create objects
    BankAccount acc1(bal1);
    BankAccount acc2(bal2);

    // Add two accounts
    BankAccount accCombined = acc1 + acc2;

    cout << "Combined Account ";
    accCombined.displayBalance();

    // Compare two accounts
    if (acc1 == acc2) {
        cout << "The two accounts have identical balances." << endl;
    } else {
        cout << "The two accounts have different balances." << endl;
    }

    return 0;
}