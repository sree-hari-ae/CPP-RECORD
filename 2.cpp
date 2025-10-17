// 2. Program for Book class
#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    int BookID;
    string BookName;
    double BookPrice;

    double total_cost(int n) {
        return BookPrice * n;
    }

public:
    void inputDetails() {
        cout << "Enter Book ID: ";
        cin >> BookID;
        cout << "Enter Book Name: ";
        cin.ignore();
      cin>> Book Name;
        cout << "Enter Book Price: ";
        cin >> BookPrice;
    }

    void displayDetails() {
        cout << "Book ID: " << BookID << ", Name: " << BookName << ", Price: " << BookPrice << endl;
    }

    void calculateTotal() {
        int copies;
        cout << "Enter number of copies: ";
        cin >> copies;
        cout << "Total cost: " << total_cost(copies) << endl;
    }
};

int main() {
    Book book1, book2, book3;
    cout << "Enter details for Book 1:" << endl;
    book1.inputDetails();
    cout << "Enter details for Book 2:" << endl;
    book2.inputDetails();
    cout << "Enter details for Book 3:" << endl;
    book3.inputDetails();

    cout << "\nBook 1 details:" << endl;
    book1.displayDetails();
    book1.calculateTotal();
    cout << "Book 2 details:" << endl;
    book2.displayDetails();
    book2.calculateTotal();
    cout << "Book 3 details:" << endl;
    book3.displayDetails();
    book3.calculateTotal();
    return 0;

}
