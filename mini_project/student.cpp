#include<iostream>
using namespace std;
class student
{
    private:
    int roll;
    string name;
    public:
     void studentdata ()
{
   cout<<"Enter the roll number : "<<endl;
    cin>>roll;
    cout<<"enter the name of student :";
    cin>>name;

}
     
};
 class result:public student
 {
   private:
    int m1,m2,m3;
    float percentage;
    char grade;
    public:
    void getresult()
    {
    cout<<"Enter the value of three subject :"<<endl;
    cin>>m1>>m2>>m3;
    percentage = ((m1+m2+m3) * 100.0) / 300;
     if (percentage>80)
     grade='A';

     else if (percentage >60)
     grade='B';
     else if(percentage>45)
     grade='c';
     else
     grade='D';

    }
     void display()
     {
        cout<<"Roll number :"<<roll<<endl;
        cout<<"Name is:"<<name<<endl;
        
        cout<<"percentage:"<<percentage<<endl;
    
        cout<<"grade is:"<<grade<<endl;
        
        
     }
      
 };
 int main()
 {
    result s;
    s.studentdata();
    s.getresult();
    s.display();
 }
