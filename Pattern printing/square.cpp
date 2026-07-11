// ****
// ****
// ****
#include<iostream>
using namespace std;
int main()
{
    int i ,j,n,m;
    cout<<"Enter the value of row and column:";
    cin>>n>>m;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}