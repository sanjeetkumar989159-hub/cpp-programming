#include<iostream>
using namespace std;

int main()
{
    int a,rem=0,ans=0,mul=1;

    cout<<"Enter the value of a :";
    cin>>a;

    while( a > 0)
    {
        rem = a % 2;
        a = a / 2;
        ans = rem *mul + ans;
        mul= mul *10;
    }
        cout<<ans;
}