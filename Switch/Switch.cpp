#include <iostream>
using namespace std;

int main() {
    int month;

    cout << "Please enter a number from 1 to 12:" << endl;
    cin >> month;
    switch (month) {
    case 1:
        cout << "It is currently January." << endl;
        break;
    case 2:
        cout << "It is currently February." << endl;
        break;
    case 3:
        cout << "It is currently March." << endl;
        break;
    case 4:
        cout << "It is currently April." << endl;
        break;
    case 5:
        cout << "It is currently May." << endl;
        break;
    case 6:
        cout << "It is currently June." << endl;
        break;
    case 7:
        cout << "It is currently July." << endl;
        break;
    case 8:
        cout << "It is currently August." << endl;
        break;
    case 9:
        cout << "It is currently September." << endl;
        break;
    case 10:
        cout << "It is currently October." << endl;
        break;
    case 11:
        cout << "It is currently November." << endl;
        break;
    case 12:
        cout << "It is currently December." << endl;
        break;
    default:
        cout << "It is not a valid number." << endl;

    }
}