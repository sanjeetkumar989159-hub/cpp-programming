#include<iostream>
using namespace std;
int main()
{
    int a,count=0;
    cout<<"enter the value of a";
    cin>>a;
    while(a!=0)
    {
        a=a/10;
        count++;
    
    }
    cout<<"count digit is ="<<count;
}