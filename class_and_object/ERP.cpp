#include<iostream>
using namespace std;

class Student 
{
public:

    int rollNo;
    string name;
    string course; 
    int age;

    void getStudentData()
    {
        cout << "Enter Roll Number : ";
        cin >> rollNo;

        cout << "Enter Name : ";
        cin >> name;

        cout << "Enter Course : ";
        cin >> course;

        cout << "Enter Age : ";
        cin >> age;
    }

    void displayStudentData()
    {
        cout << "\n--------------- STUDENT DETAILS ----------------\n";

        cout << "Roll Number : " << rollNo << endl;
        cout << "Name        : " << name << endl;
        cout << "Course      : " << course << endl;
        cout << "Age         : " << age << endl;
    }
};



class Result : public Student 
{
public:

    int cppMarks;
    int javaMarks;
    int mathsMarks;
    int total;
    float percentage;
    char grade;

    void getMarks()
    {
        cout << "\nEnter C++ Marks : ";
        cin >> cppMarks;

        cout << "Enter Java Marks : ";
        cin >> javaMarks;

        cout << "Enter Maths Marks : ";
        cin >> mathsMarks;
    }

    void calculateResult()
    {
        total = cppMarks + javaMarks + mathsMarks;

        percentage = total / 3.0;

        if(percentage >= 90)
        {
            grade = 'A';
        }
        else if(percentage >= 75)
        {
            grade = 'B';
        }
        else if(percentage >= 60)
        {
            grade = 'C';
        }
        else
        {
            grade = 'D';
        }
    }

    void displayResult()
    {
        cout << "\n--------------- RESULT DETAILS ---------------\n";

        cout << "C++ Marks   : " << cppMarks << endl;
        cout << "Java Marks  : " << javaMarks << endl;
        cout << "Maths Marks : " << mathsMarks << endl;

        cout << "Total       : " << total << endl;

        cout << "Percentage  : " << percentage << "%" << endl;

        cout << "Grade       : " << grade << endl;
    }
};


class Attendance : public Student
{
public:

    int totalClasses;
    int attendedClasses;
    float attendancePercent;
    void getAttendance()
    {
        cout << "\nEnter Total Classes : ";
        cin >> totalClasses;

        cout << "Enter Attended Classes : ";
        cin >> attendedClasses;
    }

    void calculateAttendance()
    {
        attendancePercent = (attendedClasses * 100) / totalClasses;
    }

    void displayAttendance()
    {
        cout << "\n--------------- ATTENDANCE DETAILS ---------------\n";

        cout << "Total Classes      : "
             << totalClasses << endl;

        cout << "Attended Classes   : "
             << attendedClasses << endl;

        cout << "Attendance Percent : "
             << attendancePercent << "%" << endl;
    }
};



class Fee : public Student
{
public:

    float totalFee;
    float paidFee;
    float remainingFee;

    void getFee()
    {
        cout << "\nEnter Total Fee : ";
        cin >> totalFee;

        cout << "Enter Paid Fee : ";
        cin >> paidFee;
    }

    void calculateFee()
    {
        remainingFee = totalFee - paidFee;
    }

    void displayFee()
    {
        cout << "\n---------------- FEE DETAILS ---------------\n";

        cout << "Total Fee     : " << totalFee << endl;

        cout << "Paid Fee      : " << paidFee << endl;

        cout << "Remaining Fee : " << remainingFee << endl;
    }
};



int main()
{
    Result r;
    Attendance a;
    Fee f;
    
    r.getStudentData();
    r.getMarks();
    r.calculateResult();
    
    a.getAttendance();
    a.calculateAttendance();
    
    f.getFee();
    f.calculateFee();


    cout << "\n\n======================== FINAL REPORT =========================";

    r.displayStudentData();

    r.displayResult();

    a.displayAttendance();

    f.displayFee();

    return 0;
}