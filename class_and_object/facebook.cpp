//WAP to perform facebook login application and display the message login successfully Need to ensure Facebook login user must have 18+ age 
//Class name should be FB and member function should be justified the face book login application by using class and object.
#include<iostream>
using namespace std;
class FB
{
    public:
    string name;
    int age;
    string email;
    int password;
    void check()
    {
        cout<<"enter the name";
        getline(cin,name);
        
        cout<<"enter the age ";
        cin>>age;
        if(age>18)
        {
        cout<<"login succesfull";
        }
        else
    {
            cout<<"Not login";

    }
    }
};

int main(){
FB c;
c.check();
}
