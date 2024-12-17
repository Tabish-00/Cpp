#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;

    // Private member function
    void deductFee(double fee) {
        balance -= fee;
    }

public:
    // Constructor to initialize balance
    BankAccount(double initialBalance) {
        balance = initialBalance;
    }

    // Public member function to display balance
    void displayBalance() {
        cout << "Balance: $" << balance << endl;
    }

    // Public member function to perform transaction (calls private function)
    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            deductFee(1.0);  // Deduct a transaction fee (private function)
            cout << "Withdrawn: $" << amount << endl;
        } else {
            cout << "Insufficient funds." << endl;
        }
    }
};

int main() {
    // Create a BankAccount object
    BankAccount account(1000.0);

    // Call public functions
    account.displayBalance();
    account.withdraw(200.0);
    account.displayBalance();

    // The following would cause a compilation error (private function cannot be called directly)
    // account.deductFee(10.0); // Error: 'deductFee' is private

    return 0;
}
