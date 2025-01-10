#include <iostream>
using namespace std;

class Car {
public:
    string brand, model;
    int mileage = 0;

    void drive(int distance) {
        mileage += distance;
    }

    void showData() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Mileage: " << mileage << endl;
    }
};

class Room {
private:
    double length, width, height;
public:
    Room(double l, double w, double h) {
        length = l;
        width = w;
        height = h;
    }
    void setLength(double l) {
        length = l;
    }
    void setWidth(double w) {
        width = w;
    }
    void setHeight(double h) {
        height = h;
    }
    double getLength() {
        return length;
    }
    double getWidth() {
        return width;
    }
    double getHeight() {
        return height;
    }
    double getAreaOfCeiling() {
        return length * width;
    }
    double getAreaOfFloor() {
        return length * width;
    }
    double getAreaOfWalls() {
        return (length * height) * 4;
    }

};

int main() {
    Room myRoom = Room(1.25, 2, 3);
    cout << "Walls: " << myRoom.getAreaOfWalls() << endl;
    cout << "Floor: " << myRoom.getAreaOfFloor() << endl;
    cout << "Ceiling: " << myRoom.getAreaOfCeiling() << endl;
}