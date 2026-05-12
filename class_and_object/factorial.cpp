//WAP a to find factorial of -6 desired output
#include <iostream>
using namespace std;

class Factorial {
public:
    int n, fact = 1;

    void input() {
        cout << "Enter number: ";
        cin >> n;
    }

    void calculate() {

        if(n < 0) {
            cout << "Factorial of negative number is not possible";
        }
        else {

            for(int i=1; i<=n; i++) {
                fact = fact * i;
            }

            cout << "Factorial = " << fact;
        }
    }
};

int main() {

    Factorial obj;

    obj.input();
    obj.calculate();

    return 0;
}