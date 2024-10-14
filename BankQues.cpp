#include <iostream>
using namespace std;
class BankAccount {
protected:
    string accountHolder;
    float balance;
    static float total_balance;
public:
    BankAccount(string n, float initialBalance)
        : accountHolder(n), balance(initialBalance) {
        total_balance += initialBalance;
    }
    void deposit(float amount) {
        if (amount > 0) {
            balance += amount;
            updateTotalBalance(amount);
        }
    }
    void withdrawl(float amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            updateTotalBalance(-amount);
        }
    }
    float getBalance() const {
        return balance;
    }
    static void updateTotalBalance(float amount) {
        total_balance += amount;
    }
    static float getTotalBalance() {
        return total_balance;
    }
    string getAccountHolder() const {
        return accountHolder;
    }
};
float BankAccount::total_balance = 0;
int main() {
    BankAccount acc("Rahul", 0);
    acc.deposit(1000);
    cout << "Account Holder: " << acc.getAccountHolder() << endl;
    acc.deposit(1000);
    acc.withdrawl(0);
    cout << "Total Balance: " << BankAccount::getTotalBalance() << endl;
    return 0;
}
