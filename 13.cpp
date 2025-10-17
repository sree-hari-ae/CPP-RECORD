//  Program for virtual functions with polygon
#include <iostream>
using namespace std;

class c_polygon {
public:
// Pure virtual
    virtual double area() = 0; 
};

class c_rectangle : public c_polygon {
private:
    double length, width;

public:
    void input() {
        cout << "Enter length and width: ";
        cin >> length >> width;
    }

    double area() override {
        return length * width;
    }
};

class c_triangle : public c_polygon {
private:
    double base, height;

public:
    void input() {
        cout << "Enter base and height: ";
        cin >> base >> height;
    }

    double area() override {
        return 0.5 * base * height;
    }
};

int main() {
    c_rectangle rect;
    rect.input();
    cout << "Rectangle area: " << rect.area() << endl;

    c_triangle tri;
    tri.input();
    cout << "Triangle area: " << tri.area() << endl;
    return 0;

}
