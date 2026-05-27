#include <iostream>
#include <string>
using namespace std;

class StudentInfo {
protected:
    string name[5];
    string classess[5];
    int roll_num[5];

public:
    StudentInfo() {
        for (int i = 0; i < 5; i++) {
            name[i] = "";
            classess[i] = "";
            roll_num[i] = 0;
        }
    }

    void inputInfo() {
        for (int i = 0; i < 5; i++) {
            cout << "\nEnter details of student " << i + 1 << endl;
            cout << "Enter name: ";
            cin.ignore();
            getline(cin, name[i]);
            cout << "Enter class: ";
            cin >> classess[i];
            cout << "Enter roll number: ";
            cin >> roll_num[i];
        }
    }
    void studentInfo() {
        for (int i = 0; i < 5; i++) {
            cout << "\nStudent " << i + 1 << " Information" << endl;
            cout << "Name: " << name[i] << endl;
            cout << "Class: " << classess[i] << endl;
            cout << "Roll number: " << roll_num[i] << endl;
        }
    }
};

class Marksheet : public StudentInfo {
private:
    int maths[5];
    int physics[5];
    int hindi[5];
    int english[5];
    int cpp[5];

public:
    Marksheet() {
        for (int i = 0; i < 5; i++) {
            maths[i] = 0;
            physics[i] = 0;
            hindi[i] = 0;
            english[i] = 0;
            cpp[i] = 0;
        }
    }
    void inputMarks() {
        for (int i = 0; i < 5; i++) {
            cout << "\nEnter marks of student " << i + 1 << endl;

            cout << "Enter maths marks: ";
            cin >> maths[i];

            cout << "Enter physics marks: ";
            cin >> physics[i];

            cout << "Enter hindi marks: ";
            cin >> hindi[i];

            cout << "Enter english marks: ";
            cin >> english[i];

            cout << "Enter cpp marks: ";
            cin >> cpp[i];
        }
    }

    inline int totalMarks(int i) {
        return maths[i] + physics[i] + hindi[i] + english[i] + cpp[i];
    }

    inline float averageMarks(int i) {
        return totalMarks(i) / 5.0;
    }

    inline float percentage(int i) {
        return totalMarks(i) / 5.0;
    }

    void showMarks() {
        for (int i = 0; i < 5; i++) {
            int sum = totalMarks(i);
            if(sum == 0){
                cout<<"Marks will be discussed\n";
                inputMarks();
            }
            cout << "\nMarks of student " << i + 1 << endl;
            cout << "Maths: " << maths[i] << endl;
            cout << "Physics: " << physics[i] << endl;
            cout << "Hindi: " << hindi[i] << endl;
            cout << "English: " << english[i] << endl;
            cout << "CPP: " << cpp[i] << endl;

            cout << "Total Marks: " << sum << "/500" << endl;
            cout << "Average Marks: " << averageMarks(i) << endl;
            cout << "Percentage: " << percentage(i) << "%" << endl;
        }
    }

    void showMarksheet() {
        for (int i = 0; i < 5; i++) {

            cout << "Name: " << name[i] << endl;
            cout << "Class: " << classess[i] << endl;
            cout << "Roll number: " << roll_num[i] << endl;

            cout << "Maths: " << maths[i] << endl;
            cout << "Physics: " << physics[i] << endl;
            cout << "Hindi: " << hindi[i] << endl;
            cout << "English: " << english[i] << endl;
            cout << "CPP: " << cpp[i] << endl;

            cout << "Total Marks: " << totalMarks(i) << "/500" << endl;
            cout << "Average Marks: " << averageMarks(i) << endl;
            cout << "Percentage: " << percentage(i) << "%" << endl;
        }
    }

    void top5Students() {
        int index[5];
        for (int i = 0; i < 5; i++) {
            index[i] = i;
        }
        for (int i = 0; i < 5; i++) {
            for (int j = i + 1; j < 5; j++) {
                if (percentage(index[i]) < percentage(index[j])) {
                    int temp = index[i];
                    index[i] = index[j];
                    index[j] = temp;
                }
            }
        }

        for (int i = 0; i < 5; i++) {
            int pos = index[i];

            cout << "\nRank " << i + 1 << endl;
            cout << "Name: " << name[pos] << endl;
            cout << "Class: " << classess[pos] << endl;
            cout << "Roll Number: " << roll_num[pos] << endl;
            cout << "Total Marks: " << totalMarks(pos) << "/500" << endl;
            cout << "Average Marks: " << averageMarks(pos) << endl;
            cout << "Percentage: " << percentage(pos) << "%" << endl;
        }
    }
};

int main() {
    Marksheet s;

    s.inputInfo();
    s.inputMarks();

    s.studentInfo();
    s.showMarks();
    s.showMarksheet();

    s.top5Students();

    return 0;
}