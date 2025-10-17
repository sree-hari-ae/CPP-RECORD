#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string brand;
    string model;
    int year;

public:
    // Function to read data members
    void readData() {
        cout << "Enter Brand: ";
        cin>> brand;
        cout << "Enter Model: ";
        cin>> model;
        cout << "Enter Year: ";
        cin >> year;
        cin.ignore(); // Clear input buffer
    }

    // Function to display car details
    void displayDetails() {
        cout << "Brand: " << brand << ", Model: " << model << ", Year: " << year << endl;
    }
};

int main() {
    Car car1, car2, car3;

    cout << "Enter details for Car 1:\n";
    car1.readData();
    cout << "\nEnter details for Car 2:\n";
    car2.readData();
    cout << "\nEnter details for Car 3:\n";
    car3.readData();

    cout << "\nCar Details:\n";
    car1.displayDetails();
    car2.displayDetails();
    car3.displayDetails();

    return 0;
}
