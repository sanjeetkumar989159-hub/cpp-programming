#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    string name;
    int accountNo;
    float balance;

public:
    
   void createAccount()
{
    cout << "========== CREATE ACCOUNT ==========\n";


    cout << "Enter Customer Name: ";
    getline(cin, name);

    cout << "Enter Account Number: ";
    cin >> accountNo;

    cout << "Enter Initial Balance: ";
    cin >> balance;

    cout << "\nAccount Created Successfully!\n";
}


    void deposit()
    {
        float amount;

        cout << "Enter Deposit Amount: ";
        cin >> amount;

        if (amount > 0)
        {
            balance = balance + amount;
            cout << "Amount Deposited Successfully!\n";
        }
        else
        {
            cout << "Invalid Amount!\n";
        }
    }

    void withdraw()
    {
        float amount;

        cout << "Enter Withdraw Amount: ";
        cin >> amount;

        if (amount <= 0)
        {
            cout << "Invalid Amount!\n";
        }
        else if (amount > balance)
        {
            cout << "Insufficient Balance!\n";
        }
        else
        {
            balance = balance - amount;
            cout << "Withdrawal Successful!\n";
        }
    }


    void display()
    {
        cout << "\n========== ACCOUNT DETAILS ==========\n";
        cout << "Customer Name  : " << name << endl;
        cout << "Account Number : " << accountNo << endl;
        cout << "Current Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount account;
    int choice;

    account.createAccount();

    do
    {
        cout << "\n========== BANK MENU ==========\n";
        cout << "1. Deposit Money\n";
        cout << "2. Withdraw Money\n";
        cout << "3. Display Account Details\n";
        cout << "4. Exit\n";
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            account.deposit();
            break;

        case 2:
            account.withdraw();
            break;

        case 3:
            account.display();
            break;

        case 4:
            cout << "\nThank You for Using Our Banking System!\n";
            break;

        default:
            cout << "Invalid Choice! Please Try Again.\n";
        }

    } while (choice != 4);

    return 0;
}