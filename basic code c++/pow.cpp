#include<iostream>
using namespace std;
int main()
{
    int a , exp , pow=1;
    cout<<"enter the number";
    cin>>a;
    cout<<"enter the power";
    cin>>exp;
    for(int i=0;i<exp;i++)
    {
        pow = pow * a;
    }
    cout<<"the power of "<<a<<" is "<<pow;
}