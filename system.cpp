#include<iostream>
using namespace std;
class payment{
    public:
   virtual void pay() = 0;
};

class upi : public payment{

    private:
    long long upi_number;
    int amount;

    public:

    void input(){
        cout<<"Enter upi number : ";
        cin>>upi_number;
        cout<<"Enter amount : ";
        cin>>amount;
    }

    void pay(){
        cout<<"\n==============================="<<endl;
        cout<<"UPI Number : "<<upi_number<<endl;
        cout<<"amount : "<<amount<<endl;
        cout<<"==================================\n";
    }

};

class credit_card : public payment{

    private:
    int credit_card;
    int expiry_date_upper;
    int expiry_date_lower;
    int amount;

    public:
    void input(){
        cout<<"Enter credit card number : ";
        cin>>credit_card;

        cout<<"Enter expiry date upper : ";
        cin>>expiry_date_upper;

        cout<<"Enter expiry date lower : ";
        cin>>expiry_date_lower;

        cout<<"Enter Amount : ";
        cin>>amount;
    }

    void pay(){
        cout<<"\n"<<endl;
        cout<<"Credit Card number : "<<credit_card<<endl;
        cout<<"Expiry date : "<<expiry_date_upper<<" / "<<expiry_date_lower;
        cout<<"\nAmount : "<<amount;
        cout<<"\n======================================\n";
    }
    
};

int main(){
    upi u;
    u.input();
    u.pay();

    credit_card c;
    c.input();
    c.pay();
}