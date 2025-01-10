#include <iostream>
using namespace std;

int main() {
    char operation;
    float num1, num2;

    cout << "Enter an operator (+,-,*,/):" << endl;
    cin >> operation;
    cout << "Enter two numbers:" << endl;
    cin >> num1 >> num2;
    switch (operation) {
    case '+':
        cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
        break;
    case '-':
        cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
        break;
    case '*':
        cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
        break;
    case '/':
        cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
        break;
    default:
        cout << "Invalid operator" << endl;
    }
}