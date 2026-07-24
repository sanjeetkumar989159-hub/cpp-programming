#include <iostream>
using namespace std;

void swapNumbers(int a, int b){
    int temp = a;
    a = b;
    b = temp;

    cout << "After Swapping:" << endl;
    cout << "x = " << a << endl;
    cout << "y = " << b;
}

int main()
{
    int x, y;

    cout << "Enter x: ";
    cin>>x;
    cout << "Enter y: ";
    cin >>y;

    swapNumbers(x, y);


    return 0;
}