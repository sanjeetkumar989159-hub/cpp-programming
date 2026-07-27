#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;

    if (num < 1)
    {
        cout << "Negative or zero can't be a power of 2";
        return 0;
    }

    while (num != 1)
    {
        if (num % 2 == 1)
        {
            cout << "false";
            return 0;
        }

        num = num / 2;
    }

    cout << "true";

    return 0;
}