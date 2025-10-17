// 9. Program for matrix addition using operator overloading
#include <iostream>
using namespace std;

class Matrix {
private:
    int mat[2][2];

public:
    void input() {
        cout << "Enter 2x2 matrix elements:" << endl;
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                cin >> mat[i][j];
            }
        }
    }

    void display() {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }

    Matrix operator+(Matrix m) {
        Matrix temp;
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                temp.mat[i][j] = mat[i][j] + m.mat[i][j];
            }
        }
        return temp;
    }
};

int main() {
    Matrix m1, m2;
    cout << "Enter Matrix 1:" << endl;
    m1.input();
    cout << "Enter Matrix 2:" << endl;
    m2.input();

    Matrix sum = m1 + m2;
    cout << "Sum Matrix:" << endl;
    sum.display();
    return 0;
}