#include <iostream>
using namespace std;

class Student {
private:
    int marks = 95;

    friend void display(Student s);
};

void display(Student s) {
    cout << "Marks = " << s.marks;
}

int main() {
    Student s;
    display(s);
    return 0;
}