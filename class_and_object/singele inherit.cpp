#include<iostream>
using namespace std;

class Teacher {
public:
    void read() {
        cout << "today i read about c++" << endl;
    }
};

class Student : public Teacher {
public:
    void sport() {
        cout << "he is play the cricket and football" << endl;
    }
};

class exam : public Teacher {   // FIX HERE
public:
    void ex() {
        cout << "today is exam of c++" << endl;
    }
};

int main() {
    exam d;
    d.read();
    //d.sport();
    d.ex();
    return 0;
}