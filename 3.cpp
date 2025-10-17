//  Program for Rectangle class
#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle() {
        length = 0;
        width = 0;
    }

    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    void display() {
        cout << "Length: " << length << ", Width: " << width << endl;
    }

    Rectangle() {
        cout << "Rectangle object destroyed." << endl;
    }
};

int main() {
    double l, w;
    cout << "Enter length for parameterized rectangle: ";
    cin >> l;
    cout << "Enter width for parameterized rectangle: ";
    cin >> w;

    // Default constructor
    
    Rectangle rect1;
    
    // Parameterized constructor
    
    Rectangle rect2(l, w); 

    cout << "Default Rectangle:" << endl;
    rect1.display();
    cout << "Parameterized Rectangle:" << endl;
    rect2.display();

    return 0; // Destructors called here

}
