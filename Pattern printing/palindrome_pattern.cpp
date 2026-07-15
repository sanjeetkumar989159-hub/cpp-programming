#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the vale of n :";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1; j<=n-i;j++)
        {
            cout<<" ";
        } 
        for(int k=1;k<=i;k++)
        {
        cout<<k;
        }
        for(int m=i-1;m>=1;m--)
        {
        cout<<m;
        }
        cout<<endl;
    }

}
