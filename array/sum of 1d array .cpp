#include<iostream>
using namespace std;
int main(){

    int arr[7] = {2,4,5,6,7,8,3};
    int sum = 0;
    for(int i = 0 ;i < 7;i++){
        sum +=arr[i];
    }
    cout<<"sum = "<<sum;
    return 0;
}