#include<iostream>
using namespace std;
int main(){

    // Remove all spaces from a string 

    string str;
    cout<<"Enter your sentence :"<<endl;

    getline(cin,str);

    for(int i = 0;str[i] != '\0';i++){
        if(str[i] == ' '){
            i++;
        }
        cout<<str[i];
    }

    return 0;
}