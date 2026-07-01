#include<iostream>
using namespace std;
int main(){

    // Print Reverse string using for loop ?

    string str;
    cout<<"Enter your sentence :"<<endl;

    getline(cin,str);
    cout<<"Original string "<<endl;

    cout<<str<<endl;

    int size = 0;
    for(int i = 0;str[i] != '\0';i++){
        size +=1;
    }

    cout<<"Size = "<<size<<endl;
    cout<<"-------------------"<<endl;
    cout<<"After reverse "<<endl<<endl;
    cout<<"-------------------"<<endl;

    for(int i = size; i>=0;i--){
        cout<<str[i];
    }
    return 0;
}