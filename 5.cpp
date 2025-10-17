// 5. Program for areas using function overloading
#include <iostream>
using namespace std;

double area(double r) { // Circle
    return 3.14159 * r * r;
}

double area(double s, char type) { // Square, using char to differentiate
    if (type == 's') return s * s;
    return 0;
}

double area(double l, double w) { // Rectangle
    return l * w;
}

double area(double b, double h, int type) { // Triangle, using int to differentiate
    if (type == 1) return 0.5 * b * h;
    return 0;
}

int main() {
    double r, s, l, w, b, h;
    cout << "Enter radius for circle: ";
    cin >> r;
    cout << "Area of circle: " << area(r) << endl;

    cout << "Enter side for square: ";
    cin >> s;
    cout << "Area of square: " << area(s, 's') << endl;

    cout << "Enter length and width for rectangle: ";
    cin >> l >> w;
    cout << "Area of rectangle: " << area(l, w) << endl;

    cout << "Enter base and height for triangle: ";
    cin >> b >> h;
    cout << "Area of triangle: " << area(b, h, 1) << endl;
    return 0;
}