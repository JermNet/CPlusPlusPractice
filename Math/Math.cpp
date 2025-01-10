#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b;

    cout << "Please enter a number: " << endl;
    cin >> a;
    cout << "Please enter b number: " << endl;
    cin >> b;
    cout << "Here are square roots: " << sqrt(a) << " " << sqrt(b) << endl;
    cout << "And here are the cubes: " << pow(a, 3) << " " << pow(b, 3) << endl;

    return 0;
}