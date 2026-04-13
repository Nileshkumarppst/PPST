#include <iostream>
using namespace std;

class Matrix {
private:
    int mat[10][10];
    int rows;
    int cols;

public:
    Matrix(int r = 3, int c = 3) {
        rows = r;
        cols = c;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                mat[i][j] = 0;
            }
        }
    }
    void input() {
        cout << "Enter elements for " << rows << "x" << cols << " matrix:\n";
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cin >> mat[i][j];
            }
        }
    }
    void display() const {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << mat[i][j] << "\t";
            }
            cout << endl;
        }
    }
    Matrix operator+(const Matrix& other) {
        Matrix result(rows, cols);
        if (rows != other.rows || cols != other.cols) {
            cout << "Error: Matrix dimensions must match for addition!" << endl;
            return result;
        }

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result.mat[i][j] = this->mat[i][j] + other.mat[i][j];
            }
        }
        return result;
    }
    Matrix operator-(const Matrix& other) {
        Matrix result(rows, cols);
        if (rows != other.rows || cols != other.cols) {
            cout << "Error: Matrix dimensions must match for subtraction!" << endl;
            return result;
        }

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result.mat[i][j] = this->mat[i][j] - other.mat[i][j];
            }
        }
        return result;
    }
};

int main() {
    int r, c;

    cout << "--- Matrix Operations ---" << endl;
    cout << "Enter number of rows and columns for the matrices: ";
    cin >> r >> c;

    Matrix m1(r, c);
    Matrix m2(r, c);

    cout << "\n--- Input Matrix 1 ---" << endl;
    m1.input();

    cout << "\n--- Input Matrix 2 ---" << endl;
    m2.input();

    Matrix sum = m1 + m2;
    Matrix difference = m1 - m2;

    cout << "\nResult of Addition (M1 + M2):" << endl;
    sum.display();

    cout << "\nResult of Subtraction (M1 - M2):" << endl;
    difference.display();

    return 0;
}

