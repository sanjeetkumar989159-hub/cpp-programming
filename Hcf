#include<iostream>
using namespace std;
int HCF(int x,int y){
    int hcf = 1;
    for(int i = 1;i<min(x,y);i++){
        if(x % i == 0 && y % i == 0){
            hcf = i;
        }

    }
    return hcf;
}
int main(){

    int a,b;
    cout<<"Enter the positive value of a & b :";
    cin>>a>>b;

    int hcf = HCF(a,b);

    int lcm = (a*b)/hcf;

    cout<<"The hcf of "<<a<<" and "<<b<<" = "<<lcm;
    
    return 0;
}
