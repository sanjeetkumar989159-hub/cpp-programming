#include<iostream>
using namespace std;
int add(int a, float b);// Function prototype
int add(int a, float b)// Function definition
{
    int c;
    //cout<<"eneter the value of a and b";
    //cin>>a>>b;
    c=a+b;
    cout<<"the sum of a and b is "<<c<<endl;
}
int main()
{
add(15.0, 20.0);// Function call


}