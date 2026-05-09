#include<iostream>
using namespace std;

class Academic {
protected:
    int amarks;
};

class Sports {
protected:
    int smarks;
};

class Result : public Academic, public Sports {
public:
    void input() {
        cout << "Enter Academic Marks: ";
        cin >> amarks;

        cout << "Enter Sports Marks: ";
        cin >> smarks;
    }

    void display() {
        cout << "Total Performance = "
             << amarks + smarks;
    }
};

int main() {
    Result r;

    r.input();
    r.display();
}