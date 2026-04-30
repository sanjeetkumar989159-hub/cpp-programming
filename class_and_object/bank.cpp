
//WAP to fetch bank details with credit a nd debit amount by using class and object there must be ensure that there must be a constructor
 #include<iostream>
using namespace std;

class Bank {
public:
    string name;
    int balance;

    
    Bank() {
        name = "sanjeet";
        balance = 1000;

    
        balance = balance + 500;

        
        balance = balance - 200;
    }
 void display()
{
        cout << "Name: " << name << endl;
        cout << "Final Balance= " << balance << endl;
}
};

int main() 
{
    Bank b1; 
   b1.display () ;
    return 0;
}
