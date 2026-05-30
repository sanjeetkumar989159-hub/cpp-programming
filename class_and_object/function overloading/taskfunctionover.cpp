//WAP to perform banking system by using function overloading and ensure function overloading excute most of the banking operations.
//atleast three function must be overloaded
#include<iostream>
using namespace std;
class bank{
public:
    int banking(int balance)
    {
        cout<<"Balance: "<<balance<<endl;
    }
    int banking(int balance,int credit)
    {
        balance=balance+credit;

        cout<<"Balance after credit: "<<balance<<endl;
    }
    int banking(int balance,int credit,int debit)
    {
        balance=balance+credit-debit;

        cout<<"Balance after credit and debit: "<<balance<<endl;
    }

};
int main()
{
   bank b;
   b.banking(1000);
   b.banking(1000,500); 
    b.banking(1000,500,200);
     return 0;
}