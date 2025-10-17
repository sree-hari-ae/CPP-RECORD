//  Program for inheritance: BankAccount -> SavingsAccount, CurrentAccount
#include <iostream>
using namespace std;

class BankAccount {
protected:
    long account_number;
    double balance;

public:
    void input() {
        cout << "Enter account number: ";
        cin >> account_number;
        cout << "Enter balance: ";
        cin >> balance;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited: " << amount << ", New balance: " << balance << endl;
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << ", New balance: " << balance << endl;
        } else {
            cout << "Insufficient balance." << endl;
        }
    }
};

class SavingsAccount : public BankAccount {
private:
    double rate_of_interest;

public:
    void inputSavings() {
        input();
        cout << "Enter rate of interest: ";
        cin >> rate_of_interest;
    }

    void calculateInterest() {
        double interest = balance * (rate_of_interest / 100);
        cout << "Interest: " << interest << endl;
        deposit(interest);
    }
};

class CurrentAccount : public BankAccount {
private:
    double min_balance = 1000; 

public:
    void inputCurrent() {
        input();
    }

    void calculateServiceCharge() {
        if (balance < min_balance) {
            double charge = 50; 
            cout << "Service charge: " << charge << endl;
            withdraw(charge);
        } else {
            cout << "No service charge." << endl;
        }
    }
};

int main() {
    SavingsAccount sa;
    cout << "Enter Savings Account details:" << endl;
    sa.inputSavings();
    double dep, wd;
    cout << "Enter deposit amount: ";
    cin >> dep;
    sa.deposit(dep);
    cout << "Enter withdraw amount: ";
    cin >> wd;
    sa.withdraw(wd);
    sa.calculateInterest();

    CurrentAccount ca;
    cout << "\nEnter Current Account details:" << endl;
    ca.inputCurrent();
    cout << "Enter deposit amount: ";
    cin >> dep;
    ca.deposit(dep);
    cout << "Enter withdraw amount: ";
    cin >> wd;
    ca.withdraw(wd);
    ca.calculateServiceCharge();
    return 0;

}
