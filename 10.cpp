// 10. Program for single inheritance: Person -> Student
#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    void input() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

class Student : public Person {
private:
    int roll_number;

public:
    void inputStudent() {
        input(); // Base input
        cout << "Enter roll number: ";
        cin >> roll_number;
    }

    void showDetails() {
        display(); // Base display
        cout << "Roll Number: " << roll_number << endl;
    }
};

int main() {
    Student s;
    s.inputStudent();
    s.showDetails();
    return 0;
}