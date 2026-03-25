//WAP DEVELOPED STUDENTS MARKSHEET BY TAKING STUDENT RECORD - NAME, CLASS ,SECTION ,ENROLMENT, AND MARKS OF FIVER SUB AFTER THAT DISPLAY THE RESULT BY FINDING THE AVG AND % AT THE END PRINT THE GRADE BY USING PARAMETRIZED FUNCTION AND CALL BY VALUE
#include <iostream>
using namespace std;
int marksheet(string name, string cls, char sec, int enrolment, int marks1, int marks2, int marks3, int marks4, int marks5)
{
    float avg = (marks1 + marks2 + marks3 + marks4 + marks5) / 5.0;
    float percentage = (marks1 + marks2 + marks3 + marks4 + marks5) / 500.0 * 100;

    cout << "Name: " << name << endl;
    cout << "Class: " << cls << endl;
    cout << "Section: " << sec << endl;
    cout << "Enrolment: " << enrolment << endl;
    cout << "Average Marks: " << avg << endl;
    cout << "Percentage: " << percentage << "%" << endl;

    if (percentage >= 90)
        cout << "Grade: A" << endl;
    else if (percentage >= 80 && percentage < 90)
        cout << "Grade: B" << endl;
    else if (percentage >= 70 && percentage < 80)
        cout << "Grade: C" << endl;
    else if (percentage >= 60 && percentage < 70)
        cout << "Grade: D" << endl;
    else
        cout << "Grade: F" << endl;

    return 0;
}
    int main()
    {
        marksheet("arya sumit", "10th", 'A', 12345, 85, 90, 78, 92, 88);
        marksheet("rishi kumar", "10th", 'A', 12346, 80, 85, 75, 88, 82);
        marksheet("sanjee yadav", "10th", 'A', 12347, 75, 80, 70, 85, 78);
        return 0;
    }
        