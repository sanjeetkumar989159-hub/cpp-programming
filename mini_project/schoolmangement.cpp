#include<iostream>
using namespace std;

class Person
{
protected:
    string name;

public:
    void getPerson()
    {
        cout<<"Enter Name: ";
        cin>>name;
    }
};

class Student : public Person
{
protected:
    int marks;

public:
    void getMarks()
    {
        cout<<"Enter Marks: ";
        cin>>marks;
    }
};

class SportsStudent : public Student
{
protected:
    int sportsMarks;

public:
    void getSports()
    {
        cout<<"Enter Sports Marks: ";
        cin>>sportsMarks;
    }
};

class Result : public SportsStudent
{
private:
    int total;

public:
    void calculate()
    {
        total = marks + sportsMarks;
    }

    void display()
    {
        cout<<"\nName: "<<name;
        cout<<"\nAcademic Marks: "<<marks;
        cout<<"\nSports Marks: "<<sportsMarks;
        cout<<"\nTotal: "<<total;
    }
};

int main()
{
    Result r;
    
    r.getPerson();
    r.getMarks();
    r.getSports();

    r.calculate();
    r.display();

    return 0;
}
