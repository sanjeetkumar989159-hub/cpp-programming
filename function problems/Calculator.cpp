#include <iostream>
using namespace std;

float num1, num2;

// functions
float add() 
{ 
    return num1 + num2;
 }
float subtract() 
{ 
    return num1 - num2;
 }
float multiply() {
     return num1 * num2;
     }
float divide() 
{ 
    return num1 / num2;
 }

int main() {
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Addition = " << add() << endl;
    cout << "Subtraction = " << subtract() << endl;
    cout << "Multiplication = " << multiply() << endl;
    cout << "Division = " << divide() << endl;

    return 0;
}