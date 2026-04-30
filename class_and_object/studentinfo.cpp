//wap to print student information when name and age is fix for this use a constructor create a code by class and object
#include<iostream>
using namespace std;
class Student {
public:
    string name;
    int age;
    Student() {
        name = "sanjeet";
        age = 19;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
int main() {
    Student s1;   
    return 0;
}