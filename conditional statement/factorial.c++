//factorial
#include<iostream>
using namespace std;        
int main()
{
    int n,fact=1;
    cout<<"enter the value of n =";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    cout<<"the factorial of n is "<<fact;
    return 0;
}