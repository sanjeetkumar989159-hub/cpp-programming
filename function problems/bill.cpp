#include <iostream>
using namespace std;
int calculateBill()
{
    char name[20];
    int units, bill;

    cout << "Enter Name: ";
    cin >> name;

    cout << "Enter Units: ";
    cin >> units;

    if (units <= 100)
        bill = units * 2;
    else
        bill = (100 * 2) + (units - 100) * 3;

    bill = bill + 100; 

    cout << "\n--- BILL SUMMARY ---\n";
    cout << "Name   : " << name << endl;
    cout << "Units  : " << units << endl;

    return bill;
}

int main()
{
    int total;

    total = calculateBill(); 

    cout << "Total  : " << total << endl;

    return 0;
}