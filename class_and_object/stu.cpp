#include <iostream>
using namespace std;
 
class Student {
public:
    int rollNo;
    string name;
 
    void input() {
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cout << "Enter Name: ";
        cin >> name;
    }

    void display() {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name;
    }
};
 
int main() {
    Student s;
    s.input();
    s.display();
    return 0;
}
