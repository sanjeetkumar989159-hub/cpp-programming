#include<iostream>
using namespace std;
int main(){

    // WAP to count the vowel and every vowel count only one times ????

    string str;
    cout<<"Enter your sentence :"<<endl;

    getline(cin,str);
    // cout<<str<<endl;
    int count = 0;

    int a = 1;
    int e = 1;
    int I = 1;
    int o = 1;
    int u = 1;

    for(int i = 0 ; str[i] != '\0';i++){

        if((str[i] == 'a' || str[i] == 'A') && a == 1){
            count++;
            a = 0;
        }
        else if((str[i] == 'e' || str[i] == 'E') && e == 1){
            count++;
            e = 0;
        }
        else if((str[i] == 'i' || str[i] == 'I') && I == 1){
            count++;
            I = 0;
        }
        else if((str[i] == 'o' || str[i] == 'O') && o == 1){
            count++;
            o = 0;
        }
        else if((str[i] == 'u' || str[i] == 'U') && u == 1){
            count++;
            u = 0;
        }
    }
    
    cout<<"The number of vowel is : "<<count;
    return 0;
}