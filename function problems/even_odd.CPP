# include <iostream>
using namespace std;

int even(int a)
{
    if (a % 2 == 0)
        cout << a << " is an even number." << endl;
}
int odd(int b)
{
    if (b % 2 != 0)
        cout <<b << " is an odd number." << endl;
}
int main()
{

    even(6);
    odd(5);

    return 0;
}