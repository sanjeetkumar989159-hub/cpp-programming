#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n";
    cin>>n;

    if(n<2)
    {
        cout<<"not posible to fin prime";
    }
    else
    
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<"not prime";
             return 0;
        }
       
    }
    cout<<"prime";
}