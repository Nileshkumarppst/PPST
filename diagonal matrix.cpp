#include <iostream>

using namespace std;

int main() {
    int r, c;

    cout << "Enter the number of rows and columns: ";
    cin >> r >> c;

    int A[r][c];

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> A[i][j];
        }
    }
    cout << "Matrix with only diagonal elements:" << endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {

            if (i == j) {
                cout << A[i][j] << " ";
            } else {
                cout << "0 ";
            }
        }
        cout << endl;
    }

    return 0;
}
