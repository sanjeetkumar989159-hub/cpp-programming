#include <iostream>
using namespace std;

int banking()
{
    char name[20];
    int balance, choice = 0, amount;

    cout << "Enter Name: ";
    cin >> name;

    cout << "Enter Initial Balance: ";
    cin >> balance;

    while (choice != 4)
    {
        cout << "\n--- MENU ---\n";
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Check Balance\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter Deposit Amount: ";
            cin >> amount;
            balance = balance + amount;
        }
        else if (choice == 2) {
            cout << "Enter Withdraw Amount: ";
            cin >> amount;
            if (amount <= balance)
                balance = balance - amount;
            else
                cout << "Insufficient Balance\n";
        }
        else if (choice == 3) {
            cout << "Current Balance = " << balance << endl;
        }
    }

    cout << "\n--- FINAL DETAILS ---\n";
    cout << "Name    : " << name << endl;
    cout << "Balance : " << balance << endl;

    return balance;
}

int main()
{
    int finalBalance;

    finalBalance = banking(); 

    cout << "Final Balance = " << finalBalance << endl;

    return 0;
}