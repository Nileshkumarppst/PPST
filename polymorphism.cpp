#include <iostream>
using namespace std;

class Vehicle {
public:

    virtual void showType() {
        cout << "I am a generic Vehicle." << endl;
    }
};

class Car : public Vehicle {
public:
    void showType() override {
        cout << "I am a Car with 4 wheels!" << endl;
    }
};

class Bike : public Vehicle {
public:

    void showType() override {
        cout << "I am a Bike with 2 wheels!" << endl;
    }
};

void identifyVehicle(Vehicle& v) {
    v.showType();
}
int main() {
    cout << "RUN-TIME POLYMORPHISM \n" << endl;

    Car myCar;
    Bike myBike;
    Vehicle genericVehicle;

    identifyVehicle(myCar);
    identifyVehicle(myBike);
    identifyVehicle(genericVehicle);

    return 0;
}
