#include <iostream>
using namespace std;

class ShapeArea {
public:
    int side, length, width;
    float radius;

    void inputValues() {
        cout << "Enter side of square: ";
        cin >> side;

        cout << "Enter length and width of rectangle: ";
        cin >> length >> width;

        cout << "Enter radius of circle: ";
        cin >> radius;
    }

    float calcArea(float r) {
        const float PI = 3.14;
        return PI * r * r;
    }

    int calcArea(int l, int w) {
        return l * w;
    }

    int calcArea(int s) {
        return s * s;
    }
};

int main1() {
    ShapeArea obj;

    obj.inputValues();

    cout << "\n--- Areas ---\n";
    cout << "Circle: " << obj.calcArea(obj.radius) << endl;
    cout << "Rectangle: " << obj.calcArea(obj.length, obj.width) << endl;
    cout << "Square: " << obj.calcArea(obj.side) << endl;

    return 0;
}
