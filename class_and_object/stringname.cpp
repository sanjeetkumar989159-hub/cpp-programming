#include <iostream>
using namespace std;

class Name {
public:
    string first, last;

    void input() {
        cout << "Enter first name: ";
        cin >> first;

        cout << "Enter last name: ";
        cin >> last;
    }

    void add() {
        string full = first + "" + last;

        cout << "Full Name = " << full;
    }
};

int main() {

    Name obj;

    obj.input();
    obj.add();

    return 0;
}