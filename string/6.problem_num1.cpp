#include<iostream>
#include<cstring>
using namespace std;
int main(){

     // Take two strings and check if they are equal without using == (asignment) Operator ???

    string str1;
    cout<<"Enter string first :"<<endl;

    getline(cin,str1);

    string str2;
    cout<<"Enter string second :"<<endl;
    getline(cin,str2);

    if(str1.length() != str2.length()){
        cout<<"Not equal";
        return 0;
    }

    for(int i = 0;str1[i] != '\0';i++){
        if(str1[i] != str2[i]){
            cout<<"Not equal";
            return 0;
        }
    }
    cout<<"Equal";
    return 0;

    return 0;
}