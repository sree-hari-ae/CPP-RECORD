// 7. Program for Time class with friend sum function
#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    void input() {
        cout << "Enter hours: ";
        cin >> hours;
        cout << "Enter minutes: ";
        cin >> minutes;
        cout << "Enter seconds: ";
        cin >> seconds;
    }

    void display() {
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }

    friend Time sum(Time t1, Time t2);
};

Time sum(Time t1, Time t2) {
    Time total;
    total.seconds = t1.seconds + t2.seconds;
    total.minutes = t1.minutes + t2.minutes + (total.seconds / 60);
    total.seconds %= 60;
    total.hours = t1.hours + t2.hours + (total.minutes / 60);
    total.minutes %= 60;
    return total;
}

int main() {
    Time t1, t2;
    cout << "Enter Time 1:" << endl;
    t1.input();
    cout << "Enter Time 2:" << endl;
    t2.input();

    cout << "Time 1: ";
    t1.display();
    cout << "Time 2: ";
    t2.display();

    Time total = sum(t1, t2);
    cout << "Sum: ";
    total.display();
    return 0;
}