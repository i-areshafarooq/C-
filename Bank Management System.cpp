#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string name;
    int accountNumber;
    double balance;

public:
    BankAccount() {
        balance = 0.0;
    }

    void createAccount() {
        cout << "Enter your name: ";
        getline(cin, name);
        cout << "Enter account number: ";
        cin >> accountNumber;
        cout << "Enter initial deposit: Rs. ";
        cin >> balance;
        cin.ignore(); // to consume leftover newline
        cout << "Account created successfully!\n";
    }

    void deposit() {
        double amount;
        cout << "Enter amount to deposit: Rs. ";
        cin >> amount;
        balance += amount;
        cout << "Deposited successfully!\n";
    }

    void withdraw() {
        double amount;
        cout << "Enter amount to withdraw: Rs. ";
        cin >> amount;
        if (amount > balance) {
            cout << "Insufficient balance!\n";
        } else {
            balance -= amount;
            cout << "Withdrawal successful!\n";
        }
    }

    void checkBalance() {
        cout << "Account Holder: " << name << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Current Balance: Rs. " << balance << endl;
    }
};

int main() {
    BankAccount account;
    int choice;

    while (true) {
        cout << "\n--- Bank Management System ---\n";
        cout << "1. Create Account\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Check Balance\n";
        cout << "5. Exit\n";
        cout << "Choose an option: ";
        cin >> choice;
        cin.ignore(); // clear newline after number input

        switch (choice) {
            case 1:
                account.createAccount();
                break;
            case 2:
                account.deposit();
                break;
            case 3:
                account.withdraw();
                break;
            case 4:
                account.checkBalance();
                break;
            case 5:
                cout << "Thank you for using our system. Goodbye!\n";
                return 0;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}

