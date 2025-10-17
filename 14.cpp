// 14. Program for multilevel inheritance with virtual base
#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    string name;
    int rollno;
    string course;

public:
    void inputStudent() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll no: ";
        cin >> rollno;
        cout << "Enter course: ";
        cin >> course;
    }

    void displayStudent() {
        cout << "Name: " << name << ", Roll No: " << rollno << ", Course: " << course << endl;
    }
};

class Test : virtual public Student {
protected:
    int marks[3];

public:
    void inputTest() {
        cout << "Enter marks in 3 subjects: ";
        for (int i = 0; i < 3; i++) {
            cin >> marks[i];
        }
    }

    int totalMarks() {
        return marks[0] + marks[1] + marks[2];
    }

    void displayTest() {
        cout << "Marks: " << marks[0] << ", " << marks[1] << ", " << marks[2] << endl;
    }
};

class GraceMarks : virtual public Student {
protected:
    int bonusMark;

public:
    void inputGrace() {
        cout << "Enter bonus marks: ";
        cin >> bonusMark;
    }

    int getBonus() {
        return bonusMark;
    }
};

class Result : public Test, public GraceMarks {
public:
    void calculateTotal() {
        int total = totalMarks() + getBonus();
        cout << "Total marks: " << total << endl;
    }

    void displayAll() {
        displayStudent();
        displayTest();
        cout << "Bonus: " << getBonus() << endl;
        calculateTotal();
    }
};

int main() {
    Result r;
    r.inputStudent(); // From virtual base
    r.inputTest();
    r.inputGrace();
    r.displayAll();
    return 0;
}