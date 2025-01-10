#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Enter the first number (dividend): ";
    cin >> num1;
    cout << "Enter the second number (divisor): ";
    cin >> num2;

    cout << "Quotient: " << num1 / num2 << endl;
    cout << "Remainder: " << num1 % num2 << endl;

    return 0;
}

