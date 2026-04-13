#include <iostream>
using namespace std;

class ComplexNum {
public:
    double r1, i1, r2, i2;
    double sumR, sumI, mulR, mulI;

    void getInput() {
        cout << "Enter first complex number (real imaginary): ";
        cin >> r1 >> i1;

        cout << "Enter second complex number (real imaginary): ";
        cin >> r2 >> i2;
    }

    void add() {
        sumR = r1 + r2;
        sumI = i1 + i2;
    }

    void multiply() {
        mulR = (r1 * r2) - (i1 * i2);
        mulI = (r1 * i2) + (r2 * i1);
    }

    void display() {
        cout << "\nAddition: " << sumR << " + " << sumI << "i\n";
        cout << "Multiplication: " << mulR << " + " << mulI << "i\n";
    }
};

int main() {
    ComplexNum obj;

    obj.getInput();
    obj.add();
    obj.multiply();
    obj.display();

    return 0;
}
