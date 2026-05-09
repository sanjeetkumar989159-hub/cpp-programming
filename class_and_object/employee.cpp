#include<iostream>
using namespace std;

class Employee {
protected:
    int id;
    string name;

public:
    void getEmployee() {
        cout << "Enter Employee ID: ";
        cin >> id;

        cout << "Enter Name: ";
        cin >> name;
    }
};

class Salary : public Employee {
private:
    float basic, hra, da, total;

public:
    void getSalary() {
        cout << "Enter Basic Salary: ";
        cin >> basic;

        cout << "Enter HRA: ";
        cin >> hra;

        cout << "Enter DA: ";
        cin >> da;
    }

    void calculate() {
        total = basic + hra + da;
    }

    void display() {
        cout << "\nEmployee ID: " << id;
        cout << "\nName: " << name;
        cout << "\nTotal Salary: " << total;
    }
};

int main() {
    Salary s;

    s.getEmployee();
    s.getSalary();
    s.calculate();
    s.display();
}