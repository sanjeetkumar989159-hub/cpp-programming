#include <iostream>
#include <cmath>
using namespace std;

int count_digt(int num)
{
    if (num == 0)
        return 1;

    int count = 0;
    while(num)
    {
        count++;
        num /= 10;
    }
    return count;
}

bool armstrong(int num, int digit)
{
    int n = num, ans = 0, rem;

    while(n)
    {
        rem = n % 10;
        ans += (int)pow(rem, digit);
        n /= 10;
    }

    return ans == num;
}

int main()
{
    int num;
    cin >> num;

    int digit = count_digt(num);

    if(armstrong(num, digit))
        cout << "Armstrong Number";
    else
        cout << "Not an Armstrong Number";

    return 0;
}