//  Program for TelephoneBill class with friend function
#include <iostream>
#include <string>
using namespace std;

class TelephoneBill {
public:
    string name;
    string address;
    long telNo;
    int noOfCalls;

    void input() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter address: ";
        cin.ignore();
        getline(cin, address);
        cout << "Enter telephone number: ";
        cin >> telNo;
        cout << "Enter number of calls: ";
        cin >> noOfCalls;
    }

    friend double computeBill(TelephoneBill &tb);
};

double computeBill(TelephoneBill &tb) {
    return tb.noOfCalls * 2.0;
}

int main() {
    TelephoneBill bill;
    bill.input();
    cout << "Amount to be paid: Rs. " << computeBill(bill) << endl;
    return 0;

}
