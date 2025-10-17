// Program for unary ++ operator overloading
#include <iostream>
using namespace std;

class Counter {
private:
    int count;

public:
    Counter() : count(0) {}

    void input() {
        cout << "Enter initial count: ";
        cin >> count;
    }

    void display() {
        cout << "Count: " << count << endl;
    }

    // Prefix ++
    Counter& operator++() {
        ++count;
        return *this;
    }

    // Postfix ++
    Counter operator++(int) {
        Counter temp = *this;
        ++count;
        return temp;
    }
};

int main() {
    Counter c;
    c.input();
    cout << "Before increment: ";
    c.display();

    ++c; // Prefix
    cout << "After prefix ++: ";
    c.display();

    c++; // Postfix
    cout << "After postfix ++: ";
    c.display();
    return 0;

}
