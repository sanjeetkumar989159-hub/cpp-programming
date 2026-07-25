#include<iostream>
#include<string.h>
using namespace std;

int main(){

    string c;
    cout<<"Enter string : ";
    getline(cin , c);

    int length = 0;

    int i = 0;

    while(c[i] != '\0'){

        if(c[i] != ' '){
            length++;
        }

        i++;
    }

    cout<<"Length : "<<length;
}