//  Program for multiple inheritance
#include <iostream>
using namespace std;

class Base1 {
protected:
    int data1;

public:
    void input1() {
        cout << "Enter data1: ";
        cin >> data1;
    }
};

class Base2 {
protected:
    int data2;

public:
    void input2() {
        cout << "Enter data2: ";
        cin >> data2;
    }
};

class Derived : public Base1, public Base2 {
public:
    void display() {
        cout << "Data1: " << data1 << ", Data2: " << data2 << endl;
    }
};

int main() {
    Derived d;
    d.input1();
    d.input2();
    d.display();
    return 0;

}
