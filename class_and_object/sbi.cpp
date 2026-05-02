//Perform multilevel inheritance in the banking system when bank is the SBI and custumer is a ramprasad and his account acess sbi bank and customer detail

#include<iostream>
using namespace std;

class Bank {
public:
    void bank() {
        cout << "Bank: SBI" << endl;
    }
};

class Customer : public Bank {
public:
    void customer() {
        cout << "Customer: Ramprasad" << endl;
    }
};

class Account : public Customer {
public:
 int balance;

    void showAccount() {
        balance = 5000;
        cout << "Balance: " << balance << endl;
    }
    void account() {
        cout << "Account Accessed" << endl;
    }
};

int main() {
    Account a;

    a.bank();
    a.customer();
    a.showAccount();
    a.account();

    return 0;
}