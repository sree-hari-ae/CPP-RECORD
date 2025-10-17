// 4. Program for areas using inline functions
#include <iostream>
using namespace std;

inline double areaCircle(double r) {
    return 3.14159 * r * r;
}

inline double areaSquare(double s) {
    return s * s;
}

inline double areaRectangle(double l, double w) {
    return l * w;
}

inline double areaTriangle(double b, double h) {
    return 0.5 * b * h;
}

int main() {
    double r, s, l, w, b, h;
    cout << "Enter radius for circle: ";
    cin >> r;
    cout << "Area of circle: " << areaCircle(r) << endl;

    cout << "Enter side for square: ";
    cin >> s;
    cout << "Area of square: " << areaSquare(s) << endl;

    cout << "Enter length and width for rectangle: ";
    cin >> l >> w;
    cout << "Area of rectangle: " << areaRectangle(l, w) << endl;

    cout << "Enter base and height for triangle: ";
    cin >> b >> h;
    cout << "Area of triangle: " << areaTriangle(b, h) << endl;
    return 0;
}