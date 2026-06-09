#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
 
    reverse(str.begin(), str.end());
 
    cout << "Reversed string = " << str;
    return 0;
}

