#include<iostream>
using namespace std;
int main(){

    // Change lower case to upper case without using built in function ???

    string str;
    cout<<"Enter your sentence :"<<endl;

    getline(cin,str);

    for(int i = 0;str[i] !='\0';i++){
        if(str[i] >= 97 && str[i] != ' '){
            str[i] = str[i] - 32;
        }
        else if(str[i] == ' '){
            str[i] = ' ';
        }
        cout<<str[i];
    }

    return 0;
}