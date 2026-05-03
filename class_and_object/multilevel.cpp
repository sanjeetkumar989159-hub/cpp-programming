#include<iostream>
using namespace std;

// Level 1
class A {
public:
    void showA() {
        cout << "This is Class A" << endl;
    }
};

// Level 2
class B : public A {
public:
    void showB() {
        cout << "This is Class B" << endl;
    }
};

// Level 3
class C : public B {
public:
    void showC() {
        cout << "This is Class C" << endl;
    }
};

int main() {
    C obj;

    obj.showA();   // from A
    obj.showB();   // from B
    obj.showC();   // own function

    return 0;
}