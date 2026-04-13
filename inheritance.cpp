#include<iostream>
using namespace std;

class Shape {
public:
    virtual void draw() = 0;
};

class Square : public Shape {
public:
    void draw() {
        cout << "Drawing a Square shape." << endl;
    }
};
class Fruit {
public:
    void eat() {
        cout << "Eating a fruit. (Parent)" << endl;
    }
};

class Apple : public Fruit {
public:
    void taste() {
        cout << "Apple is sweet! (Child)" << endl;
    }
};

class Grandpa {
public:
    void farm() {
        cout << "Grandpa has a farm. (Level 1)" << endl;
    }
};

class Dad : public Grandpa {
public:
    void house() {
        cout << "Dad has a house. (Level 2)" << endl;
    }
};

class Son : public Dad {
public:
    void bike() {
        cout << "Son has a bike. (Level 3)" << endl;
    }
};

class Mother {
public:
    void cook() {
        cout << "Mother cooks food. (Parent 1)" << endl;
    }
};

class Father {
public:
    void earn() {
        cout << "Father earns money. (Parent 2)" << endl;
    }
};

class Child : public Mother, public Father {
public:
    void play() {
        cout << "Child plays games. (Child)" << endl;
    }
};

class Animal {
public:
    void breathe() {
        cout << "Animal is breathing. (Main Parent)" << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Dog says Woof! (Child 1)" << endl;
    }
};

class Cat : public Animal {
public:
    void meow() {
        cout << "Cat says Meow! (Child 2)" << endl;
    }
};

class Engine {
public:
    void start() {
        cout << "Engine is starting... (Grandparent)" << endl;
    }
};

class Battery {
public:
    void charge() {
        cout << "Battery is fully charged. (Second Parent)" << endl;
    }
};

class Car : public Engine {
public:
    void drive() {
        cout << "Car is driving. (First Parent)" << endl;
    }
};

class ElectricCar : public Car, public Battery {
public:
    void ecoMode() {
        cout << "Electric Car is saving pollution! (Hybrid Child)" << endl;
    }
};

int main() {
    cout << " 1. ABSTRACT CLASS " << endl;
    Square mySquare;
    mySquare.draw();

    cout << "\n 2. SINGLE INHERITANCE " << endl;
    Apple myApple;
    myApple.eat();
    myApple.taste();

    cout << "\n 3. MULTILEVEL INHERITANCE " << endl;
    Son mySon;
    mySon.farm();
    mySon.house();
    mySon.bike();

    cout << "\n 4. MULTIPLE INHERITANCE" << endl;
    Child myChild;
    myChild.cook();
    myChild.earn();
    myChild.play();

    cout << "\n 5. HIERARCHICAL INHERITANCE " << endl;
    Dog myDog;
    Cat myCat;

    myDog.breathe();
    myDog.bark();

    myCat.breathe();
    myCat.meow();

    cout << "\n 6. HYBRID INHERITANCE" << endl;
    ElectricCar myTesla;
    myTesla.start();
    myTesla.drive();
    myTesla.charge();
    myTesla.ecoMode();

    return 0;
}
