//Write a programm to establish relationship among class by using multilevel inheritance when classes are university , course,faculty and student  create a proper structure to justify multilevel inheritance
#include<iostream>
using namespace std;
class university
{ 
public:
string name="SAGE UNIVERSITY";
void uni()
{
cout<<"University name is ="<<name<<endl;
}
};
class course:public university
{
    public:
    string name="BTECH (Data analytics)";
    void cou()
    {
        cout<<" course name is ="<<name<<endl;
    }

};

class faculty:public course
{
    public:
    string name="UMESH Sir";
    void fac()
    {
        cout<<" faculty name is ="<<name<<endl;
    }

};
class student:public faculty
{
    public:
    string name="sanjeet kumar";
    void stu()
    {
        cout<<" student name is ="<<name<<endl;
    }

};
 int main()
 {
    student s;
    s.uni();
    s.cou();
    s.fac();
    s.stu();


 }